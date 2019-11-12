#include <iostream>

int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
   
    
    int x=5,y=3,z;
    z=subtraction(7,2);
    std::cout<< "memory address of the first result " <<&z<<"\n";
    int r2=subtraction(7,2);
    std::cout<< "memory address of the second result" <<&r2<<"\n";
    int r3=subtraction(x,y);
    std::cout<< "The memory address of the third result" <<&r3<<"\n";
    z=4+subtraction(x,y);
    std::cout<< "memory address of the fourth result" <<&z<<"\n";
    return 0;
}