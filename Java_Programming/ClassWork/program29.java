import java.util.Scanner;

public class program29
{
    public static void main(String A[]) 
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;     

        scanner = new Scanner(System.in);
        
        System.out.println("Enter your name :");
        sName = scanner.nextLine();  

        System.out.println("Enter your Age :");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks :");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your Age is : "+iAge);
        System.out.println("Your marks is :"+fMarks);
    }
}
