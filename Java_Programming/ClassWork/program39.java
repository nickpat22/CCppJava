// Approach 3

import java.util.Scanner;



public class program39
{   

    public static void main(String A[]) 
    {
        Scanner scanner = null; 
        Arithmatic arithmatic = null;  
        int iValue1 = 0, iValue2 = 0, iResult = 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First number :");
        iValue1 = scanner.nextInt();

        System.out.println("Enter First number :");
        iValue2 = scanner.nextInt();

        arithmatic = new Arithmatic();
        iResult = arithmatic.Addition(iValue1, iValue2); 
        System.out.println("Addition is  : "+iResult);
    }
}

class Arithmatic
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }   
}