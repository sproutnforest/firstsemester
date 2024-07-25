//Georgia Sugisandhea_535230080
package rapor;

public class studenttest {
    public static void main(String[] args)
    {
        int n, m;
        double avg, tug1, tug2, tug3, temp;

        student[] mhs = new student[11];
        mhs[1] = new student(87, 96, 70);
        mhs[2] = new student(68, 87, 90);
        mhs[3] = new student(94, 100, 90);
        mhs[4] = new student(100, 81, 82);
        mhs[5] = new student(83, 65, 85);
        mhs[6] = new student(78, 87, 65);
        mhs[7] = new student(85, 75, 83);
        mhs[8] = new student(91, 94, 100);
        mhs[9] = new student(76, 72, 84);
        mhs[10] = new student(87, 93, 73);

        System.out.printf("%s\t%s\t%s\t%s\t%s\n", "mahasiswa", "tugas 1", "tugas 2", "tugas 3", "rata-rata");

        for(n=1; n<=10; n++)
        {
            System.out.printf("%s%d\t ", "mahasiswa ",n);
            avg=mhs[n].getAvg();
            tug1=mhs[n].getTugas(1);
            tug2=mhs[n].getTugas(2);
            tug3=mhs[n].getTugas(3);
            System.out.printf("%.2f\t%.2f\t%.2f\t%.2f\n", tug1, tug2, tug3, avg);
        }

        double min=mhs[1].getTugas(1);
        double max=mhs[1].getTugas(1);
        for(n=1;n<=10;n++)
        {
            for(m=1; m<=2; m++)
            {
                temp=mhs[n].getTugas(m);

                if(temp<min)
                    min=temp;
                if(temp>max)
                    max=temp;
            }
        }

        System.out.printf("%s%.2f\n", "Nilai terendah = ", min);
        System.out.printf("%s%.2f\n", "Nilai tertinggi = ", max);

        int[] freq={0,0,0,0,0,0,0,0,0,0,0};

        for(n=1;n<=10;n++)
        {
            for(m=1; m<=2; m++)
            {
                temp=(mhs[n].getTugas(m)/10);
                int ffreq = (int)temp;

                freq[ffreq]=freq[ffreq]+1;
            }
        }

        System.out.printf("%s\n", "Diagaram Distribusi Keseluruhan Nilai Tugas: ");
        for(n=1;n<=10;n++)
        {
            temp=(n-1)*10;
            double temp2=temp+9.99;
            System.out.printf("%.2f - %.2f:",temp, temp2);
            for(m=0;m<freq[n];m++)
            {
                System.out.print("*");
            }
            System.out.println("");
        }

    }
}
