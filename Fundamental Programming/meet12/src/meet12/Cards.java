//Georgia Sugisandhea_535230080
package meet12;

public class Cards {
    private String face; //(Ace, Deuce, etc)
    private String suit; //(Heart, Diamond, etc)

    public Cards(String cardFace, String cardSuit)
    {
        face=cardFace;
        suit=cardSuit;
    }

    public String toString()
    {
        return face + " of " + suit;
    }
}
