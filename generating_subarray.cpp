#include<iostream>
using namespace std;
void subarray(int ar[],int start,int end)
{
    if(start>end)
        goto flag;
    cout<<"[";
    for(int i=start;i<=end;i++)
    {
        cout<<ar[i]<<",";
    }
    cout<<"]"<<endl;
    flag:
    int temp;

}
int main(int argc, char const *argv[])
{   
    
    int ar[]={10,7,4};
    for(int j=0;j<3;j++)
        {
        for(int i=0;i<3;i++)
            {
                int end=i;
                subarray(ar,j,end);
            }
        }
    
    
    
    return 0;
}
