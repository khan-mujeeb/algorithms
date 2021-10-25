#include<iostream>
using namespace std;

void rcount(int n)
{
    //base condition
    if(n==0)
        return;

    //stack 5 4 3 2 1
    rcount(n-1);  

    //print when satck become empty 
    cout<<n<<endl;    
    //print in order 1 2 3 4 5
}

void count(int n)
{
    //base condition
    if(n==0)
        return;

    cout<<n<<endl;    

    count(n-1);  

    
   
}

main()
{
    cout<<"reverse count in stack"<<endl;
    rcount(5);

    cout<<"normal cont"<<endl;
    count(5);
}