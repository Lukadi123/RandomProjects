import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Map;

class Person {
    String ime;
    String prezime;
    int budzhet;
    String ipaddress;
    String vreme;
    String grad;
    int cena;

    Person(String ime, String prezime, int budzhet, String ipaddress, String vreme, int cena) {
        this.ime = ime;
        this.prezime = prezime;
        this.budzhet = budzhet;
        this.ipaddress = ipaddress;
        this.vreme = vreme;
        this.cena = cena; // fixed: don't set this to 0
    }

    public String zemiIP() {
        String[] parts = ipaddress.split("\\.");
        return parts[0] + "." + parts[1] + "." + parts[2];
    }

    public int GetHour() {
        return Integer.parseInt(vreme.split(":")[0]);
    }

    public int GetMin() {
        return Integer.parseInt(vreme.split(":")[1]);
    }

    @Override
    public String toString() {
        return ime + " " + prezime + " with salary " + budzhet + " from address " + ipaddress + " who logged in at " + vreme;
    }
}

public class zadaca12 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        CBHT<String, Person> table = new CBHT<>(n);
        CBHT<String, Integer> tempTable = new CBHT<>(n);

        for (int i = 0; i < n; i++) {
            String line = br.readLine();
            String[] parts = line.trim().split("\\s+");

            String ime = parts[0];
            String prezime = parts[1];
            int budzhet = Integer.parseInt(parts[2]);
            String ipaddress = parts[3];
            String vreme = parts[4];
            int cena = Integer.parseInt(parts[5]);

            Person p = new Person(ime, prezime, budzhet, ipaddress, vreme, cena);
            String[] ips = ipaddress.split("\\.");
            String novip = ips[0] + "." + ips[1] + "." + ips[2];

            int sat = p.GetHour();
            int min = p.GetMin();

            if (sat > 11) {
                SLLNode<MapEntry<String, Integer>> tempDvizi = tempTable.search(novip);
                if (tempDvizi == null) {
                    tempTable.insert(novip, 1);
                } else {
                    tempTable.insert(novip, tempDvizi.element.value + 1);
                }

                SLLNode<MapEntry<String, Person>> dvizi = table.search(novip);
                if (dvizi == null) {
                    table.insert(novip, p);
                } else {
                    Person existing = dvizi.element.value;
                    if (existing.GetHour() < sat ||
                            (existing.GetHour() == sat && existing.GetMin() < min)) {
                        table.insert(novip, p);
                    }
                }
            }
        }

        int m = Integer.parseInt(br.readLine());

        for (int i = 0; i < m; i++) {
            String line = br.readLine();
            String[] parts = line.trim().split("\\s+");

            String ime = parts[0];
            String prezime = parts[1];
            int budzhet = Integer.parseInt(parts[2]);
            String ipaddress = parts[3];
            String vreme = parts[4];
            int cena = Integer.parseInt(parts[5]);

            Person p = new Person(ime, prezime, budzhet, ipaddress, vreme, cena);
            String[] ips = ipaddress.split("\\.");
            String novip = ips[0] + "." + ips[1] + "." + ips[2];

            SLLNode<MapEntry<String, Integer>> dvizi = tempTable.search(novip);
            SLLNode<MapEntry<String, Person>> dvizi2 = table.search(novip);

            if (dvizi == null || dvizi2 == null) {
                System.out.println("ERROR");
            } else {
                System.out.println("The network: " + novip + " has the following number of users:");
                System.out.println(dvizi.element.value);

                System.out.println("The user who logged on the earliest after noon from that nwtwork is:");
                System.out.println(dvizi2.element.value);
            }
        }
    }
}
