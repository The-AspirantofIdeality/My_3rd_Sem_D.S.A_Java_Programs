class Star
{
    public static void main(String []args)
    {
        int i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                 if(i==0 || i==4)
                {
                    System.out.print("*");
                }
                if(i!=0 && i!=4)
                {
                    if(j<2)
                    {
                        System.out.print("*");
                    }
                }
               
            }
            System.out.print("\n");
           
        }
    }
}