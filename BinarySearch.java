
import java.util.Scanner;

public class BinarySearch{
    public static void main(String[] args) {
        int item;
        Scanner input = new Scanner(System.in);
        int []ar =new int[5];
        System.out.println("Enter array ");
        for(int i=0;i<5;i++)
            ar[i]=input.nextInt();
        System.out.println("Enter a element to search ");
            item=input.nextInt();
        BSearch(ar,0,5,item);
    }

static void  BSearch(int []ar,int start,int end,int item )
{
    int mid;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(ar[mid]==item)
        {
            System.out.println("Number "+ item +" at index "+mid);
            break;
        }
            
        else if(item<ar[mid])
        {
            end=mid-1;
        }
           
        else if(item>ar[mid])
        {
            start=mid+1;
        }
            
        else {
            System.out.println("Not found ");
        }
            
    }

}

}