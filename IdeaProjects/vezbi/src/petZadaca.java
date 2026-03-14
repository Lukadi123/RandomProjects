//
//
//
//class Apteka
//{
//    String ime;
//    byte poz_neg;
//    int cena;
//    int parcinja;
//
//    public Apteka(String ime, byte poz_neg, int cena, int parcinja) {
//        this.ime = ime;
//        this.poz_neg = poz_neg;
//        this.cena = cena;
//        this.parcinja = parcinja;
//    }
//
//    @Override
//    public String toString() {
//       String s=new String();
//       String poz=new String();
//       if (poz_neg==0){
//           poz="NEG";
//       }
//       else
//       {
//           poz="POZ";
//       }
//       s=ime+" "+poz+" "+cena+" "+parcinja;
//       return s;
//    }
//}
//
//
//public class petZadaca
//{
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int n=Integer.parseInt(br.readLine());
//        CBHT<String,Apteka> table= new CBHT<>(2*n-1);
//        for (int i=0;i<n;i++)
//        {
//            String line=br.readLine();
//            String []parts=line.split("\\s+");
//            String ime=parts[0];
//            byte poz_neg=Byte.parseByte(parts[1]);
//            int cena=Integer.parseInt(parts[2]);
//            int parcinja=Integer.parseInt(parts[3]);
//            Apteka ap = new Apteka(ime,poz_neg,cena,parcinja);
//            table.insert(ime.toLowerCase(),ap);
//        }
//
//        while(true)
//        {
//             String vlez=br.readLine();
//            if (vlez.equalsIgnoreCase("END")) break;
//            int kol=Integer.parseInt(br.readLine());
//            SLLNode<MapEntry<String,Apteka>> dvizi=table.search(vlez.toLowerCase());
//            if (dvizi==null)
//            {
//                System.out.println("No such drug");
//            }
//            else
//            {
//                if (kol>dvizi.element.value.parcinja)
//                {
//                    System.out.println("No drugs AVAILABLE");
//                }
//                else
//                {
//                    dvizi.element.value.parcinja-=kol;
//                    System.out.println(dvizi.element.value);
//                    System.out.println("Order made");
//                }
//            }
//        }
//    }
//}
