#include<iostream>
using namespace std;
int fact(int n)
{
    //base condition
    int Fact=1;
    if(n<=1)
        return Fact;
    //recursive call
    Fact= n*fact(n-1);
    return Fact;
}

main()
{
    cout<<fact(5);
}