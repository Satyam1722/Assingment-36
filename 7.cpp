#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];

    sort(a.begin(),a.end());

    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";

    return 0;
}