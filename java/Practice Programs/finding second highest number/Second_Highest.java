import java.util.Scanner;
class Second_Highest
{
    public static void main(String[]args)
    {
        int n,i,j;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total no of elements: ");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements: ");
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    arr[i]=arr[i]+arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]=arr[i]-arr[j];
                }
            }   
        }
        System.out.println("The Second Highest element of an array: "+arr[n-2]);
    }
    
}