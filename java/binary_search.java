import java.lang.*;
import java.util.Scanner;
class binary_search{
    
    public static void main(String args []){
     Scanner sc = new  Scanner(System.in);
     int n = sc.nextInt();
     int arr[] = new int[n];
     for(int i=0;i<n;i++){
        arr[i] = sc.nextInt();
     }
     int key = sc.nextInt();
    int isFound =0;
     int mid,i=0;
     while(i<n){
        mid = (i+n)/2;
        if(arr[i]==key)
     {
        isFound =1;
        break;
     }
     if(key < arr[mid]){
        n = mid;
     }else{
        i = mid+1;
     }
     }
     if(isFound==1)
     System.out.println("found");
     else
     System.out.println("not");
     
    }
}