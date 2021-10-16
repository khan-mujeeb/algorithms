#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    
    int ar[]={10,7,4,6,8,10};
    int pd=ar[1]-ar[0],d,count=2,pcount;
    for(int i=0;i<5;i++)
    {   
        
        d=ar[i+1]-ar[i];
        if(pd==d)
            count++;
        else{
            pcount=count;
            count=0;
        }
    pd=d;
    }
     cout<<max(pcount,count);
    
    return 0;
}
