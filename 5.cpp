#include<iostream>
#include<array>
#include<iterator>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];

   // array<int,10>::iterator x;

    for(auto x=a.rbegin();x!=a.rend();x++)
    {
        cout<<*x<<" ";
    }


    return 0;
}