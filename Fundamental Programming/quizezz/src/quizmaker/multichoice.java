//Georgia Sugisandhea_535230080
package quizmaker;

public class multichoice extends questions{
    String pick1, pick2, pick3, pick4;
    int key;
    public multichoice(String quest, String answer, String choice1, String choice2, String choice3, String choice4)
    {
        super(quest, answer);
        pick1=choice1;
        pick2=choice2;
        pick3=choice3;
        pick4=choice4;
    }

    public void setpick1(String choice1)
    {
        pick1=choice1;
    }
    public String getpick1()
    {
        return pick1;
    }
    public void setpick2(String choice2)
    {
        pick2=choice2;
    }
    public String getpick2()
    {
        return pick2;
    }
    public void setpick3(String choice3)
    {
        pick1=choice3;
    }
    public String getpick3()
    {
        return pick3;
    }
    public void setpick4(String choice4)
    {
        pick1=choice4;
    }
    public String getpick4()
    {
        return pick4;
    }
}
