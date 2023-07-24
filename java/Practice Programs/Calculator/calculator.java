import java.util.Scanner;
class Calculator
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int op,a,b;
        System.out.println("Choose the number witch you want to perform operation: ");
        System.out.println("for addition press 0.");
        System.out.println("Enter 1 to perform substraction.");
        System.out.println("Enter 2 to perform multiplication.");
        System.out.println("Enter 3 to perform division");
        System.out.println("Enter 4 to perform modulus.");
        op=sc.nextInt();
        System.out.println("Enter first number: ");
        a=sc.nextInt();
        System.out.println("Enter second number: ");
        b=sc.nextInt();
        switch(op)
        {
            case 0:
                System.out.println("Addition of "+a+" & "+b+" is : "+(a+b));

            case 1:
                System.out.println("Substraction of "+a+" & "+b+" is : "+(a-b));

            case 2:
                System.out.println("Multiplication of "+a+" & "+b+" is : "+(a*b));

            case 3:
                if(b==0)
                {
                    System.out.println("Division of "+a+" & "+b+" is : Infinite");

                }
                else
                {
                    System.out.println("Division of "+a+" & "+b+" is : "+(a/b));
                }

            case 4:
                System.out.println("Modulous of "+a+" & "+b+" is : "+(a%b));     
            
            default:
                System.out.println("Invalid data input");
        }
    }
}