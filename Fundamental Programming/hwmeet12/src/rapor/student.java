//Georgia Sugisandhea_535230080
package rapor;

public class student {
    double[] tug = new double[4];
    private double avg, temp=0;
    private int n;

    public student(double tugas1, double tugas2, double tugas3)
    {
        tug[1] = tugas1;
        tug[2] = tugas2;
        tug[3] = tugas3;
    }

    public void setTugas(int num, double grade)
    {
        tug[num] = grade;
    }

    public double getTugas(int num)
    {
        return tug[num];
    }

    public double getAvg()
    {
        for(n=1; n<=3; n++)
        {
            temp=temp+tug[n];
        }

        avg=temp/3;

        return avg;
    }
}
