class rotate_array{
    public static void main(String args[]){
        int arr[] = {1,2,3,4,5};
        int rotate=2;
        for(int i=0;i<rotate;i++)
        {   int temp=arr[0];
            for(int j=0;j<5-1;j++){
                arr[j] = arr[j+1];
            }
            arr[4]=temp;
        }
        for(int i =0;i<5;i++){
            System.out.println(arr[i]+" ");
        }
    }
}