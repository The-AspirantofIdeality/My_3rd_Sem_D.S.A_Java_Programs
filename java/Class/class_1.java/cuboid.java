class Cuboid
{
    double hight,length,width;
    Cuboid(double a,double b,double c)
    {
        hight=a;
        length=b;
        width=c;
    }
    double curved_surface_area()
    {
        return(10000*(2*hight*(length+width)));
    }
    double total_surface_area()
    {
        return(10000*(6*length*length));
    }    
    double volume()
    {
        return(1000000*length*hight*width);
    }

}
class Call
{
    public static void main(String[] args)
    {
        Cuboid call=new Cuboid(10, 11, 12);
        System.out.println(call.curved_surface_area());
        System.out.println(call.total_surface_area());
        System.out.println(call.volume());
    }

}