
package sheetArrays;

import java.util.Scanner;


public class problem5 {
     public static void main(String[] args) {
       
         System.out.println("Enter size of integer array : ");
        Scanner in = new Scanner(System.in);
       
        int n = in.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter value : ");
        arr[0] = in.nextInt();
        int lastLargest = arr[0], largest = arr[0];
        
        for (int i = 1; i < n; i++) {
            System.out.println("Enter value : ");
            arr[i] = in.nextInt();
     
            if (arr[i] > largest) {
                lastLargest=largest;
                largest = arr[i];
            }
        }
        int product=lastLargest*largest;
        System.out.println("Pair is ("+lastLargest+","+largest+"), Maximum Product:"+product);

    }
}
