//
//class Mesto
//{
//    String mesto;
//    String pocvreme;
//    String krajvreme;
//    double temperatura;
//
//    public Mesto(String mesto, String pocvreme, String krajvreme, double temperatura) {
//        this.mesto = mesto;
//        this.pocvreme = pocvreme;
//        this.krajvreme = krajvreme;
//        this.temperatura = temperatura;
//    }
//
//    @Override
//    public String toString() {
//        return pocvreme +" " + krajvreme+" "+temperatura;
//    }
//    int getCas()
//    {
//        int cas=Integer.parseInt(pocvreme.split(":")[0]);
//        return cas;
//    }
//
//}
//
//
//public class devetZadaca
//{
//    public static void main(String[] args) throws IOException{
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int n=Integer.parseInt(br.readLine());
//        CBHT<String,List<Mesto>> table=new CBHT<>(n);
//        for (int i = 0; i < n; i++) {
//            String line=br.readLine();
//            String []parts=line.split(" ");
//            String mesto=parts[0];
//            String pocvreme=parts[1];
//            String krajvreme=parts[2];
//            double temperatura=Double.parseDouble(parts[3]);
//            Mesto m = new Mesto(mesto,pocvreme,krajvreme,temperatura);
//            SLLNode<MapEntry<String,List<Mesto>>> dvizi=table.search(mesto);
//            if (dvizi==null)
//            {
//                List<Mesto> list= new ArrayList<>();
//                list.add(m);
//                table.insert(mesto,list);
//            }
//            else
//            {
//                dvizi.element.value.add(m);
//            }
//        }
//        String vlez=br.readLine();
//        SLLNode<MapEntry<String,List<Mesto>>> dvizi=table.search(vlez);
//        if (dvizi==null)
//        {
//            System.out.println(vlez+": does not exist");
//        }
//        else
//        {
//            System.out.println(vlez+":");
//            for (Mesto m:dvizi.element.value)
//            {
//                System.out.println(m);
//            }
//        }
//    }
//}
//
