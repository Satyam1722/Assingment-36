#include<iostream>
#include<array>
#include<iterator>
using namespace std;

int main()
{
    array <int,10>a;
    
    for(int i=0;i<10;i++)
    cin>>a[i];
    
    array<int,10>::iterator x;

    for(x=a.begin();x!=a.end();x++)
    {
        int count=0;
        for(auto y=x;y!=a.end();y++)
         {
            if(*x==*y)
            count++;
         }
         if(count>1)
          cout<<*x<<endl;
    }
      cout<<endl;
    return 0;
}