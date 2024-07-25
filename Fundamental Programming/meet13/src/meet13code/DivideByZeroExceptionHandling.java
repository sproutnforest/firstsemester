//Georgia Sugisandhea_535230080
package meet13code;
import java.util.InputMismatchException;
import java.util.Scanner;
public class DivideByZeroExceptionHandling {
    public static int quotient(int numerator, int denominator) throws ArithmeticException
    {
        return numerator/denominator;
    }
    
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        boolean continueLoop = true;
        do
        {
            try {
                System.out.print("Ketikkan bilangan bulat yang akan dibagi: ");
                int numerator = scanner.nextInt();
                System.out.print("Ketikkan bilangan bulat pembagi: ");
                int denominator = scanner.nextInt();
                
                int result = quotient(numerator, denominator);
                System.out.printf("\nHasil bagi: %d/%d=%d\n", numerator, denominator, result);
                continueLoop=false;
            } 
            catch(InputMismatchException inputMismatchException) 
            {
                System.err.printf("\nException: %s\n",inputMismatchException);
                scanner.nextLine();
                System.out.println("Anda harus mengetikkan bilangan bulat\n");
            }
            catch(ArithmeticException arithmeticException)
            
            {
                System.err.printf("\nException: %s\n", arithmeticException);
                System.out.println("Nol adalah pembagi yang tidak valid. Silahkan ulangi lagi\n");
            }
        }while(continueLoop);
    }
}
