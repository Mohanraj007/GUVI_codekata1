import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class str {
     public static void main(String aa[]){
         String v1;
       Scanner s=new Scanner(System.in);
       v1=s.next();
      String dd="";
      String cc="";
       char a[]=v1.toCharArray();
       for(int i=0;i<a.length;i++){
           if(i%2==0){
             dd=dd+a[i];
           }
 else{
 
               cc=cc+a[i];
 }
      
      }
       System.out.printf("%s %s", dd,cc);
      
}

}
