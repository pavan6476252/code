import java.lang.*;
import java.util.Scanner;
class race_qualifi{
    
    public static void main(String args []){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int e = sc.nextInt();
        int avg = (a+b+c+d+e)/5;
        if(a>avg)
        System.out.println("winning racer " +a);
        if(b>avg)
        System.out.println("winning racer " +b);
        if(c>avg)
        System.out.println("winning racer " +c);
        if(d>avg)
        System.out.println("winning racer " +d);
        if(e>avg)
        System.out.println("winning racer " +e);
    }
}