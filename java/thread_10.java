
class Abhi extends Thread {   
    String s;
    int time;
    Abhi(String _a,int _b){
        this.s =_a;
        this.time = _b;
    };
  
     public void run()
      {
          try{
          for(int i=0;i<10;i++){
              System.out.print(s);
              Thread.sleep(time);
          }
          }catch(Exception e){
              System.out.println(e);
          }

      }

    public static void main(String args[])
    {

        Abhi ob=new Abhi("Good Morning !!\n" ,1000);
    	
        System.out.println();
        ob.start(); 
         Abhi ob1=new Abhi("Hello World\n",2000);
    	
        System.out.println();
        ob1.start(); 
          Abhi ob3=new Abhi("Welcome\n",3000);
    	
        System.out.println();
        ob1.start(); 
      
}
}
