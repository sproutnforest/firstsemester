//Georgia Sugisandhea_535230080
package quizmaker;
import java.util.Scanner;

public class questiontests {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        questions quest1 = new questions("What is the top grossing Disney movie?", "Frozen II");
        questions quest2 = new questions("The movie Frozen has an OST that lots of children likes, what is it?", "Let It Go");
        questions quest3 = new questions("Colors of the Wind is an OST from what movie?", "Pocahontas");

        double n=0;
        double score;
        System.out.printf("%s%s\t", "1. ", quest1.getQuestion());
        String ans = input.nextLine();
        String key = quest1.getAnswer();
        boolean comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++n;
        }
        else
            System.out.println("Wrong!");

        System.out.printf("%s%s\t", "2. ", quest2.getQuestion());
        ans=input.nextLine();
        key=quest2.getAnswer();
        comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++n;
        }
        else
            System.out.println("Wrong!");
        
        System.out.printf("%s%s\t", "3. ", quest3.getQuestion());
        ans=input.nextLine();
        key=quest3.getAnswer();
        comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++n;
        }
        else
            System.out.println("Wrong!");
        
        score=(n/3)*100;
        System.out.printf("%s%.2f\n", "Your score is ", score);
        multichoice quest4 = new multichoice("Which character below is in Encanto?", "3", "Elsa", "Raya", "Mirabel", "Tiana");
        multichoice quest5 = new multichoice("There's one character in Enchanted that has the same name as a character in Swan Lake, who is it?", "1", "Giselle", "Sugar Plum Fairy", "Alice", "Paquita");
        multichoice quest6 = new multichoice("What lullaby is in Cinderella?", "4", "All Is Found", "One Song", "When You Wish Upon a Star", "Lavender's Blue");

        double x=0;
        System.out.printf("%s%s\t\n", "4. ", quest4.getQuestion());
        System.out.printf("%s%s\n%s%s\n%s%s\n%s%s\n","1. ", quest4.getpick1(), "2. ", quest4.getpick2(), "3. ", quest4.getpick3(), "4. ", quest4.getpick4());
        ans=input.nextLine();
        key=quest4.getAnswer();
        comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++x;
        }
        else
            System.out.println("Wrong!");
        
        System.out.printf("%s%s\t\n", "5. ", quest5.getQuestion());
        System.out.printf("%s%s\n%s%s\n%s%s\n%s%s\n","1. ", quest5.getpick1(), "2. ", quest5.getpick2(), "3. ", quest5.getpick3(), "4. ", quest5.getpick4());
        ans=input.nextLine();
        key=quest5.getAnswer();
        comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++x;
        }
        else
            System.out.println("Wrong!");

        System.out.printf("%s%s\t\n", "6. ", quest6.getQuestion());
        System.out.printf("%s%s\n%s%s\n%s%s\n%s%s\n","1. ", quest6.getpick1(), "2. ", quest6.getpick2(), "3. ", quest6.getpick3(), "4. ", quest6.getpick4());
        ans=input.nextLine();
        key=quest6.getAnswer();
        comp=ans.equals(key);
        if(comp==true)
        {
            System.out.println("Correct!");
            ++x;
        }
        else
            System.out.println("Wrong!");
        
        score=(x/3)*100;
        System.out.printf("%s%.2f\n", "Your score is ", score);

        score=((n+x)/6)*100;
        System.out.printf("%s%.2f\n", "Your total score is ", score);
    }
}
