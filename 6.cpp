#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int,0> a;
    if(a.empty())
    cout<<"array is empty"<<endl;
    else
    cout<<"array is not empty"<<endl;
}