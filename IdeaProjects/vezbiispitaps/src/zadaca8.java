import java.util.Scanner;

class SLLNode<E> {
    protected E element;
    protected SLLNode<E> succ;

    public SLLNode(E elem, SLLNode<E> succ) {
        this.element = elem;
        this.succ = succ;
    }

    @Override
    public String toString() {
        return element.toString();
    }
}

class MapEntry<K, E> {
    // Each MapEntry object is a pair consisting of a key
    // and a value (an arbitrary object).
    K key;
    E value;

    public MapEntry(K key, E val) {
        this.key = key;
        this.value = val;
    }

    public String toString() {
        return "<" + key + "," + value + ">";
    }
}

 class CBHT<K, E> {
    // An object of class CBHT is a closed-bucket hash table, containing
    // entries of class MapEntry.
    private SLLNode<MapEntry<K, E>>[] buckets;

    @SuppressWarnings("unchecked")
    public CBHT(int m) {
        // Construct an empty CBHT with m buckets.
        buckets = (SLLNode<MapEntry<K, E>>[]) new SLLNode[m];
    }

    private int hash(K key) {
        // Translate key to an index of the array buckets.
        return Math.abs(key.hashCode()) % buckets.length;
    }

    public SLLNode<MapEntry<K, E>> search(K targetKey) {
        // Find which if any node of this CBHT contains an entry whose key is equal to targetKey.
        // Return a link to that node (or null if there is none).
        int b = hash(targetKey);
        SLLNode<MapEntry<K, E>> currNode = buckets[b];
        while (currNode != null) {
            MapEntry<K, E> currEntry = currNode.element;
            if (currEntry.key.equals(targetKey)) return currNode;
            else currNode = currNode.succ;
        }
        return null;
    }

    public void insert(K key, E val) {
        // Insert the entry <key, val> into this CBHT.
        // If entry with same key exists, overwrite it.
        MapEntry<K, E> newEntry = new MapEntry<>(key, val);
        int b = hash(key);
        SLLNode<MapEntry<K, E>> currNode = buckets[b];
        while (currNode != null) {
            MapEntry<K, E> currEntry = currNode.element;
            if (currEntry.key.equals(key)) {
                // Make newEntry replace the existing entry ...
                currNode.element = newEntry;
                return;
            } else currNode = currNode.succ;
        }
        // Insert newEntry at the front of the SLL in bucket b ...
        buckets[b] = new SLLNode<>(newEntry, buckets[b]);
    }

    public void delete(K key) {
        // Delete the entry (if any) whose key is equal to key from this CBHT.
        int b = hash(key);
        SLLNode<MapEntry<K, E>> predNode = null, currNode = buckets[b];
        while (currNode != null) {
            MapEntry<K, E> currEntry = currNode.element;
            if (currEntry.key.equals(key)) {
                if (predNode == null) buckets[b] = currNode.succ;
                else predNode.succ = currNode.succ;
                return;
            } else {
                predNode = currNode;
                currNode = currNode.succ;
            }
        }
    }

    public String toString() {
        String temp = "";
        for (int i = 0; i < buckets.length; i++) {
            temp += i + ":";
            SLLNode<MapEntry<K, E>> curr = buckets[i];
            while (curr != null) {
                temp += curr.element.toString() + " ";
                curr = curr.succ;
            }
            temp += "\n";
        }
        return temp;
    }
}


public class zadaca8{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n=cin.nextInt();
        CBHT<String,Integer> grupaA = new CBHT<>(n);
        CBHT<String,Integer> grupaB = new CBHT<>(n);
        CBHT<String,Integer> grupaO = new CBHT<>(n);
        for (int i = 0; i < n; i++) {
            String vlez=cin.next();
            String grupa=vlez.charAt(0) + "";
            if (grupa.equals("A")){
                SLLNode<MapEntry<String,Integer>> dvizi=grupaA.search(grupa);
                if (dvizi == null) {
                    grupaA.insert(grupa,1);
                }
                else
                {
                    grupaA.insert(grupa,dvizi.element.value+1);
                }
            }
            if (grupa.equals("B")){
                SLLNode<MapEntry<String,Integer>> dvizi=grupaB.search(grupa);
                if (dvizi == null) {
                    grupaB.insert(grupa,1);
                }
                else
                {
                    grupaB.insert(grupa,dvizi.element.value+1);
                }
            }
            if (grupa.equals("O")){
                SLLNode<MapEntry<String,Integer>> dvizi=grupaO.search(grupa);
                if (dvizi == null) {
                    grupaO.insert(grupa,1);
                }
                else
                {
                    grupaO.insert(grupa,dvizi.element.value+1);
                }
            }
        }


        String proverka=cin.next();
        if (proverka.equals("A")) {
            SLLNode<MapEntry<String, Integer>> dvizi = grupaA.search(proverka);
            if (dvizi == null) {
                System.out.println("Nema pacienti so krvna grupa A");
            }
            else
            {
                System.out.println("Ima: "+dvizi.element.value+" so krvna grupa A");
            }

        }
        if (proverka.equals("B")) {
            SLLNode<MapEntry<String, Integer>> dvizi = grupaB.search(proverka);
            if (dvizi == null) {
                System.out.println("Nema pacienti so krvna grupa B");
            }
            else
            {
                System.out.println("Ima: "+dvizi.element.value+" so krvna grupa B");
            }

        }
        if (proverka.equals("O")) {
            SLLNode<MapEntry<String, Integer>> dvizi = grupaO.search(proverka);
            if (dvizi == null) {
                System.out.println("Nema pacienti so krvna grupa O");
            }
            else
            {
                System.out.println("Ima: "+dvizi.element.value+" so krvna grupa O");
            }

        }

    }
}