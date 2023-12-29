
package sheetArrays;

import java.util.Arrays;
import java.util.Scanner;


public class problem4 {

     public static void main(String[] args) {
        
       System.out.println("Enter size of integer array : ");
        Scanner in = new Scanner(System.in);
       
        int n = in.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter value : ");
            arr[n-1] = in.nextInt();//frist element in last index
        for (int i = 0; i < n-1; i++) {
            System.out.println("Enter value : ");
            arr[i] = in.nextInt();
        
    }
        
        System.out.println(Arrays.toString(arr)); 
        
     }
    

}
