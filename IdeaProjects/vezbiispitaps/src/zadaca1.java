import java.util.*;

 interface Stack<E> {
    // Elementi na stekot se objekti od proizvolen tip.
    // Metodi za pristap:

    public boolean isEmpty();
    // Vrakja true ako i samo ako stekot e prazen.

    public E peek();
    // Go vrakja elementot na vrvot od stekot.

    // Metodi za transformacija:
    public void clear();
    // Go prazni stekot.

    public void push(E x);
    // Go dodava x na vrvot na stekot.

    public E pop();
    // Go otstranuva i vrakja elementot shto e na vrvot na stekot.
}
 class ArrayStack<E> implements Stack<E> {
    private E[] elems; //elems[0...depth-1] se negovite elementi.
    private int depth; //depth e dlabochinata na stekot

    @SuppressWarnings("unchecked")
    public ArrayStack(int maxDepth) {
        // Konstrukcija na nov, prazen stek.
        elems = (E[]) new Object[maxDepth];
        depth = 0;
    }

    public boolean isEmpty() {
        // Vrakja true ako i samo ako stekot e prazen.
        return (depth == 0);
    }

    public E peek() {
        // Go vrakja elementot na vrvot od stekot.
        if (depth == 0)
            throw new NoSuchElementException();
        return elems[depth - 1];
    }

    public void clear() {
        // Go prazni stekot.
        for (int i = 0; i < depth; i++) elems[i] = null;
        depth = 0;
    }

    public void push(E x) {
        // Go dodava x na vrvot na stekot.
        elems[depth++] = x;
    }

    public int size() {
        // Ja vrakja dolzinata na stack-ot.
        return depth;
    }

    public E pop() {
        // Go otstranuva i vrakja elementot shto e na vrvot na stekot.
        if (depth == 0)
            throw new NoSuchElementException();
        E topmost = elems[--depth];
        elems[depth] = null;
        return topmost;
    }
}



public class zadaca1 {

     public static boolean match(char LeftBracket,char RightBracket) {
         if (LeftBracket == '(' && RightBracket == ')') return true;
         if (LeftBracket == '[' && RightBracket == ']') return true;
         if (LeftBracket == '{' && RightBracket == '}') return true;
         else return false;
     }

     public static boolean isCorrect(String exp){
         ArrayStack<Character> brackets=new ArrayStack<>(exp.length());
         for (int i = 0; i < exp.length(); i++) {
             char curr=exp.charAt(i);
             if (curr=='[' || curr=='(' || curr=='{') {
                brackets.push(curr);
             }
             if (curr==')' || curr==']' || curr=='}') {
                 if (brackets.isEmpty()) return false; // nema leva zagrada za da se zatvori desnata
                 char LeftBracket=brackets.pop();
                 if (!match(LeftBracket,curr)) return false;
             }
         }
         return brackets.isEmpty();
     }

     public static void main(String[] args) {
         String exp="s * [(s - a) * (s * b)]";
         System.out.println(isCorrect(exp));
     }
}