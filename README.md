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

起初参照了一篇博客用了sstream的方法，但是这个办法的原理是把double转成string，这个string有可能会很长，位数会出错。

之后又参照了https://blog.csdn.net/qq_23100787/article/details/51387986，但double类型的数据不设置break的话就会跑死在循环里，原因是我的判断条件是：double - int == 0，float的话可以跳出来，但结果碰巧才能正确，因为小数十进制转二进制有可能会有精度损失，也会造成位数增多。

最后采用的办法就是先用字符串，然后再参照https://blog.csdn.net/HiccupHiccup/article/details/62421032用stod()进行类型转换。

## Chapter 5

1.ret.insert(ret.end(), split(s).begin(), split(s).end())编译通过跑不过，fatol error，原因应该是split(s).begin()不是左值，是临时的。
