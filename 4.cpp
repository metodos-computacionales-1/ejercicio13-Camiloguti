#include <iostream>

int a;
int b;
double a2;
double b2;


int getMax(int a, int b){
if(a > b)

{
std::cout<<a<<"  es mayor que  "<<b<<"\n";
}
else

{
std::cout<<a<<"  es menor que  "<<b<<"\n";
}
}
double getMax(double a2, double b2){
if(a2>b2)
{
std::cout<<a2<<" es mayor que "<<b2<<"\n";
}
else
{
std::cout<<a2<<" es menor que "<<b2<<"\n";
}
}

int main(){
std::cout<<"Ingresar valor"<<"\n";
std::cout<<"numero 1 ";std::cin>>a;std::cout<<"numero 2 ";std::cin>>b;std::cout<<" numero doble 1 "; std::cin>>a2;std::cout<<" numero doble 2 ";std::cin>>b2;
getMax(a,b);
getMax(a2,b2);
return 0;
}