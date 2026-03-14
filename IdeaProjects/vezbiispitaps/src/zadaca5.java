import java.util.Scanner;

public class zadaca5 {

    public static boolean IsMatch(char left,char right)
    {
        if (left=='(' && right==')') return true;
        if (left=='[' && right==']') return true;
        if (left=='{' && right=='}') return true;
        else return false;

    }


    public static void main(String[] args) {
         Scanner cin=new Scanner(System.in);
         String vlez=cin.nextLine();
         char []niza=vlez.toCharArray();
        ArrayStack<Character> stack=new ArrayStack<>(niza.length);
        boolean flag=true;
         for (int i=0;i<niza.length;i++) {
             if (niza[i]=='(' || niza[i]=='[' || niza[i]=='{') {
                 stack.push(niza[i]);
             }
             if (niza[i]==')' || niza[i]==']' || niza[i]=='}') {
                 if (stack.isEmpty()) {
                     break;
                 }
                 char left=stack.pop();
                 if (!IsMatch(left,niza[i]))
                 {
                     flag=false;
                 }
             }
         }
         if (!stack.isEmpty())
         {
             flag=false;
         }
         if (flag)
         {
             System.out.println("Correct");
         }else {
             System.out.println("Incorrect");
         }
    }
}
