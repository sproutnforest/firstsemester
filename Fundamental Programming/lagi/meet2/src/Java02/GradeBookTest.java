package Java02;
import java.util.Scanner;

public class GradeBookTest {
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        GradeBook gradeBook1 = new GradeBook("CS101 Introduction to Java Programming");
        GradeBook gradeBook2 = new GradeBook("CS102 Data Structures in Java");

        System.out.printf("gradeBook1 course name is: %s\n", gradeBook1.getCourseName());
        System.out.printf("gradeBook2 course name is: %s\n", gradeBook2.getCourseName());

    }
}
