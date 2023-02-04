import java.util.Scanner;
import java.io.*; 

class buffer_reader{
    public static void main(String args[])throws IOException{
    //     InputStreamReader ir = new InputStreamReader(System.in);
    // BufferedReader br = new BufferedReader(ir);
    // String s = br.readLine();
    StringBuffer sb = new StringBuffer("pavan");
    sb.delete(2,3);

    System.out.println(sb);        
    // System.out.println(Integer.parseInt(s));        
    }
}