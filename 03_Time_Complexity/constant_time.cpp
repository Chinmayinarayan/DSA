#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum=n*(n+1)/2;  //TC : O(1)
    cout<<"Sum = "<<sum<<endl;
    return 0;
}