//
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
//        return mesto+" "+pocvreme +" " + krajvreme+" "+temperatura;
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
//public class osmaZadaca
//{
//    public static void main(String[] args)throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int n=Integer.parseInt(br.readLine());
//        CBHT<String,Mesto> table=new CBHT<>(n);
//        for (int i=0;i<n;i++)
//        {
//            String line=br.readLine();
//            String []parts=line.split(" ");
//            String mesto=parts[0];
//            String pocvreme=parts[1];
//            String krajvreme=parts[2];
//            double temperatura=Double.parseDouble(parts[3]);
//            Mesto m=new Mesto(mesto,pocvreme,krajvreme,temperatura);
//            SLLNode<MapEntry<String,Mesto>> dvizi=table.search(mesto);
//            if (dvizi == null) {
//                table.insert(mesto,m);
//            }
//            else
//            {
//                if (temperatura>dvizi.element.value.temperatura)
//                {
//                    table.insert(mesto,m);
//                }
//                else if (temperatura==dvizi.element.value.temperatura)
//                {
//                    int cas=Integer.parseInt(pocvreme.split(":")[0]);
//                    if (cas<dvizi.element.value.getCas())
//                    {
//                        table.insert(mesto,m);
//                    }
//                }
//
//            }
//        }
//        String vlez=br.readLine();
//        SLLNode<MapEntry<String,Mesto>> dvizi=table.search(vlez);
//        if (dvizi==null)
//        {
//            System.out.println("Nema merenje za toj period");
//        }
//        else
//        {
//            System.out.println(dvizi.element.value);
//        }
//    }
//}
//
//
