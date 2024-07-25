//535230080_Georgia Sugisandhea
package Tugas09;
import java.util.Scanner;

public class MyClass4 {

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int choose, mont, total, coun;
        String menu;

        coun=0;
        System.out.println("Menu");
        System.out.println("1. Dewasa = Rp. 200000");
        System.out.println("2. Anak-anak = Rp. 150000");
        System.out.println("3. 1 Dewasa & 1 Anak = Rp. 300000");
        System.out.println("4. Keluarga = Rp. 500000");
        System.out.print("Menu yang mana yang ingin kamu beli? (1/2/3/4)) ");
        choose = input.nextInt();
        System.out.print("Berapa bulan yang ingin dibeli? ");
        mont = input.nextInt();
        if(mont>=12)
                {
                    mont-=1;
                    System.out.println("Anda mendapat diskon 1 bulan");
                    coun=1;
                }
        switch(choose)
        {
            case 1:
            {
                menu="Dewasa";
                total=200000*mont;
                break;
            }
            case 2:
            {
                menu="Anak-anak";
                total=150000*mont;
                break;
            }
            case 3:
            {
                menu="1 Dewasa & 1 Anak";
                total=300000*mont;
                break;
            }
            case 4:
            {
                menu="Keluarga";
                total=500000*mont;
                break;
            }
            default:
            {
                System.out.println("Kode yang anda masukkan tidak ditemukan, silahkan coba lagi.");
                total=0;
                menu="tidak ditemukan";
                break;
            }
        }

        System.out.println("==================BILL===================");
        System.out.printf("Keanggotaan = %s\n" ,menu);

        if(coun==1)
        {
            mont++;
        }
        System.out.printf("Lama keanggotaan = %d\n" ,mont);
        System.out.printf("Total pembayaran = %d\n" ,total);
        System.out.println("Welcome to the club!");
    }
}
