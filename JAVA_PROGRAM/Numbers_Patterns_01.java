import java.util.Scanner;
public class Numbers_Patterns_01
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
System.out.print("Enter the number of row: ");
    int num=sc.nextInt();
    int k=1;
    for(int i=1;i<num;i++)
    {
      for(int j=1;j<=i;j++)
      {
        System.out.print(k+" ");
        k++;
      }
      System.out.println(" ");
}
    }
  }
/* Output
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
