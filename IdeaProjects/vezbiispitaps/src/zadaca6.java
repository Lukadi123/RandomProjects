import java.util.Scanner;

public class zadaca6 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String vlez=cin.nextLine();

        String []parts=vlez.split("\\s+");
        ArrayStack<String> crveni=new ArrayStack<>(vlez.length());
        ArrayStack<String> zeleni=new ArrayStack<>(vlez.length());
        ArrayStack<String> plavi=new ArrayStack<>(vlez.length());
        for (int i=0;i<parts.length;i++) {
            if (parts[i].charAt(0)=='R')
            {
                if (!crveni.isEmpty())
                {
                    if (crveni.peek().equals(parts[i]))
                    {
                        crveni.push(parts[i]);
                    }else crveni.pop();
                }
            }
            if (parts[i].charAt(0)=='G')
            {
                if (!zeleni.isEmpty())
                {
                    if (zeleni.peek().equals(parts[i]))
                    {
                        zeleni.push(parts[i]);
                    }else zeleni.pop();
                }
            }
            if (parts[i].charAt(0)=='B')
            {
                if (!plavi.isEmpty())
                {
                    if (plavi.peek().equals(parts[i]))
                    {
                        plavi.push(parts[i]);
                    }else plavi.pop();
                }
            }
        }
        String izlezKomb="";
        int totalCount=0;
        while(!crveni.isEmpty())
        {
            totalCount++;
            if (crveni.pop().charAt(1)=='+')
            {
                izlezKomb+="R- ";
            }else izlezKomb+="R+ ";
        }
        while(!zeleni.isEmpty())
        {
            totalCount++;
            if (zeleni.pop().charAt(1)=='+')
            {
                izlezKomb+="G- ";
            }else izlezKomb+="G+ ";
        }
        while(!plavi.isEmpty())
        {
            totalCount++;
            if (plavi.pop().charAt(1)=='+')
            {
                izlezKomb+="B- ";
            }else izlezKomb+="B+ ";
        }

        System.out.println(totalCount);
        System.out.println(izlezKomb);


    }
}
