

//public class tretaZad{
//    public static void main(String[] args){
//    Scanner cin = new Scanner(System.in);
//    int n=cin.nextInt();
//    CBHT<String,Integer> poztable=new CBHT<>(n);
//    CBHT<String,Integer> negtable=new CBHT<>(n);
//    for (int i = 0; i < n; i++) {
//        String opstina=cin.next();
//        String prezime=cin.next();
//        String poz_neg=cin.next();
//        if (poz_neg.equalsIgnoreCase("positive"))
//        {
//            SLLNode<MapEntry<String,Integer>> dvizipoz= poztable.search(opstina);
//            if (dvizipoz==null)
//            {
//                poztable.insert(opstina,1);
//            }
//            else
//            {
//                poztable.insert(opstina,dvizipoz.element.value+1);
//            }
//        }
//        else
//        {
//            SLLNode<MapEntry<String,Integer>> dvizineg= negtable.search(opstina);
//            if (dvizineg==null)
//            {
//                negtable.insert(opstina,1);
//            }
//            else
//            {
//                negtable.insert(opstina,dvizineg.element.value+1);
//            }
//        }
//    }
//        String vlez=cin.next();
//    SLLNode<MapEntry<String,Integer>> dvizipoz=poztable.search(vlez);
//        SLLNode<MapEntry<String,Integer>> dvizineg=negtable.search(vlez);
//        if (dvizipoz!=null || dvizineg!=null)
//        {
//            int pozitvni=0;
//            int negativni=0;
//            if (dvizipoz!=null)
//             pozitvni=dvizipoz.element.value;
//            if (dvizineg!=null)
//             negativni=dvizineg.element.value;
//
//
//            float vkupno = (float)pozitvni / (negativni + pozitvni);
//            System.out.println(vkupno);
//        }
//
//    }
//}
//
