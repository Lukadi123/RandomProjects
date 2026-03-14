//
//import java.io.BufferedReader;
//import java.io.InputStreamReader;
//import java.util.NoSuchElementException;
//import java.util.Scanner;
//
//class ArrayStack<E> implements Stack<E> {
//    private E[] elems; //elems[0...depth-1] se negovite elementi.
//    private int depth; //depth e dlabochinata na stekot
//
//    @SuppressWarnings("unchecked")
//    public ArrayStack(int maxDepth) {
//        // Konstrukcija na nov, prazen stek.
//        elems = (E[]) new Object[maxDepth];
//        depth = 0;
//    }
//
//    public boolean isEmpty() {
//        // Vrakja true ako i samo ako stekot e prazen.
//        return (depth == 0);
//    }
//
//    public E peek() {
//        // Go vrakja elementot na vrvot od stekot.
//        if (depth == 0)
//            throw new NoSuchElementException();
//        return elems[depth - 1];
//    }
//
//    public void clear() {
//        // Go prazni stekot.
//        for (int i = 0; i < depth; i++) elems[i] = null;
//        depth = 0;
//    }
//
//    public void push(E x) {
//        // Go dodava x na vrvot na stekot.
//        elems[depth++] = x;
//    }
//
//    public int size() {
//        // Ja vrakja dolzinata na stack-ot.
//        return depth;
//    }
//
//    public E pop() {
//        // Go otstranuva i vrakja elementot shto e na vrvot na stekot.
//        if (depth == 0)
//            throw new NoSuchElementException();
//        E topmost = elems[--depth];
//        elems[depth] = null;
//        return topmost;
//    }
//}
// interface Stack<E> {
//    // Elementi na stekot se objekti od proizvolen tip.
//    // Metodi za pristap:
//
//    public boolean isEmpty();
//    // Vrakja true ako i samo ako stekot e prazen.
//
//    public E peek();
//    // Go vrakja elementot na vrvot od stekot.
//
//    // Metodi za transformacija:
//    public void clear();
//    // Go prazni stekot.
//
//    public void push(E x);
//    // Go dodava x na vrvot na stekot.
//
//    public E pop();
//    // Go otstranuva i vrakja elementot shto e na vrvot na stekot.
//}
//// class SLLNode<E> {
////    protected E element;
////    protected SLLNode<E> succ;
////
////    public SLLNode(E elem, SLLNode<E> succ) {
////        this.element = elem;
////        this.succ = succ;
////    }
////
////    @Override
////    public String toString() {
////        return element.toString();
////    }
//}
//
// class LinkedStack<E> implements Stack<E> {
//    // top e link do prviot jazol ednostrano-povrzanata lista koja sodrzi gi elementite na stekot .
//    private SLLNode<E> top;
//    int size;
//
//    public LinkedStack() {
//        // Konstrukcija na nov, prazen stek.
//        top = null;
//        size = 0;
//    }
//
//    public String toString() {
//        SLLNode<E> current = top;
//        StringBuilder s = new StringBuilder();
//        while (current != null) {
//            s.append(current.element);
//            s.append(" ");
//            current = current.succ;
//        }
//        return s.toString();
//    }
//
//    public boolean isEmpty() {
//        // Vrakja true ako i samo ako stekot e prazen.
//        return (top == null);
//    }
//
//    public void clear() {
//        // Go prazni stekot.
//        top = null;
//        size = 0;
//    }
//
//    public E peek() {
//        // Go vrakja elementot na vrvot od stekot.
//        if (top == null)
//            throw new NoSuchElementException();
//        return top.element;
//    }
//
//    public void push(E x) {
//        // Go dodava x na vrvot na stekot.
//        top = new SLLNode<E>(x, top);
//        size++;
//    }
//
//    public int size() {
//        // Ja vrakja dolzinata na stekot.
//        return size;
//    }
//
//    public E pop() {
//        // Go otstranuva i vrakja elementot shto e na vrvot na stekot.
//        if (top == null)
//            throw new NoSuchElementException();
//        E topElem = top.element;
//        size--;
//        top = top.succ;
//        return topElem;
//    }
//
//}
//
//
//
//
//public class prvaZad
//{
//    public static void main(String[] args) throws Exception{
//        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
//        int n=Integer.parseInt(br.readLine());
//        LinkedStack<String> functionStack=new LinkedStack<>();
//        LinkedStack<Integer> counter=new LinkedStack<>();
//        String maxFunct=null;
//        int maxCalls=0;
//        for (int i=0;i<n;i++)
//        {
//            String line=br.readLine();
//            if (line.startsWith("Call"))
//            {
//                String povikFunct =line.split(" ")[1];
//                functionStack.push(povikFunct);
//                counter.push(0); // prvo povikuvanje na funckijata
//            }
//            else if (line.startsWith("Return"))
//            {
//                if (!functionStack.isEmpty()) // ako steckot ne e prazen
//                {
//                    String zavrsenaFunkt=functionStack.pop(); // izvadi ja od steckot i dadi ja functijata
//                    int calls=counter.pop(); // izvadi go od counter brojot na povikuvanje na taa funkcija
//                    if (calls>maxCalls)
//                    {
//                        maxCalls=calls;
//                    }
//
//                }
//                if (!counter.isEmpty())
//                {
//                    counter.push(counter.pop()+1); // dodadi go vo counter brojacot +1
//                }
//            }
//        }
//        System.out.println(maxFunct+" "+maxCalls);
//    }
//}
//
//
