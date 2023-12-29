
package sheetArrays;

import java.util.Arrays;
import java.util.Scanner;

public class problem7 {
   
     public static void main(String[] args) {
        
       System.out.println("Enter size of integer array : ");
        Scanner in = new Scanner(System.in);
       
        int n = in.nextInt();
        int[] arr = new int[n];
       
        for (int i = 0; i < n; i++) {
            System.out.println("Enter value : ");
            arr[i]=in.nextInt();
        }
        Arrays.sort(arr);
        int length=1,maxLength=length;
        
         for (int i = 1; i < n; i++) {
             if(arr[i]==arr[i-1]+1 ){
                 length++;
             }
             else{
                if(length>maxLength)maxLength=length;
                length=1;
             }
             
         }
         if(length>maxLength)maxLength=length;
        
        System.out.println("The length of longest consecutive elements sequence : "+maxLength); 
        
     } //[49, 1, 3, 200, 2, 4, 70, 5]
}
