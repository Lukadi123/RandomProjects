import com.sun.source.tree.TryTree;

import java.util.concurrent.Semaphore;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.ReentrantLock;


//-------PR1
//class Printer
//{
//    void printDocument(String doc,int copies) throws InterruptedException {
//        synchronized (this) {// naredba za da se sinhronizira slednoto
//            for (int i = 1; i <= copies; i++) {
//                System.out.println(Thread.currentThread().getName() + " printing: " + doc + " copy " + i);
//
//                Thread.sleep(1000);  // thedot da spiee 1 sekunda pred izbrsuvanje
//
//            }
//        }
//    }
//
//}
//
//
//public class Main
//{
//    public static void main(String[] args) {
//        Printer printer = new Printer();
//        Thread user1=new Thread(new Runnable() {
//            @Override
//            public void run() {
//                try  // try and catch metodot pravi prvo edniot pa drugiot thread da se izvrsi a ne da se mesaat
//                {
//                    printer.printDocument("Docmuent-A", 6);
//                } catch (InterruptedException e)
//                {
//                    throw new RuntimeException(e);
//                }
//            }
//        },"User-1");
//
//        Thread user2=new Thread(new Runnable() {
//            @Override
//            public void run() {
//                try
//                {
//                    printer.printDocument("Document-B", 8);
//                }
//                catch(InterruptedException e){
//                    throw new RuntimeException(e);
//                }
//            }
//        },"User-2");
//
//        Thread user3=new Thread(new Runnable(){
//
//            @Override
//            public void run() {
//                try
//                {
//                    printer.printDocument("Angela",4);
//                }
//                catch(InterruptedException e){
//                    throw new RuntimeException(e);
//                }
//            }
//        },"User-3");
//
//        user1.start();
//        user2.start();
//        user3.start();
//
//    }
//}



//class Counter
//{
//    private int counter=0;
//    private final ReentrantLock locker=new ReentrantLock();//lock go zaklucuva edniot dodeka ne se izvrsi drugiot
//
//    public void increment()
//    {
//        locker.lock();
//        try
//        {
//            counter++;
//        }finally {
//            locker.unlock();// sekogas oslobodi go lockerot
//        }
//    }
//    public int getCounter()
//{
//    return counter;
//}
//
//}
//
//public class Main
//{
//    public static void main(String[] args) throws InterruptedException {
//        Counter counter=new Counter();
//        Thread t1=new Thread(new Runnable() {
//            @Override
//            public void run() {
//                for (int i=0;i<1000;i++)
//                {
//                    counter.increment();
//                }
//            }
//        },"Thread-1");
//
//        Thread t2=new Thread(new Runnable() {
//
//            @Override
//            public void run() {
//                for(int i=0;i<1000;i++)
//                {
//                    counter.increment();
//                }
//            }
//        },"Thread-2");
//
//        t1.start();
//        t2.start();
//
//        t1.join();
//        t2.join();
//
//
//        System.out.println("Final counter: "+counter.getCounter()); // sekogas ke bide 2000 tocno bidejci napravivme lock
//
//    }
//}
//
//class Printer {
//    private final Semaphore semaphore = new Semaphore(1);// samo 1 printer prima
//
//    public void print(String doc) throws InterruptedException {
//        try {
//            semaphore.acquire(); // go zema prviot
//            System.out.println(Thread.currentThread().getName() + " is printing " + doc);
//            Thread.sleep(1000);
//            System.out.println(Thread.currentThread().getName()+" finished printing");
//        } finally {
//            semaphore.release(); // go pusta prviot
//        }
//
//    }
//}
//public class Main {
//    public static void main(String[] args) {
//        Printer printer=new Printer();
//        Runnable printJob=new Runnable() {
//            @Override
//            public void run() {
//                try{
//                    printer.print("Document");
//                }catch(InterruptedException e){
//                    throw new RuntimeException(e);
//                }
//            }
//        };
//        Thread t1=new Thread(printJob," Thread 1");
//        Thread t2=new Thread(printJob," Thread 2");
//        Thread t3=new Thread(printJob," Thread 3");
//
//        t1.start();
//        t2.start();
//        t3.start();
//    }
//}


