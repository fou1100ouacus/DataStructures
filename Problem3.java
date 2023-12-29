
package sheetArrays;

import java.util.Arrays;
import java.util.Scanner;


public class Problem3 {
    public static void main(String[] args) {
        
       System.out.println("Enter size of integer array : ");
        Scanner in = new Scanner(System.in);
       
        int n = in.nextInt();
        int[] arr = new int[n];
       int count_0=0;
        //int count_1=0;

       

        for (int i = 0; i < n; i++) {
            System.out.println("Enter value : ");
            arr[i] = in.nextInt();
            
             if(arr[i]==0)count_0++;
                
    }
        for (int i = 0; i < count_0; i++) {
            arr[i]=0;
        }
          for (int i =count_0; i < n; i++) {
            arr[i]=1;
        }
        System.out.println(Arrays.toString(arr)); 
        
        
        
        
       
    }
    
    
    
}
