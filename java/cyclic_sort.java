import java.util.Arrays;
public class Main
{
    
	public static void main(String[] args) {
	 int arr [] ={3,5,1,2,4};
        int i=0;
        while(i<arr.length){
            if(arr[i] != i+1){
                swap(arr , i , arr[i]-1);
            }else{
                i++;
            }
        }
        
        System.out.println(Arrays.toString(arr));
	}
	public static void swap(int arr[],int  i ,int current){
        int t = arr[i];
        arr[i] = arr[current];
        arr[current] = t;
    }
    
}
