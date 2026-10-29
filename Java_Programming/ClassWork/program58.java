import java.util.Scanner;

class program57
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        System.out.println("Enter the frequency :");
        iValue = scanner.nextInt();
        Iteration iteration = new Iteration();
        iteration.Display(iValue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {   
        int iCnt = 0;

        // Input Filter
        if(iNo<=0)
        {
            System.out.println("Invalid Input !!");

            return ;
        }
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
        System.out.println("Jay Ganesh...");

        }
    }
}