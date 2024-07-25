//Georgia Sugisandhea_535230080
package meet12;

public class Medal {
    public static void main(String[] args)
    {
        final int COUNTRIES = 7;
        final int medals = 3;

        String[] countries =
        {
            "Canada",
            "China",
            "Germany",
            "Korea",
            "Japan",
            "Russia",
            "United States"
        };
        int[][] counts=
        {
            {1,0,1},
            {1,1,0},
            {0,0,1},
            {1,0,0},
            {0,1,1},
            {0,1,1},
            {1,1,0}
        };

        System.out.printf("%s\t%s\t%s\t%s\t%s\n", "Country", "Gold", "Silver", "Bronze", "Total");
        for(int i=0; i<COUNTRIES; i++)
        {
            System.out.printf("%15s", countries[i]);
            int total=0;

            for(int j=0; j<medals; j++)
            {
                System.out.printf("%8d", counts[i][j]);
                total=total+counts[i][j];
            }
            System.out.printf("%8d\n", total);
        }
    }
}
