

import java.util.*;
class program9_1
{
    public static void main(String A[])
    {
            int iValue = 0;

            System.out.println("Enter number : ");
            
            Scanner sobj = new Scanner(System.in);

            iValue = sobj.nextInt();

            Logic.TableRev(iValue);

    }
}

class Logic
{


        public static void TableRev(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            for(int iCnt = 0; iCnt < iNo; iCnt ++)
            {
                System.out.print("*   ");
            }
            for(int iCnt = 0; iCnt < iNo; iCnt ++)
            {
                System.out.print("#   ");
            }
        }
}