import java.util.Scanner;

public class zadaca7 {
    public static void main(String[] args) {
        Scanner cin=new Scanner(System.in);
        String vlez=cin.nextLine();
        String []parts=vlez.split(" ");
        ArrayStack<String> stack = new ArrayStack<>(parts.length);

        int kombinacii=0;
        for (int i=0;i<parts.length;i++)
        {

            if (parts[i].equals("H"))
            {
                stack.push(parts[i]);

            }

         else if (parts[i].equals("O")) {
            if (stack.size() >= 2) {
                stack.pop();
                stack.pop();
                kombinacii++;
                }
            }
        }


            System.out.println("Ima: " + kombinacii+" dostapni");



            while (!stack.isEmpty())
            {
                System.out.println(stack.pop());
            }

    }
}
