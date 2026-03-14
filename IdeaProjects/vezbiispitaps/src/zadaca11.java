import java.util.Scanner;

public class zadaca11 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        ArrayStack<String> stack=new ArrayStack<>(100);
        while(true)
        {
            String vlez=cin.next();
            if (vlez.equalsIgnoreCase("x"))
            {
                break;
            }
            if (!vlez.startsWith("end"))
            {
                stack.push(vlez);
            }
            else
            {
                String temp=vlez.substring(3);
                if (stack.isEmpty())
                {
                    System.out.println("Invalid");
                    return;
                }
                String top=stack.pop();
                if (!top.equals(temp))
                {
                    System.out.println("Invalid");
                    return;
                }



            }
        }
        if (stack.isEmpty())
        {
            System.out.println("Valid");
        }
        else
        {
            System.out.println("Invalid");
        }
    }
}
