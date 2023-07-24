class Pattern
{
    public static void main(String []args)
    {
        int i,j;
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=4;j++)
            {
                if(i!=2)
                {
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        System.out.print(3);
                    }
                        else
                    {
                        System.out.print(" ");
                    }
                }
                
                if((i%2)!=0)
                {
                    if((j%2)!=0)
                    {
                        System.out.print(2);
                    }
                    else
                    {
                        System.out.print(" ");
                    }
                }
            }
                if(i==2)
                {
                    if(j==2)
                    {
                        System.out.print(1);
                    }
                    else
                    {
                        System.out.print(" ");
                    }
                }
                
                
            }
            System.out.println("\n");
        }
    }

}