package fraction;

public class fractions 
{
    private int numer, denom, fnumer, fdenom, temp, big;

    public fractions(int numerator, int denominator)
    {
        numer=numerator;
        denom=denominator;
    }
    public void setNumer(int numerator)
    {
        numer=numerator;
    }
    public void setDenom(int denominator)
    {
        denom=denominator;
    }
    public int getNumer()
    {
        return numer;
    }
    public int getDenom()
    {
        return denom;
    }
    public String checker(int num, int den)
    {
        if(num>den)
        {
            big=num/den;
            num=num%den;
            String bigg=String.valueOf(big);
            String numer=String.valueOf(num);
            String denom=String.valueOf(den);
            String fracs=bigg+" "+numer+"/"+denom;
            return fracs;
        }
        else if(num==den)
        {
            String fracs="1";
            return fracs;
        }
        else
        {
            String numer=String.valueOf(num);
            String denom=String.valueOf(den);
            String fracs=numer+"/"+denom;
            return fracs;
        }
    }
    public String getFracs()
    {
        String fin=checker(numer, denom);
        return fin;
    }
    public String addition(int numero, int denomo)
    {
        if(denomo!=denom)
        {
            fdenom=denom*denomo;
            fnumer=numero*denom;
            temp=numer*denomo;
        }
        else
        {
            fnumer=numero;
            temp=numer;
            fdenom=denomo;
        }
        fnumer=temp+fnumer;
        String fin=checker(fnumer, fdenom);
        return fin;
    }

    public String substraction(int numero, int denomo)
    {
        if(denomo!=denom)
        {
            fdenom=denom*denomo;
            fnumer=numero*denom;
            temp=numer*denomo;
        }
        else
        {
            fnumer=numero;
            temp=numer;
            fdenom=denomo;
        }
        fnumer=temp-fnumer;
        String fin=checker(fnumer, fdenom);
        return fin;
    }

    public String multiplication(int numero, int denomo)
    {
        fdenom=denom*denomo;
        fnumer=numer*numero;
        String fin=checker(fnumer, fdenom);
        return fin;
    }
    public String division(int numero, int denomo)
    {
        fdenom=denom*numero;
        fnumer=numer*denomo;
        String fin=checker(fnumer, fdenom);
        return fin;
    }
}
