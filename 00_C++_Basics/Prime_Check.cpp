#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a Prime number"<<endl;
            return 0;
        }
    }
    cout<<n<<" is a Prime number"<<endl;
    return 0;
}