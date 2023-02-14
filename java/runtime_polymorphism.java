
class Vehicle{
    void start(){
        System.out.println("started.............");
    }
}
class Mustang extends Vehicle{
    void start(){
        System.out.println("Wroom Wroom .........");
    }
}
class Tesla extends Vehicle{
    void start(){
        System.out.println("silent ...... start");
    }
}

public class runtime_polymorphism
{
	public static void main(String[] args) {
		Mustang m = new Mustang();
		Tesla t = new Tesla();
		t.start();
		m.start();
	}
}
