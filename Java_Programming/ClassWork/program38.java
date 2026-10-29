// Approach 3

import java.util.Scanner;



public class program38
{   

    public static void main(String A[]) 
    {
        Scanner scanner = null;   
        int iValue1 = 0, iValue2 = 0, iResult = 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First number :");
        iValue1 = scanner.nextInt();

        System.out.println("Enter First number :");
        iValue2 = scanner.nextInt();

        
        iResult = Arithmatic.Addition(iValue1, iValue2);     
        System.out.println("Addition is  : "+iResult);
    }
}

class Arithmatic
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }   
}