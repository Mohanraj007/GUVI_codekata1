import java.util.*;
import java.lang.*;
public class prime{
      public static void main(String aa[]){
           int n1;
           int f=0;
           Scanner s=new Scanner(System.in);
           n1=s.nextInt();
          for(int i=2;i<n1;i++){
              if(n1%i==0){
                  f=1;
                  break;
              }
          }
           if(f==1){
               System.out.println("YES");
           }
         else{
               System.out.println("NO");
         }
         
         

}
