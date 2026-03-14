import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class zadaca9 {


    public static boolean isMatch(char levo,char desno)
    {
        if (levo=='(' && desno==')') return true;
        if (levo=='[' && desno==']') return true;
        if (levo=='{' && desno=='}' ) return true;
        else return false;

    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String vlez=br.readLine();
        ArrayStack<Character> stack=new ArrayStack<>(vlez.length());
        char []niza=vlez.toCharArray();
        boolean flag = true;
        for (int i = 0; i < niza.length; i++) {
            if (niza[i]=='(' || niza[i]=='[' || niza[i]=='{') {
                stack.push(niza[i]);
            }
            if (niza[i]==')' || niza[i]==']' || niza[i]=='}') {
                if (stack.isEmpty()){ flag = false; break; }
                    char left=stack.pop();
                    char rigit=niza[i];
                if (!isMatch(left,rigit))
                {
                    flag=false;
                    break;
                }
            }
        }
        if (flag && stack.isEmpty())
        {
            System.out.println("Uspesno");
        }
        else {
            System.out.println("Ne se uspesno zatvoreni site zagradi");
        }
    }
}
