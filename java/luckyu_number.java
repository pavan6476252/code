class luckyu_number{
    static int counter =2;
    static  boolean isLucky(int n){
        if(counter > n)
        return true;
        if(n%counter ==0)
        return false;
        int nt = n -(n/counter);
        counter++;
       return isLucky(nt);
    }
    public static void main(String args[]){
        System.out.println(isLucky(9));
    }
}