class multi{
    
    synchronized void print(int table){
        for(int i=0;i<5;i++)
        System.out.println(table + " * " + i + " = " + table*i);
    }
}
class myThread extends Thread{
   multi m;
   int table;
    myThread(multi m,int table){
        this.m = m;
        this.table =table;
    }
    public void run(){
      m.print(table);
    }
}

public class thread_syn {
    public static void main(String[] args) {
        multi m = new multi();
        myThread t = new myThread(m,5);
        myThread t2 = new myThread(m,1);
        t.start();
        t2.start();
    }
}
