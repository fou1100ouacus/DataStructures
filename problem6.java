
package sheetArrays;

import java.util.Scanner;

public class problem6 {
     public static void main(String[] args) {
       
         System.out.println("Enter size of integer array : ");
        Scanner in = new Scanner(System.in);
       
        int n = in.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter value : ");
        arr[0] = in.nextInt();
        int smallest = arr[0], largest = arr[0];
        
        for (int i = 1; i < n; i++) {
            System.out.println("Enter value : ");
            arr[i] = in.nextInt();
   
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        int diffrence=largest-smallest;
        System.out.println("The maximum difference between two elements of the said array elements "+diffrence);

    }// 2, 3, 1, 7, 9, 5, 11, 3, 5 }//{-10, 4, -9, -5} 
}
