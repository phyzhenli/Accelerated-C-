# Accelerated C++ Exercise Answer

## Chapter 1:

P4 P5 P34 表达式及其副作用：
P4 P5说明了std::endl这个操作数在控制流std::cout所产生的副作用：将缓冲区刷新并输出到输出设备上。

## Chapter 2:

P35 2-3
```
const int pad ;
cin >> pad ;
需要把const去掉才可以cin
```

## Chapter 4:

1.写第四章的grade程序的时候：
main.cpp在include自己的头文件的时候，相应的.h中的include会拿过来，但是函数的实现也就是.cpp中的include不会拿过来，需要手动添加。  
2.写4-4的时候，涉及到double类型的数据拿到数字位数，然后进行排列。

起初参照了一篇博客用了sstream的方法，但是这个办法的原理是把double转成string，这个string有可能会很长，位数会出错。之后又参照了https://blog.csdn.net/qq_23100787/article/details/51387986，但double类型的数据不设置break的话就会跑死在循环里，原因是我的判断条件是：double - int == 0，float的话可以跳出来，但结果碰巧才能正确，因为小数十进制转二进制有可能会有精度损失，也会造成位数增多。

最后采用的办法就是先用字符串，然后再参照https://blog.csdn.net/HiccupHiccup/article/details/62421032用stod()进行类型转换。

## Chapter 5

5-0.  
ret.insert(ret.end(), split(s).begin(), split(s).end())编译通过跑不过，fatol error，原因应该是split(s).begin()不是左值，是临时的。

5-3.  
P88 list不支持索引而vector支持索引，所以没有list[i]。

5-6.
```
vector.insert(vector.begin(), 8);  //把8塞到第一个元素的前面
vector.insert(vector.begin() + 2, 8)； //把8塞到第二个元素的前面
vectro.begin()  返回的是迭代器类型，类似于地址。
```

## Chapter 6

6-3.
```
vector<int> u(10, 100);
vector<int> v;
copy(u.begin(), u.end(), v.begin());
```
可以编译，但执行出错，原因在P107，v没有元素，所以复制会出错。  
解决办法：  
1.对v进行初始化：vector<int> v(10),v的大小要和u一致；  
2.用back_inserter(v);  
3.用v.insert(v.end(), u.begin(), u.end())；  
4.初始化的时候复制：vector<int> v(u.begin(), u.end())。  //P184 初始化时复制

6-9.  
copy或者insert要同类型的才可以，比如不能：copy(ret.begin(), ret.end(), back_inserter(str))，  
但是可以：copy(ret[0].begin(), ret[0].end(), back_inserter(str))，  
也可以：str.insert(str.end(), (*iter).begin(), (*iter).end())。

# Chapter 7

find_word_lines.  
xref缺省函数参数：  
参考：https://blog.csdn.net/weikangc/article/details/45769431  
定义和声明分开的时候，声明可以定义默认值，定义不再指定缺省参数。

7-9.  
int测试是32位，无符号最大值为2147483647，二进制是31位；  
long测试是64位，无符号最大值是9223372036854775807，二进制是63位。  
https://github.com/bitsai/book-exercises/blob/master/Accelerated%20C%2B%2B/chapter07/7-9.cpp  感觉不太对。

# Chapter 8

8-0.  

median:  
https://blog.csdn.net/tang05505622334/article/details/90478013  
编译器编译的时候对每一个.cpp分开编译，用到某一个函数的时候只是留一个指令，等到连接的时候会通过对应函数的.obj的符号表将地址替换成真实函数的地址，最后生成一个.o文件。  
c++标准对没有使用的模板函数，编译的时候就不会实例化，也就是说，如果所有的.cpp里面没有调用该函数的语句，那么所有的.obj里面就不会有该函数的二进制代码。所以一般在.h里面把模板函数的定义也写清楚，这样#include该.h文件时就可以把定义拿到，编译的时候可以直接进行实例化。

copy:  
back_inserter产生的迭代器是输出迭代器，这个迭代器只支持*it和++it，没有办法--it，但包含输入迭代器的功能（P161)。  

split:  
打算把fdp3p7_lib中的split函数改成函数模板，split里面需要用到两个函数：space和not_space。本来想直接去掉split.cpp文件，把这两个函数的定义直接放在split.h里面，没想到编译的时候报这两个函数multiple definition，原因应该是在多个cpp中#include了split.h，导致出现多个space和not_space的定义。  
解决办法：  
1.把space和not_space放在split.cpp里面，并且在split.h声明一下。  
2.参考：https://jiadebin.github.io/2017/04/03/%E5%A4%B4%E6%96%87%E4%BB%B6%E4%B8%AD%E5%AE%9A%E4%B9%89%E5%87%BD%E6%95%B0%E5%BC%95%E5%8F%91%E7%9A%84multiple-definition/。  
在split.h文件中引入inline关键字。

split在getline读取到空行的时候也会写入到迭代器对应的容器中，导致出错，可以在getline判断一下：
```
if (!str.empty()) {
    split(str, back_inserter(v));
    ret.push_back(v);
}
```

8-2.

transform:
```  
*dest++ = f(*begin++);
```
参考：https://www.cnblogs.com/zhang-xiao/archive/2013/04/02/2995851.html  
标准的后缀++就是 “对操作对象做+1操作，并返回操作前的值”。

accumulate:  
引用不能是定值，比如accumulate(v.begin(), v.end(), 0)，这里0就不是引用。template中如果是引用编译会报错no instance。