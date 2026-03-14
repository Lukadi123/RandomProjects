//
//public class sestZadaca
//{
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int N=Integer.parseInt(br.readLine());
//        CBHT<Integer,String> table= new CBHT<>(2*N-1);
//        for (int i=0;i<N;i++)
//        {
//            int broj=0;
//            String vlez=br.readLine();
//            String []parts=vlez.split("\\s+");
//            if (parts[0].startsWith("+"))
//            {
//                 broj = Integer.parseInt(parts[0].substring(4));
//            }
//            else if (parts[0].startsWith("0"))
//            {
//                broj=Integer.parseInt(parts[0].substring(1));
//            }
//            String ime=parts[1];
//            table.insert(broj,ime);
//        }
//        String vlez=br.readLine();
//        String []parts=vlez.split("\\s+");
//        int vlezbroj=0;
//        if (parts[0].startsWith("+"))
//        {
//            vlezbroj = Integer.parseInt(parts[0].substring(4));
//        }
//        else if (parts[0].startsWith("0"))
//        {
//            vlezbroj=Integer.parseInt(parts[0].substring(1));
//        }
//        SLLNode<MapEntry<Integer,String>> dvizi=table.search(vlezbroj);
//        if (dvizi==null)
//        {
//            System.out.println("Unknown number");
//        }
//        else
//        {
//            System.out.println(dvizi.element.value);
//        }
//    }
//}
//
//
