//535230080_Georgia Sugisandhea
package Tugas09;
import java.util.Scanner;

public class MyClass3 {
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        String item, disc;
        int many, price, loop=0;
        double total, paym, chang;

        System.out.print("What item are you buying? ");
        item = input.nextLine();

        System.out.print("How many? ");
        many = input.nextInt();

        System.out.print("How much is a single item? ");
        price = input.nextInt();

        price = price*many;

        if(many>=10 && many<25)
        {
            disc="You got 5% discount";
            total=price-(price*0.05);
        }
        else if(many<50)
        {
            disc="You got 10% discount";
            total=price-(price*0.1);
        }
        else if(many<100)
        {
            disc="You got 15% discount";
            total=price-(price*0.15);
        }
        else if(many>=100)
        {
            disc="You got 20% discount";
            total=price-(price*0.2);
        }
        else
        {
            disc="Sorry you didnt get any discount";
            total=price;
        }

        System.out.println("=================BILL===================");
        System.out.printf("Item= %d\t%s\n" ,many, item);
        System.out.printf("%s\n" ,disc);
        System.out.printf("Total= %.2f\n" ,total);
        System.out.print("Put in how much you paid=");
        paym = input.nextInt();

        if(paym==total)
        {
            System.out.print("Just the right amount! Thankyou!");
        }
        else if(paym>total)
        {
            chang=paym-total;
            System.out.printf("Too much! Here's your change = %.2f" ,chang);
        }
        else
        {
            chang=total-paym;
            System.out.printf("Oop seems like you gave short! Please pay %.2f\t%s\n" ,chang, "more");
            while(loop==0)
            {
                System.out.print("Put in how much you paid=");
                paym = input.nextInt();
                if(paym==chang)
                {
                    System.out.print("Just the right amount! Thankyou!");
                    loop=1;
                    break;
                }
                else if(paym>chang)
                {
                    chang=paym-chang;
                    System.out.printf("Too much! Here's your change = %.2f" ,chang);
                    loop=1;
                    break;
                }
                else
                {
                    chang=chang-paym;
                    System.out.printf("Oop seems like you gave short! Please pay %.2f\t%s\n" ,chang, "more");
                }
            }
        }





    }
}
