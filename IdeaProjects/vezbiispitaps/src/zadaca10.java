import java.util.Scanner;

public class zadaca10 {
    public static void main(String[] args) {
        Scanner cin=new Scanner(System.in);
        int n=cin.nextInt();
        ArrayStack<String> nauka=new ArrayStack<>(n);
        ArrayStack<String> naucna=new ArrayStack<>(n);
        ArrayStack<String> istorija=new ArrayStack<>(n);

        for (int i=0;i<n;i++){
            String vlez=cin.next();
            int naukavlez=cin.nextInt();
            int naucnavlez=cin.nextInt();
            int istorijavlez=cin.nextInt();
            if (naukavlez==1){
                nauka.push(vlez);
            }
            if (naucnavlez==1){
                naucna.push(vlez);
            }
            if (istorijavlez==1){
                istorija.push(vlez);
            }

        }
        ArrayStack<String> finalna=new ArrayStack<>(n);
        if(!nauka.isEmpty() || !naucna.isEmpty() || !istorija.isEmpty()){
            int countNauka=2;
            int countNaucna=1;
            int countIstorija=2;
            while (!nauka.isEmpty() && countNauka>0){
                finalna.push(nauka.pop());
                countNauka--;
            }
            while (!naucna.isEmpty() && countNaucna>0){
                finalna.push(naucna.pop());
                countNaucna--;
            }
            while (!istorija.isEmpty() && countIstorija>0){
                finalna.push(istorija.pop());
                countIstorija--;
            }
        }
        if (finalna.isEmpty()){
            System.out.println("Nema studenti");
        }
        else
        {
            ArrayStack<String>temp=new ArrayStack<>(n);
            while (!finalna.isEmpty()){
                String izlez=finalna.pop();
                if (temp.isEmpty() || !temp.peek().equals(izlez)){
                    System.out.println(izlez);
                }
                temp.push(izlez);
            }
        }

    }
}