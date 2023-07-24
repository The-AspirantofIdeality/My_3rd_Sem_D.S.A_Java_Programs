import java.util.Scanner;
class Morse_Code
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        
        char alphabates[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
                             ,'Q','R','S','T','U','V','W','X','Y','Z'};
        String Morse[]={"._","_...","_._.","_..",".",".._.","__.","....","..",".___","_._",
                        "._..","__","_.","___",".__.","__._","._.","...","_",".._","..._",".__",
                        "_.._","_.__","__.."};
        String alpha[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P"
                            ,"Q","R","S","T","U","V","W","X","Y","Z"};

       /*String string1;
        String string3="";

        System.out.println("Enter String: ");
        string1=sc.nextLine();

        string1=string1.toUpperCase();

        char arr[]=string1.toCharArray();

        for(i=0;i<string1.length();i++)
        {
            if(arr[i]==alphabates[i])
            {
                string3=string3+Morse[i];
            }
        }

        System.out.println("Your Morsed coded string is: ");
        System.out.println(string3);*/

        int n;
        System.out.println("Enter length of the string: ");
        n=sc.nextInt();
        
        String string4[]=new String[n];
        String string5[]=new String[n];
        String string6;

        System.out.println("Enter the mors code: ");

        i=0;
        while(i<n)
        {
            string4[i]=sc.nextLine();

            System.out.println(string4[i]);

            for(j=0;j<26;j++)
            {
                if(string4[i]==Morse[j])
                {
                    string5[i]=alpha[j];
                }
                else{
                    System.out.println("Invalid Morse code.");
                }
            }
            i++;
        }
        string6=string5.toString();
        System.out.println(string6);
    }
}