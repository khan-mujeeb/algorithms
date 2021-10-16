#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ar[]={ 1, 2,0,7,3,6,5};
    int max,start=0,end=6;
    max=ar[0];
    while(start<=end)
    {
        if(ar[end]>ar[start])
            {
                max=ar[end];
            }
        if(ar[end]>max)
            max=ar[end];
        start++;
        end--;

    }
    cout<< max;
    return 0;
}
