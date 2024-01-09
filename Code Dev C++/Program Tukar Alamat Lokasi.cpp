#include <iostream>
using namespace std;
 
void myFunction(int *x,int *y)
{
    *x = *x+1;
    cout<<"x = "<<x<<" = "<<*x<<endl;
    *y = *y+0;
    cout<<"y = "<<y<<" = "<<*y<<endl;
}
 
int main()
{
    int a=2;int b=3;
    
    cout<<"a = "<<&a<<" = "<<a<<endl;
    cout<<"b = "<<&b<<" = "<<b<<endl;
    cout<<"------------------------"<<endl;
    myFunction(&a,&b);
    cout<<"------------------------"<<endl;
    cout<<"a = "<<&a<<" = "<<a<<endl;
    cout<<"b = "<<&b<<" = "<<b<<endl;
}
