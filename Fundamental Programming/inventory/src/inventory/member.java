package inventory;

public class member {
    int rentcount, id, age, n;
    String firstName, lastName;
    products[] renting= new products[20];
    boolean[] rentback = new boolean[20];


    public member(int id, String fn, String ln, int age)
    {
        this.id=id;
        firstName=fn;
        lastName=ln;
        this.age=age;
        rentcount=0;
        rentback[rentcount]=false;
    }
    public void setId(int id)
    {
        this.id=id;
    }
    public int getId()
    {
        return id;
    }
    public void setFirstName(String fn)
    {
        firstName=fn;
    }
    public String getFirstName()
    {
        return firstName;
    }
    public void setLastName(String ln)
    {
        lastName=ln;
    }
    public String getLastName()
    {
        return lastName;
    }
    public void birthday()
    {
        age+=1;
        System.out.printf("%s %dth %s %s! \n", "Happy Birthday", age, firstName, lastName);
    }
    public void setAge(int age)
    {
        this.age=age;
    }
    public int getAge()
    {
        return age;
    }
    public void checkOut(products product)
    {
        if(rentback[rentcount]==true)
        {
            System.out.println("Please checkin your last product before checking out other product");
        }
        else
        {
        rentcount+=1;
        renting[rentcount]=product;
        rentback[rentcount]=true;
        }
    }
    public void checkIn()
    {
        if(rentback[rentcount]==false)
        {
            System.out.println("This product has been checked in");
        }
        else
        {
            rentback[rentcount]=false;
        }
    }
    public void checkCard()
    {
        for(n=1; n<=rentcount; n++)
        {
            System.out.printf("%d. \t", n);
            renting[n].printName();
            if(rentback[n]==true)
            {
                System.out.println("Still renting");
            }
            else
            {
                System.out.println("Rented");
            }
        }
    }

}
