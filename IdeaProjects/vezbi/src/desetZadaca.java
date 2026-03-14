//import javax.sound.midi.MidiFileFormat;
//import java.io.BufferedReader;
//import java.io.IOException;
//import java.io.InputStreamReader;
//import java.nio.Buffer;
//import java.util.*;
//
//class CBHT<K, E> {
//    // An object of class CBHT is a closed-bucket hash table, containing
//    // entries of class MapEntry.
//    private SLLNode<MapEntry<K, E>>[] buckets;
//
//    @SuppressWarnings("unchecked")
//    public CBHT(int m) {
//        // Construct an empty CBHT with m buckets.
//        buckets = (SLLNode<MapEntry<K, E>>[]) new SLLNode[m];
//    }
//
//    private int hash(K key) {
//
//        // Translate key to an index of the array buckets.
//        return Math.abs(key.hashCode()) % buckets.length;
//    }
//
//    public SLLNode<MapEntry<K, E>> search(K targetKey) {
//        // Find which if any node of this CBHT contains an entry whose key is equal to targetKey.
//        // Return a link to that node (or null if there is none).
//        int b = hash(targetKey);
//        SLLNode<MapEntry<K, E>> currNode = buckets[b];
//        while (currNode != null) {
//            MapEntry<K, E> currEntry = currNode.element;
//            if (currEntry.key.equals(targetKey)) return currNode;
//            else currNode = currNode.succ;
//        }
//        return null;
//    }
//
//    public void insert(K key, E val) {
//        // Insert the entry <key, val> into this CBHT.
//        // If entry with same key exists, overwrite it.
//        MapEntry<K, E> newEntry = new MapEntry<>(key, val);
//        int b = hash(key);
//        SLLNode<MapEntry<K, E>> currNode = buckets[b];
//        while (currNode != null) {
//            MapEntry<K, E> currEntry = currNode.element;
//            if (currEntry.key.equals(key)) {
//                // Make newEntry replace the existing entry ...
//                currNode.element = newEntry;
//                return;
//            } else currNode = currNode.succ;
//        }
//        // Insert newEntry at the front of the SLL in bucket b ...
//        buckets[b] = new SLLNode<>(newEntry, buckets[b]);
//    }
//
//    public void delete(K key) {
//        // Delete the entry (if any) whose key is equal to key from this CBHT.
//        int b = hash(key);
//        SLLNode<MapEntry<K, E>> predNode = null, currNode = buckets[b];
//        while (currNode != null) {
//            MapEntry<K, E> currEntry = currNode.element;
//            if (currEntry.key.equals(key)) {
//                if (predNode == null) buckets[b] = currNode.succ;
//                else predNode.succ = currNode.succ;
//                return;
//            } else {
//                predNode = currNode;
//                currNode = currNode.succ;
//            }
//        }
//    }
//
//    public String toString() {
//        String temp = "";
//        for (int i = 0; i < buckets.length; i++) {
//            temp += i + ":";
//            SLLNode<MapEntry<K, E>> curr = buckets[i];
//            while (curr != null) {
//                temp += curr.element.toString() + " ";
//                curr = curr.succ;
//            }
//            temp += "\n";
//        }
//        return temp;
//    }
//}
//
//
//class MapEntry<K, E> {
//    // Each MapEntry object is a pair consisting of a key
//    // and a value (an arbitrary object).
//    K key;
//    E value;
//
//    public MapEntry(K key, E val) {
//        this.key = key;
//        this.value = val;
//    }
//
//    public String toString() {
//        return "<" + key + "," + value + ">";
//    }
//}
//
//class Podatoci
//{
//    String file;
//    String file2;
//    String file3;
//
//
//    public Podatoci(String file, String file2, String file3) {
//        this.file = file;
//        this.file2 = file2;
//        this.file3 = file3;
//
//    }
//
//    @Override
//    public String toString() {
//        return file+" "+file2+" "+file3;
//    }
//}
//
//
//public class desetZadaca {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int n = Integer.parseInt(br.readLine());
//        CBHT<String, List<String>> table = new CBHT<>(n);
//        for (int i = 0; i < n; i++) {
//            String line = br.readLine();
//            String []parts=line.split(" ");
//            String path=parts[0]+" "+parts[1];
//            String concent=parts[2].substring(1,parts[2].length()-1);
//            SLLNode<MapEntry<String,List<String>>> dvizi =table.search(concent);
//            if (dvizi==null)
//            {
//                List<String> lista=new ArrayList<>();
//                lista.add(path);
//                table.insert(concent,lista);
//            }
//            else
//            {
//                dvizi.element.value.add(path);
//            }
//        }
//        int m=Integer.parseInt(br.readLine());
//        for (int i = 0; i < m; i++) {
//            String line = br.readLine();
//            String []parts=line.split(" ");
//            String command=parts[0];
//            String path=parts[1]+" "+parts[2];
//            String concent=parts[3].substring(1,parts[3].length()-1);
//            SLLNode<MapEntry<String,List<String>>> dvizi=table.search(concent);
//            if (command.equalsIgnoreCase("add"))
//            {
//                if (dvizi==null)
//                {
//                    List<String> lista=new ArrayList<>();
//                    lista.add(path);
//                    table.insert(concent,lista);
//                }
//                else
//                {
//                    dvizi.element.value.add(path);
//                }
//            }
//            else if (command.equalsIgnoreCase("delete"))
//            {
//                if (dvizi!=null)
//                {
//                    dvizi.element.value.remove(path);
//                    if (dvizi.element.value.isEmpty())
//                    {
//                        table.delete(concent);
//                    }
//                }
//            }
//            else if (command.equalsIgnoreCase("find"))
//            {
//                if (dvizi!=null && dvizi.element.value.contains(path))
//                {
//                    System.out.println("true");
//                }
//                else
//                {
//                    System.out.println("false");
//                }
//            }
//        }
//        String vlez=br.readLine();
//        SLLNode<MapEntry<String,List<String>>> dvizi=table.search(vlez);
//        if (dvizi!=null)
//        {
//            System.out.println(String.join(" ", dvizi.element.value));
//        }
//
//    }
//    }
//
