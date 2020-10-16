import java.util.Scanner;

public class Main
{
  public static void main (String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t>0){
      int n = sc.nextInt();
      String x = sc.nextLine();
      String inp = sc.nextLine();
      String first[] = inp.split(" ");

      int nio[]= new int[first.length];

      for(int i=0; i<first.length; i++){
        nio[i] = Integer.parseInt(first[i]);
      }
      int tamanio;
      if(100%n == 0) tamanio = 100/n;
      else tamanio = 100/n+1;
      int bien[] = new int [tamanio];
      bien[0]=1;
      for(int i = 1; i<bien.length; i++){
        bien[i] = bien[i-1]+n;
      }
      boolean flag=true;
      if(nio.length != bien.length) System.out.println("Mal");
      else{
        for(int i =0 ; i<bien.length; i++){
          if(nio[i] != bien[i]){
            flag=false;
            break;
          }
        }
        if(flag) System.out.println("Bien");
        else System.out.println("Mal");
      }
      t--;
    }
  }
}
