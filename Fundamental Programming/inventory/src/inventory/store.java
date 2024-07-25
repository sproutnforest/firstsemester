package inventory;
import java.util.Scanner;

public class store {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        boolean cont=true;
        member[] people=new member[20];
        books Caraval = new books("Caraval", 15000, 25, 1901001, "Stephanie Garber", 410);
        books RoyalBastards = new books("Royal Bastards", 12000, 10, 1901002, "John Wick", 330);
        games HayDay = new games("Hay Day", 2000, 15, 1902001, "Farming", "Mobile");
        games WWT = new games("We Were There", 27000, 3, 1902002, "Coop", "Steam");
        movies TGS = new movies("The Greatest Showman", 33000, 15, 1903001, "Hugh Jackman", "Fantasy");
        movies Cinderella = new movies("Cinderella", 15000, 13, 1903002, "Disney", "Fantasy");

        int id=0, n=0;
        while(cont){
            System.out.printf("%s\n%s\n%s\n%s\n", "1. Make new member", "2. Renting", "3. Check in", "4. Member info");
            int choose=input.nextInt();
            switch(choose)
            {
                case 1:
                {
                    id+=1;
                    n+=1;
                    System.out.printf("%s", "First Name = ");
                    String fn = input.next(); // Read the first name

                    System.out.printf("%s", "Last Name = ");
                    String ln = input.next(); // Read the last name

                    System.out.printf("%s", "Age = ");
                    int age = input.nextInt(); // Read the age
                    input.nextLine(); // Consume the newline character left in the buffer

                    people[n] = new member(id, fn, ln, age);
                    System.out.printf("%s\n", "Member has been created! Welcome");

                    break;
                }
                case 2:
                {
                    System.out.printf("%d. %s\t%d\n", 1, Caraval.getName(), Caraval.getCode());
                    System.out.printf("%d. %s\t%d\n", 2, RoyalBastards.getName(), RoyalBastards.getCode());
                    System.out.printf("%d. %s\t%d\n", 3, HayDay.getName(), HayDay.getCode());
                    System.out.printf("%d. %s\t%d\n", 4, WWT.getName(), WWT.getCode());
                    System.out.printf("%d. %s\t%d\n", 5, TGS.getName(), TGS.getCode());
                    System.out.printf("%d. %s\t%d\n", 6, Cinderella.getName(), Cinderella.getCode());
                    System.out.println("Which one do you want to rent?");
                    int choice=input.nextInt();
                    System.out.printf("Your id please = ");
                    int myid=input.nextInt();
                    switch(choice)
                    {
                        case 1:
                            people[myid].checkOut(Caraval);
                            break;
                        case 2:
                            people[myid].checkOut(RoyalBastards);
                            break;
                        case 3:
                            people[myid].checkOut(HayDay);
                            break;
                        case 4:
                            people[myid].checkOut(WWT);
                            break;
                        case 5:
                            people[myid].checkOut(TGS);
                            break;
                        case 6:
                            people[myid].checkOut(Cinderella);
                            break;
                        default:
                            System.out.println("Sorry the code you put in is invalid");
                            break;

                    }
                break;
                }

                case 3:
                {
                    System.out.printf("Your id please = ");
                    int myid=input.nextInt();  
                    people[myid].checkIn();
                    break;
                }

                case 4:
                {
                    System.out.printf("%s\n%s\n%s", "1. My Member Info", "2. My renting info", "Which menu would you like to do?");
                    int choice=input.nextInt();
                    System.out.printf("Your id please = ");
                    int myid=input.nextInt();  
                    switch(choice)
                    {
                        case 1:
                            System.out.printf("\n%s\t%d\n%s\t%s %s\n%s\t%d", "id=", myid, "name=", people[myid].getFirstName(), people[myid].getLastName(), "age=", people[myid].getAge());
                            break;
                        case 2:
                            people[myid].checkCard();
                    }
                    break;
                }

                default:
                {
                    System.out.println("Sorry the code you put in is unavailable");
                    break;
                }

            }

            System.out.printf("%s", "Would you like to continue? Y/N");
            String pick=input.next();
            if(pick=="N" || pick=="n")
            {
                cont=false;
            }

        }
    }
}
