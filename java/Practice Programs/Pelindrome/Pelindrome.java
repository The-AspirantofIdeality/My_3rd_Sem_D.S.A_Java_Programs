import java.util.Scanner;
class Pelindrome
{
	public static void main(String args[])
	{
		int number[100];
		int i,n,j,pelin=1;
		char string[];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter total number: -");
		n=sc.nextInt();
		System.out.println("Enter Numbers: -");
		for(i=0;i<n;i++)
		{
			number[i]=sc.nextInt();
		}
		for(i=0,j=n-1;i<n;i++,j--)
		{
			if(number[i]!=number[j])
			{
				pelin=0;
			}
		}
		if(pelin==1)
		{
			System.out.println("Number is Palindrome.");
		}
		else
		{
			System.out.println("Number is not palindrome.");
		}	
	}
}
	
	