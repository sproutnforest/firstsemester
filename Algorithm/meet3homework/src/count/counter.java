package count;

public class counter 
{
    private int counte1, counte2, maxim, minim, rest;
    public counter(int co1, int co2, int max, int min)
    {
        counte1=co1;
        counte2=co2;
        maxim=max;
        minim=min;
    }

    public void setCounter1(int co1)
    {
        counte1=co1;
    }

    public int getCounter1()
    {
        return counte1;
    }

    public void setCounter2(int co2)
    {
        if(co2>=maxim)
        {
            ++counte1;
            rest=maxim-co2;
            counte2=rest;
        }
        else if(co2<=minim)
        {
            throw new IllegalArgumentException("counter 2 must be above minimum value");
        }
        else
        {
            counte2=co2;
        }
    }

    public int getCounter2()
    {
        return counte2;
    }
}
