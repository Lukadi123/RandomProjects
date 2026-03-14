import java.util.Scanner;

public class zadaca4 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        cin.nextLine();
        ArrayQueue<String> studentIndex=new ArrayQueue<>(n);
        ArrayQueue<Integer> studentMins=new ArrayQueue<>(n);
        int TotalMins=180;
        for (int i = 0; i < n; i++) {

            String index=cin.nextLine();
            int mins=cin.nextInt();
            cin.nextLine();
            studentIndex.enqueue(index);
            studentMins.enqueue(mins);
        }

        boolean allProccessed=true;
        while (!studentIndex.isEmpty() && !studentMins.isEmpty()) {
            String tempIndex=studentIndex.dequeue();
            int tempMins=studentMins.dequeue();
            if (tempMins > TotalMins)

            {
                studentIndex.enqueue(tempIndex);
                studentMins.enqueue(tempMins);
                allProccessed=false;
                break;
            }
            else {
                TotalMins-=tempMins;

            }

        }
        if (allProccessed)
        {
            System.out.println("Zavrsile site studenti");
        }

        else
        {
            int preostanatovreme=0;
            while (!studentIndex.isEmpty() && !studentMins.isEmpty()) {

                preostanatovreme+=studentMins.peek();
                System.out.println("Student so index:" + studentIndex.peek() +" so vreme: "+studentMins.peek());
                studentIndex.dequeue();
                studentMins.dequeue();
            }
            System.out.println("Na studentska sluzba i ostanuva: "+ preostanatovreme+ " za da gi usluzi ostanatite studenti");
        }
    }
}
