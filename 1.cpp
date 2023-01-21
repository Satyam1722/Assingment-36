#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];

    for(int i=0;i<a.size();i++)
    cout<<a.at(i)<<" "<<endl;

    return 0;
}