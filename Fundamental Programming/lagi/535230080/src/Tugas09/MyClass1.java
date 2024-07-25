//535230080_Georgia Sugisandhea

package Tugas09;
import java.util.Scanner;


public class MyClass1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double indeks;
        String polusi;

        System.out.print("Masukkan indeks polusi: ");
        indeks = input.nextDouble();

        if(indeks<35)
        {
            polusi = "Nyaman";
        }
        else if(indeks<=60)
        {
            polusi = "Tidak Nyaman";
        }
        else
        {
            polusi = "Berbahaya";
        }

        System.out.printf("Polusi %s" ,indeks);
        System.out.printf(" bersifat %s" ,polusi);
    }

}
