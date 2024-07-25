//Georgia Sugisandhea_535230080
package meet12;

public class DecofCardsTests {
    public static void main(String[] args)
    {
        DecofCard myDeckOfCards = new DecofCard();
        myDeckOfCards.shuffle();

        for(int i=1; i<=52; i++)
        {
            System.out.printf("%-19s", myDeckOfCards.dealCard());

            if(i%4==0)
                System.out.println();
        }
    }
}
