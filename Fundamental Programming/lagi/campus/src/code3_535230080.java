import java.util.Scanner;

public class code3_535230080 {
    public static void main(String[] args){

        Scanner input = new Scanner( System.in );

        int i, j;
        int n;

        System.out.print("Masukkan angka integer positif: ");
        n = input.nextInt();

        for(i=0; i<n; i++)
        {
            if(i%2 != 0)
            {
                System.out.print(" ");
            }
            for(j=1; j<n; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
