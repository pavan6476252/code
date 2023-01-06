import java.util.*;
class ProducerConsumer {
    LinkedList<Integer> list = new LinkedList<>();
    int count =0;    
    public void producer()throws InterruptedException{

        while(true){
            
            synchronized (this){
                while(list.size()>0)
                        wait();
                    System.out.println("produced data" +count);
                    list.add(count);
                    count++;
                    notify();
                    Thread.sleep(1000);
                
            }
        }
    }
    public void consumer()throws InterruptedException{

        while(true){
            
            synchronized (this){
                while(list.size()==0)
                    wait();
                    
                    System.out.println("consumed " + count);
                    count--;
                    list.removeFirst();
                    notify();
                    Thread.sleep(1000);
                
            }
        }
    }
}

public class Main
{
	public static void main(String[] args)throws InterruptedException {
	        ProducerConsumer pc = new ProducerConsumer();
	        Thread t1 = new Thread(new Runnable(){
	           public void run(){
	               try{
	               pc.producer();        
	               }catch(InterruptedException e){}
	           
	           } 
	        });
	        Thread t2 = new Thread(new Runnable(){
	           public void run(){
	               try {
	                     pc.consumer();
	               } catch(InterruptedException e) {
	               }
	              
	           } 
	        });
	        t1.start();
	        t2.start();
	        t1.join();
	        t2.join();
	}
}
