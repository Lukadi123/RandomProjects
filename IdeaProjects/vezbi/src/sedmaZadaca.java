//
//
//public class sedmaZadaca
//{
//    public static void main(String[] args) throws IOException{
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int N=Integer.parseInt(br.readLine());
//        CBHT<Integer,String> table=new CBHT<>(N);
//        for (int i = 0; i < N; i++)
//        {
//            String line=br.readLine();
//            String []parts=line.split("\\s+");
//            String ime=parts[0];
//            String datum=parts[1];
//            int mesec=Integer.parseInt(datum.split("\\.")[1]);
//            SLLNode<MapEntry<Integer,String>> dvizi=table.search(mesec);
//            if (dvizi==null)
//            {
//                table.insert(mesec,ime);
//            }
//            else
//            {
//                if (!dvizi.element.value.equals(ime))
//                {
//                    dvizi.element.value+=" "+ime;
//                }
//            }
//
//        }
//        int vlez=Integer.parseInt(br.readLine());
//        SLLNode<MapEntry<Integer,String>> dvizi=table.search(vlez);
//        if (dvizi==null)
//        {
//            System.out.println("Empty");
//        }
//        else
//        {
//            while(dvizi!=null) {
//                System.out.print(dvizi.element.value+" ");
//                dvizi=dvizi.succ;
//            }
//
//
//        }
//
//    }
//}
//
//
