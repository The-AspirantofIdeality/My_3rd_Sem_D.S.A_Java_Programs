import java.lang.invoke.StringConcatException;
import java.util.Scanner;
class Number
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //String number="";
        String number;
        //String number1;

        System.out.println("Enter number in the form of: +91-AA-BBB-CCCCC");
        
        number=sc.nextLine();
        /*number1=sc.nextLine();

        String a1= number1.substring(0,3);
        String a2=number1.substring(3,5);
        String a3=number1.substring(5,8);
        String a4=number1.substring(8,13);

        number.concat(a1);
        number.concat("-");
        number.concat(a2);
        number.concat("-");
        number.concat(a3);
        number.concat("-");
        number.concat(a4);

        System.out.println(number);*/

        String s1="";
        String s2="";
        String s3="";
        s1=number.substring(4,6);
        s2=number.substring(7,10);
        s3=number.substring(11,16);
        System.out.println("Mobile system operator code is: "+s1);
        System.out.println("MSC is "+s2);
        System.out.println("Unique code sis: "+s3);
        System.out.println("This code is performed by 22CE137_The_A.I.");
    }
}