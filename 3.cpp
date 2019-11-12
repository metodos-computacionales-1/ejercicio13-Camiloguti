#include <iostream>

long fibonaccirecursivo(long n){
    long fibonacci = 0;
    if (n == 0)
    {
        fibonacci = 0;
    }
    else if (n == 1)
    {
        fibonacci = 1;
    }
    else
    {
        fibonacci = fibonaccirecursivo(n-1)+fibonaccirecursivo(n-2);  
    }
    return fibonacci;
}

long fibo(long n){
    long x = 1;
    long y = 0;
    for (int i=0;i<n;i++){
        long a = y;
        y += x;
        x = a;
    }
    return y;
}

int main(){
    long n;
    std::cout<<"Serie de Fibonacci"<<std::endl;
    std::cout<<"ingresar valor:"<<std::endl;
    std::cin>>n;
    long fiba = fibonaccirecursivo(n);
    std::cout<<"f("<<n<<") recursivo = "<<fiba<<std::endl;
    long fibb = fibo(n);
    std::cout<<"f("<<n<<") no recursivo = "<<fibb<<std::endl;
    
    return 0;
}