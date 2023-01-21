#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];

    cout<<"first element is : "<<a.front()<<endl;
    cout<<"last element is : "<<a.back()<<endl;

    return 0;
}