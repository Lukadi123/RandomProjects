//
//
//import java.io.*;
//import java.util.*;
//import java.util.NoSuchElementException;
//
//
//
//
//class ArrayQueue<E> {
//    // Redicata e pretstavena na sledniot nacin:
//    // length go sodrzi brojot na elementi.
//    // Ako length > 0, togash elementite na redicata se zachuvani vo elems[front...rear-1]
//    // Ako rear > front, togash vo  elems[front...maxlength-1] i elems[0...rear-1]
//    E[] elems;
//    int length, front, rear;
//
//    // Konstruktor ...
//
//    @SuppressWarnings("unchecked")
//    public ArrayQueue(int maxlength) {
//        elems = (E[]) new Object[maxlength];
//        clear();
//    }
//
//    public boolean isEmpty() {
//        // Vrakja true ako i samo ako redicata e prazena.
//        return (length == 0);
//    }
//
//    public int size() {
//        // Ja vrakja dolzinata na redicata.
//        return length;
//    }
//
//    public E peek() {
//        // Go vrakja elementot na vrvot t.e. pocetokot od redicata.
//        if (length > 0)
//            return elems[front];
//        else
//            throw new NoSuchElementException();
//    }
//
//    public void clear() {
//        // Ja prazni redicata.
//        length = 0;
//        front = rear = 0;  // arbitrary
//    }
//
//    public void enqueue(E x) {
//        // Go dodava x na kraj od redicata.
//        if (length == elems.length)
//            throw new NoSuchElementException();
//        elems[rear++] = x;
//        if (rear == elems.length) rear = 0;
//        length++;
//    }
//
//    public E dequeue() {
//        // Go otstranuva i vrakja pochetniot element na redicata.
//        if (length > 0) {
//            E frontmost = elems[front];
//            elems[front++] = null;
//            if (front == elems.length) front = 0;
//            length--;
//            return frontmost;
//        } else
//            throw new NoSuchElementException();
//    }
//}
//
//
// interface Queue<E> {
//    // Elementi na redicata se objekti od proizvolen tip.
//    // Metodi za pristap:
//    public boolean isEmpty();
//    // Vrakja true ako i samo ako redicata e prazena.
//
//    public int size();
//    // Ja vrakja dolzinata na redicata.
//
//    public E peek();
//    // Go vrakja elementot na vrvot t.e. pocetokot od redicata.
//
//    // Metodi za transformacija:
//
//    public void clear();
//    // Ja prazni redicata.
//
//    public void enqueue(E x);
//    // Go dodava x na kraj od redicata.
//
//    public E dequeue();
//    // Go otstranuva i vrakja pochetniot element na redicata.
//}
//
//
//public class vtoraZad {
//    public static ArrayQueue<Integer> mirror(ArrayQueue<Integer> queue) {
//        if (queue == null || queue.size() % 2 != 0) {
//            throw new IllegalArgumentException();
//        }
//        if (queue.isEmpty()) {
//            return queue;
//        }
//
//        int half = queue.size() / 2;
//        ArrayStack<Integer> stack = new ArrayStack<>(half);
//
//        for (int i = 0; i < half; i++) {
//            int num = queue.dequeue();
//            stack.push(num);
//            queue.enqueue(num);
//        }
//        while (!stack.isEmpty()) {
//            queue.enqueue(stack.pop());
//        }
//        for (int i = 0; i < half; i++) {
//            int num = queue.dequeue();
//            stack.push(num);
//            queue.enqueue(num);
//        }
//        while (!stack.isEmpty()) {
//            queue.enqueue(stack.pop());
//        }
//        return queue;
//    }
//
//    public static void main(String[] args) {
//        Scanner cin = new Scanner(System.in);
//        int N = cin.nextInt();
//        ArrayQueue<Integer> queue = new ArrayQueue<>(N * 2);
//        for (int i = 0; i < N; i++) {
//            queue.enqueue(cin.nextInt());
//        }
//        ArrayQueue<Integer> nova = mirror(queue);
//        while (!nova.isEmpty()) {
//            System.out.print(nova.dequeue() + " ");
//        }
//        cin.close();
//    }
//}