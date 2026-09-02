#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter num : ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;         //TC : O(n)
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}