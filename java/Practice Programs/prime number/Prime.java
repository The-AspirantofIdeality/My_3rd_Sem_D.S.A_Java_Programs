import java.util.Scanner;
class Prime
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int x,count=0;
		System.out.println("Enter a Number: ");
		x=sc.nextInt();
		for(int i=2;i<=x;i++)
		{
			if(x%i==0)
			{
				count++;
			}
		}
		if(count>=2)
		{
			System.out.println("The number is nonprime.");
		}
		else
		{
			System.out.println("The number is prime.");
		}
	}
}
		