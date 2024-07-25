//Georgia Sugisandhea_535230080
package quizmaker;

public class questions 
{
    private String subject;
    private String key;

    public questions(String quest, String answer)
    {
        subject=quest;
        key=answer;
    }

    public void setQuestion(String quest)
    {
        subject=quest;
    }

    public String getQuestion()
    {
        return subject;
    }

    public void setAnswer(String answer)
    {
        key=answer;
    }

    public String getAnswer()
    {
        return key;
    }


}
