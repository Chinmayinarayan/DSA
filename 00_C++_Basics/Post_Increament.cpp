#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=a++;  //first a is assigned to b then a value will increase
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}