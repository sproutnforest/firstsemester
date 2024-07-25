//535230080_Georgia Sugisandhea
package Tugas09;
import java.util.Scanner;

public class MyClass5 {

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int chose;
        String shape;
        double luas, keliling, alas, tinggi, sisi1, sisi2;
        System.out.println("Menu");
        System.out.println("1. Segitiga");
        System.out.println("2. Persegi Panjang");
        System.out.println("3. Bujur Sangkar");
        System.out.println("4. Lingkaran");
        System.out.println("5. Jajaran Genjang");
        System.out.print("Masukkan bentuk yang ingin kalian hitung ");
        chose = input.nextInt();

        switch(chose)
        {
            case 1:
            {
                System.out.print("Masukkan alas segitiga = ");
                alas = input.nextDouble();
                System.out.print("Masukkan tinggi segitiga = ");
                tinggi = input.nextDouble();
                System.out.print("Masukkan sisi ke2 segitiga = ");
                sisi1 = input.nextDouble();
                System.out.print("Masukkan sisi ke3 segitiga = ");
                sisi2 = input.nextDouble();
                shape = "segitiga";

                luas = 0.5*alas*tinggi;
                keliling = alas+sisi1+sisi2;
                break;
            }
            case 2:
            {
                System.out.print("Masukkan panjang persegi panjang = ");
                alas = input.nextDouble();
                System.out.print("Masukkan lebar persegi panjang = ");
                tinggi = input.nextDouble();
                shape = "persegi panjang";

                luas = alas*tinggi;
                keliling = (2*alas)+(2*tinggi);
                break;
            }
            case 3:
            {
                System.out.print("Masukkan sisi bujur sangkar = ");
                alas = input.nextDouble();
                shape = "bujur sangkar";

                luas = alas*alas;
                keliling = 4*alas;
                break;
            }
            case 4:
            {
                System.out.print("Masukkan jari jari lingkaran = ");
                alas = input.nextDouble();
                shape = "lingkaran";

                luas = 3.14*alas*alas;
                keliling = 6.28*alas;
                break;
            }
            case 5:
            {
                System.out.print("Masukkan alas jajaran genjang = ");
                alas = input.nextDouble();
                System.out.print("Masukkan tinggi jajaran genjang = ");
                tinggi = input.nextDouble();
                System.out.print("Masukkan sisi miring jajaran genjang = ");
                sisi1 = input.nextDouble();
                shape = "jajaran genjang";

                luas = alas*tinggi;
                keliling = (2*alas)+(2*sisi1);
                break;
            }
            default:
            {
                System.out.println("Maaf kode yang anda masukkan tidak ditemukan, silahkan coba lagi");
                luas=0;
                keliling=0;
                shape="Not found";
                break;
            }
        }

        System.out.printf("Hasil perhitungan bentuk %s\n" ,shape);
        System.out.printf("Luas = %.2f\n" ,luas);
        System.out.printf("Keliling = %.2f\n" ,keliling);
    }
}
