import java.util.Scanner;
class Max_no
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,max;
        System.out.println("Enter length of array: ");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter array: ");
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        max=arr[0];
        for(i=0;i<n-1;i++)
        {
            if(max<arr[i+1])
            {
                max=arr[i+1];
            }
        }
        System.out.println("Maximum Element of Array is: "+max);
    }
}