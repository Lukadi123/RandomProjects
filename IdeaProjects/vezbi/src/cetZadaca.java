//
//import java.io.BufferedReader;
//import java.io.EOFException;
//import java.io.IOException;
//import java.io.InputStreamReader;
//import java.nio.Buffer;
//import java.util.*;
//import java.util.Iterator;
//
// interface Tree<E> {
//    // //////////Accessors ////////////
//
//    public Tree.Node<E> root();
//
//    public Tree.Node<E> parent(Tree.Node<E> node);
//
//    public int childCount(Tree.Node<E> node);
//
//    // //////////Transformers ////////////
//    public void makeRoot(E elem);
//
//    public Tree.Node<E> addChild(Tree.Node<E> node, E elem);
//
//    public void remove(Tree.Node<E> node);
//
//    // //////////Iterators ////////////
//    public Iterator<E> children(Tree.Node<E> node);
//
//    public Iterable<Tree.Node<E>> childrenNodes(Tree.Node<E> node);
//
//    // //////Inner interface for tree nodes ////////
//    public interface Node<E> {
//
//        public E getElement();
//
//        public void setElement(E elem);
//
//    }
//
//}
//
// class BNode<E> {
//
//    public E info;
//    public BNode<E> left;
//    public BNode<E> right;
//
//    public static int LEFT = 1;
//    public static int RIGHT = 2;
//
//    public BNode<E> parent;
//    public BNode(E info, BNode<E> parent) {
//        this.parent = parent;
//        this.info = info;
//        left = null;
//        right = null;
//    }
//    public BNode(E info) {
//        this.parent = null;
//        this.info = info;
//        left = null;
//        right = null;
//    }
//
//    public BNode(E info, BNode<E> left, BNode<E> right) {
//        this.info = info;
//        this.left = left;
//        this.right = right;
//    }
//
//}
// class BTree<E> {
//
//    public BNode<E> root;
//
//    public BTree() {
//        root = null;
//    }
//
//    public BTree(E info) {
//        root = new BNode<E>(info);
//    }
//
//    public void makeRoot(E elem) {
//        root = new BNode<E>(elem);
//    }
//
//    public BNode<E> addChild(BNode<E> node, int where, E elem) {
//
//        BNode<E> tmp = new BNode<E>(elem, node);
//
//        if (where == BNode.LEFT) {
//            if (node.left != null)  // veke postoi element
//                return null;
//            node.left = tmp;
//        } else {
//            if (node.right != null) // veke postoi element
//                return null;
//            node.right = tmp;
//        }
//
//        return tmp;
//    }
//
//    public void inorder() {
//        System.out.print("INORDER: ");
//        inorderR(root);
//        System.out.println();
//    }
//
//    public void inorderR(BNode<E> n) {
//        if (n != null) {
//            inorderR(n.left);
//            System.out.print(n.info.toString()+" ");
//            inorderR(n.right);
//        }
//    }
//
//    public void preorder() {
//        System.out.print("PREORDER: ");
//        preorderR(root);
//        System.out.println();
//    }
//
//    public void preorderR(BNode<E> n) {
//        if (n != null) {
//            System.out.print(n.info.toString()+" ");
//            preorderR(n.left);
//            preorderR(n.right);
//        }
//    }
//
//    public void postorder() {
//        System.out.print("POSTORDER: ");
//        postorderR(root);
//        System.out.println();
//    }
//
//    public void postorderR(BNode<E> n) {
//        if (n != null) {
//            postorderR(n.left);
//            postorderR(n.right);
//            System.out.print(n.info.toString()+" ");
//        }
//    }
//
//    public void inorderNonRecursive() {
//        ArrayStack<BNode<E>> s = new ArrayStack<BNode<E>>(100);
//        BNode<E> p = root;
//        System.out.print("INORDER (nonrecursive): ");
//
//        while (true) {
//            // pridvizuvanje do kraj vo leva nasoka pri sto site koreni
//            // na potstebla se dodavaat vo magacin za podocnezna obrabotka
//            while (p != null) {
//                s.push(p);
//                p = p.left;
//            }
//
//            // ako magacinot e prazen znaci deka stebloto e celosno izminato
//            if (s.isEmpty())
//                break;
//
//            p = s.peek();
//            // pecatenje (obrabotka) na jazelot na vrvot od magacinot
//            System.out.print(p.info.toString()+" ");
//            // brisenje na obraboteniot jazel od magacinot
//            s.pop();
//            // pridvizuvanje vo desno od obraboteniot jazel i povtoruvanje na
//            // postapkata za desnoto potsteblo na jazelot
//            p = p.right;
//
//        }
//        System.out.println();
//
//    }
//
//    int insideNodesR(BNode<E> node) {
//        if (node == null)
//            return 0;
//
//        if ((node.left == null)&&(node.right == null))
//            return 0;
//
//        return insideNodesR(node.left) + insideNodesR(node.right) + 1;
//    }
//
//    public int insideNodes() {
//        return insideNodesR(root);
//    }
//
//    int leavesR(BNode<E> node) {
//        if (node != null) {
//            if ((node.left == null)&&(node.right == null))
//                return 1;
//            else
//                return (leavesR(node.left) + leavesR(node.right));
//        } else {
//            return 0;
//        }
//    }
//
//    public int leaves() {
//        return leavesR(root);
//    }
//
//    int depthR(BNode<E> node) {
//        if (node == null)
//            return 0;
//        if ((node.left == null)&&(node.right == null))
//            return 0;
//        return (1 + Math.max(depthR(node.left), depthR(node.right)));
//    }
//
//    public int depth() {
//        return depthR(root);
//    }
//
//    void mirrorR(BNode<E> node) {
//        BNode<E> tmp;
//
//        if (node == null)
//            return;
//
//        // simetricno preslikuvanje na levoto i desnoto potsteblo
//        mirrorR(node.left);
//        mirrorR(node.right);
//
//        // smena na ulogite na pokazuvacite na momentalniot jazel
//        tmp = node.left;
//        node.left = node.right;
//        node.right = tmp;
//
//    }
//
//    public void mirror() {
//        mirrorR(root);
//    }
//
//}
//
//
//public class cetZadaca
//{
//    public static void main(String[] args)throws IOException
//    {
//        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
//        int n=Integer.parseInt(br.readLine());
//        BTree<String> tree=new BTree<>();
//        BNode<String> nodes[]=new BNode[n];
//        for (int i=0;i<n;i++)
//        {
//            String command=br.readLine();
//            String []parts=command.split(" ");
//            int index=Integer.parseInt(parts[0]);
//            String info=parts[1];
//            String where=parts[2];
//            int parent=-1;
//            if (parts.length>3)
//            {
//                parent=Integer.parseInt(parts[3]);
//            }
//            nodes[index]=new BNode<>(info);
//            if (where.equalsIgnoreCase("LEFT"))
//            {
//                tree.addChild(nodes[parent],BNode.LEFT,nodes[index].info);
//            }
//            if (where.equalsIgnoreCase("RIGHT"))
//            {
//                tree.addChild(nodes[parent],BNode.RIGHT,nodes[index].info);
//
//            }
//            if (where.equalsIgnoreCase("root"))
//            {
//                tree.root=nodes[index];
//            }
//            }
//        int m=Integer.parseInt(br.readLine());
//        for (int i=0;i<m;i++)
//        {
//            String command=br.readLine();
//            String []parts=command.split(" ");
//            String node1=parts[0];
//            String node2=parts[1];
////
////            int distance=tree.shortestDistance(node1,node2);
//        }
//
//    }
//}
//
