#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];

    int i;
    cout<<"enter the index : "<<endl;
    cin>>i;
    cout<<i<<" index elemnt is : "<<a.at(i)<<endl;
    cout<<"5 index elemnt is : "<<get<5>(a)<<endl;

    return 0;
}