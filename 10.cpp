#include<iostream>
#include<array>
#include<iterator>
using namespace std;

array<int,5> sum(array<int,5> a,int n)
{
    int count=0,mul=1;
    for(auto x=a.begin();x!=a.end();x++)
    {
    
    if(*x==0)
    count++;
    else
    mul*=*x;
    }

   array<int,5> temp;
   

   for(int i=0;i<n;i++)
   {
    if(a[i]==0)
    temp[i]=mul*(count>1?0:1);
    else
    temp[i]=mul/a[i]*(count>0?0:1);
   }


   return temp;
}

int main()
{
    array<int,5> a;
     
    array<int,5>::iterator x; 
    for(int i=0;i<a.size();i++)
    cin>>a[i];

    array<int,5> b=sum(a,5);

    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}