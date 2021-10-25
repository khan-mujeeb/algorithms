#include<iostream>
using namespace std;
int add(int n)
{
    //base condition
    if(n==0)
        return 0;
    //recursive call
    
    return n%10+add(n/10);
}

main()
{
    cout<<add(1342);
}