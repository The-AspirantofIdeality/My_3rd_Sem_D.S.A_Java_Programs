import java.util.Scanner;

class Fectorial
{
    public static void main(String[] args)
    {
        int no,i,product=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number: ");
        no=sc.nextInt();
        for(i=no;i>0;i--)
        {
            product=product*i;
        }
        System.out.println("Fectorial of "+no+" is: "+product);
    }

}