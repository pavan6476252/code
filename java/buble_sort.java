import java.lang.*;
import java.util.Scanner;
class buble_sort{
    
    public static void main(String args []){
     Scanner sc = new  Scanner(System.in);
     int n = sc.nextInt();
     int arr[] = new int[n];
     for(int i=0;i<n;i++){
        arr[i] = sc.nextInt();
     }
     int i,j;
     for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
          
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
       

    for(i=0;i<n;i++){
        System.out.print(arr[i]+" ");
    }
    
    }
}