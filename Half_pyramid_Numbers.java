import java.util.*;
public class Half_pyramid_Numbers
{
  public  static void Half_pyramid(int order)
  {
for(int i=1;i<=order;i++)
{
  for(int j=1;j<=order-i+1;j++)
  {
System.out.print(j+" ");
}
System.out.println();
  }
}

  public static void main(String[] args)
  {
    System.out.print("Enter the order of Order of pyramid : ");
    Scanner sc=new Scanner(System.in);
    int order=sc.nextInt();
    Half_pyramid(order);

  }
}
