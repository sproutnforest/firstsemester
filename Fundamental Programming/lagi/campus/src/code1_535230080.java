public class code1_535230080 {
    public static void main(String[] args)
    {
        int i, square, cube;

        System.out.printf("%s %s %s\n", "Number", "Square", "Cube");
        for(i=0; i<=10; i++)
        {
            square = i*i;
            cube = i*i*i;

            System.out.printf("%d\t%d\t%d\n",i,square,cube); //\t is space, \n enter, &s is string, %d is integer
        }
    }
}
