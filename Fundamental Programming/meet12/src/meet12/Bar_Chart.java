//Georgia Sugisandhea_535230080
package meet12;

public class Bar_Chart {
    public static void main(String[] args)
    {
        int[] array = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

        System.out.println("Grade distributor:");

        for(int counter = 0; counter<array.length; counter++)
        {
            if(counter==10)
                System.out.printf("%5d: ", 100);
            else
                System.out.printf("%02d-%02d: ", counter * 10, counter*10 + 9);
            
            for(int stars=0; stars<array[counter]; stars++)
                System.out.print("*");
            
            System.out.println();
        }
    }
}
