#include<iostream>
using namespace std;
void main()
{   int a;
    int sum=1;
    
    cout<<"enter the numbers"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        sum=sum*i;
    }

    
    cout<<"the factorial of "<<a<<"is"<<sum;
}