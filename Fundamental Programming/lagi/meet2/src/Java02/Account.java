package Java02;

public class Account {
    private double balance;

    public Account(double initialBalance)
    {
        if(initialBalance > 0.0)
            balance = initialBalance;
    }

    public void credit(double amount)
    {
        balance = balance + amount;
    }

    public double getBalance()
    {
        return balance;
    }
    
}
