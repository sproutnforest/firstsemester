package inventory;

public class movies extends products{
    String producer, genre;
    public movies(String n, int pr, int un, int c, String producer, String genre)
    {
        super(n, pr, un, c);
        this.producer=producer;
        this.genre=genre;
    }
    public void setProducer(String pr)
    {
        producer=pr;
    }
    public String getProducer()
    {
        return producer;
    }
    public void setGenre(String genre)
    {
        this.genre=genre;
    }
    public String getGenre()
    {
        return genre;
    }
}
