import java.util.Scanner;
class Longest_String
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int i,j,n,max_length;
        System.out.println("Enter length of string array: ");
        n=sc.nextInt();
        String arr[]=new String[n];
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextLine();
        }
        max_length=arr[0].length();
        j=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i].length()<arr[i+1].length())
            {
                max_length=arr[i+1].length();
                j=i+1;
            }
        }
        System.out.println("Maximum length of the array is "+max_length+" which is "+arr[j]);
    }
}