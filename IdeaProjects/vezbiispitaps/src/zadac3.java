import java.lang.reflect.Array;
import java.util.Scanner;

public class zadac3 {
    public static void main(String[] args) {
        Scanner cin= new Scanner(System.in);
        String vlez=cin.nextLine();
        String []parts = vlez.split(" ");
        ArrayStack<Integer> stack= new ArrayStack<>(vlez.length());
        for (String part : parts) {
            if (!part.equals("+") && !part.equals("*") && !part.equals("/") && !part.equals("-")) {
                stack.push(Integer.parseInt(part));
            } else {
                if (part.equals("+")) {
                    int prvbroj;
                    int vtorbroj;
                    if (stack.size() >= 2) {
                        prvbroj = stack.pop();
                        vtorbroj = stack.pop();
                        stack.push(vtorbroj + prvbroj);
                    }
                }
                if (part.equals("*")) {
                    int prvbroj;
                    int vtorbroj;
                    if (stack.size() >= 2) {
                        prvbroj = stack.pop();
                        vtorbroj = stack.pop();
                        stack.push(vtorbroj * prvbroj);
                    }
                }
                if (part.equals("-")) {
                    int prvbroj = 0;
                    int vtorbroj = 0;
                    if (stack.size() >= 2) {
                        prvbroj = stack.pop();
                        vtorbroj = stack.pop();
                        stack.push(vtorbroj * prvbroj);
                    }
                }
                if (part.equals("/")) {
                    int prvbroj = 0;
                    int vtorbroj = 0;
                    if (stack.size() >= 2) {
                        prvbroj = stack.pop();
                        vtorbroj = stack.pop();
                        stack.push(vtorbroj * prvbroj);
                    }
                }
            }
        }
        if (stack.size()==1) {
            System.out.println(stack.pop());
        }
        else {
            System.out.println("ERROR");
        }
        }
    }

