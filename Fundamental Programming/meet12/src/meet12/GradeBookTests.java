//Georgia Sugisandhea_535230080
package meet12;

public class GradeBookTests {
    public static void main(String[] args)
    {
        int[] gradesArray={87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

        GradeBooks myGradeBook = new GradeBooks("CS101 Introduction to Java Programming", gradesArray);

        myGradeBook.displayMessage();
        myGradeBook.processGrades();
    }
}
