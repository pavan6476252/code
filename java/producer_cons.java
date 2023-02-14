class utility {
    int data = 0;
    boolean avil = false;

    synchronized void consumer() {
        while (true) {
            try {

                if (avil == false)
                    wait();
                    System.out.println("consume" + data);
                    data--;
                    Thread.sleep(1000);
                    avil = false;
                    notify();
            } catch (InterruptedException e) {
            }
        }

    }

    synchronized void producer() {
        while (true) {
            try {

                if (avil==true)
                    wait();
                    data++;
                    System.out.println("producer" + data);
                    avil = true;
                    Thread.sleep(1000);
                    notify();
            } catch (InterruptedException e) {
            }
        }

    }
}

class Producer extends Thread {
    utility u;

    Producer(utility u) {
        this.u = u;
    }

    public void run() {
        u.producer();
    }
}

class Consumer extends Thread {
    utility u;

    Consumer(utility u) {
        this.u = u;
    }

    public void run() {
        u.consumer();
    }
}

class producer_cons {
    public static void main(String args[]) {
        utility u = new utility();
        Producer p = new Producer(u);
        Consumer c = new Consumer(u);
        p.start();
        c.start();
    }
}