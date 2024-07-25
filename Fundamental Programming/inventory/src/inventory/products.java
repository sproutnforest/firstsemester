package inventory;

public class products {
    String name;
    int price, unit, code;
    public products(String n, int pr, int un, int c)
    {
        name = n;
        price = pr;
        unit = un;
        code = c;
    }

    public void setName(String name)
    {
        this.name=name;
    }
    public String getName()
    {
        return name;
    }
    public void printName()
    {
        System.out.printf("%s\t", name);
    }
    public void setPrice(int price)
    {
        this.price=price;
    }
    public int getPrice()
    {
        return price;
    }
    public void setUnit(int unit)
    {
        this.unit=unit;
    }
    public int getUnit()
    {
        return unit;
    }
    public void setCode(int code)
    {
        this.code=code;
    }
    public int getCode()
    {
        return code;
    }
}
