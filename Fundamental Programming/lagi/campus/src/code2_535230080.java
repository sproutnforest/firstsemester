import java.util.Scanner;

public class code2_535230080 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        double phi = 3.14159;
        double r, luas, keliling, diameter;

        System.out.print("Ketikkan nilai radius lingkaran: ");
        r=input.nextDouble();

        diameter= 2*r;
        keliling = 2*phi*r;
        luas=phi*r*r;

        System.out.printf("%s %s %s %s\n", "Radius", "Diameter", "Keliling", "Luas");
        System.out.printf("%.2f\t%.2f\t%.2f\t%.2f\n", r, diameter, keliling, luas);
    }
}
