package inventory;

public class books extends products{
    String writer;
    int pages;
    public books(String n, int pr, int un, int c, String writer, int p)
    {
        super(n, pr, un, c);
        this.writer=writer;
        pages=p;
    }
    public void setWriter(String wr)
    {
        writer=wr;
    }
    public String getWriter()
    {
        return writer;
    }
    public void setPages(int pg)
    {
        pages=pg;
    }
    public int getPages()
    {
        return pages;
    }
}
