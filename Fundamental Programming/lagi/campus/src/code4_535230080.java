import java.util.Scanner;

public class code4_535230080 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double tugas, uts, uas, praktikum, nilai;
        String huruf;

        System.out.print("Ketikkan nilai tugas: ");
        tugas = input.nextDouble();

        System.out.print("Ketikkan nilai praktikum: ");
        praktikum = input.nextDouble();

        System.out.print("Ketikkan nilai UTS: ");
        uts = input.nextDouble();

        System.out.print("Ketikkan nilai UAS: ");
        uas = input.nextDouble();

        nilai = 0.2*tugas + 0.2*praktikum + 0.3*uts + 0.3*uas;

        if(nilai>=80)
        {
            huruf = "A";
        }
        else if(nilai>=77)
        {
            huruf = "A-";
        }
        else if(nilai>=74)
        {
            huruf = "B+";
        }
        else if(nilai>=70)
        {
            huruf = "B";
        }
        else if(nilai>=65)
        {
            huruf = "B-";
        }
        else if(nilai>=61)
        {
            huruf = "C+";
        }
        else if(nilai>=56)
        {
            huruf="C";
        }
        else if(nilai>=45)
        {
            huruf="D";
        }
        else
        {
            huruf="E";
        }

        System.out.print("\n==================Keluaran====================\n");
        System.out.printf("Nilai akhir = %f\n", nilai);
        System.out.printf("Huruf mutu = %s", huruf);
    }
}
