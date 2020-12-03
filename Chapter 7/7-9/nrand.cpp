#include "nrand.h"
#include <stdexcept>

using std::domain_error;

int nrand(const int& n)
{
    int r;
    if (n <= 0)
        throw domain_error("Argument to nrand is out of range");
    if (n <= RAND_MAX) {
        const int bucket_size = RAND_MAX / n;

        do r = rand() / bucket_size;
        
        while (r >= n);
    } else {
        const int quo = n / RAND_MAX;
        do {
            const int bucket = nrand(RAND_MAX);
            const int bucket_size = nrand(quo);
            r = bucket + RAND_MAX * bucket_size; 
        } while (r >= n);
      } 

    return r;
}