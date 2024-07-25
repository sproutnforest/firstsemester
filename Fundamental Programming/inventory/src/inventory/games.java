package inventory;

public class games extends products{
    String genre, platform;

    public games(String n, int pr, int un, int c, String gen, String plat)
    {
    super(n, pr, un, c);
    genre=gen;
    platform=plat;
    }

    public void setGenre(String gen)
    {
        genre=gen;
    }
    public String getGenre()
    {
        return genre;
    }
    public void setPlatform(String plat)
    {
        platform=plat;
    }
    public String getPlatform()
    {
        return platform;
    }
}
