//535230080_Georgia Sugisandhea
package Tugas09;
import java.util.Scanner;

public class MyClass2 {
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        int bill;
        char cred;
        double total, grand, pr, bl;
        String disc;

        System.out.print("Masukkan harga tagihan: ");
        bill = input.nextInt();

        System.out.print("Apakah memakai kartu kredit ABC? (y/n) ");
        cred = input.next().charAt(0);

        if(bill<500000)
        {
            total=bill;
            disc="No discount";
        }
        else if(cred=='Y' || cred=='y')
        {
            total=bill-(bill*0.25);
            disc="Thankyou for using ABC Credit Card, you got 25% discount";
        }
        else
        {
            total=bill-(bill*0.1);
            disc="You got 10% discount";
        }

        pr=total*0.11;
        bl=total*0.05;
        grand=total+pr+bl;

        System.out.println("======================BILL===================");
        System.out.printf("Tagihan= %d\n" ,bill);
        System.out.printf("%s\n" ,disc);
        System.out.printf("Pajak Restoran 11%% = %.02f\n" ,pr);
        System.out.printf("Biaya layanan 5%% = %.2f\n" ,bl);
        System.out.printf("Total= %.2f\n" ,grand);
        System.out.println("===============================================");


    }
}
