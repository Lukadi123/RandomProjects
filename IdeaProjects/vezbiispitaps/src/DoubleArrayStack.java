public class DoubleArrayStack <E>
{
    private E[] elems;
    private int depth1;
    private int depth2;
    public DoubleArrayStack(int maxDepth) {
        // Konstrukcija na nov, prazen stek.
        elems = (E[]) new Object[maxDepth];
        depth1 = 0;
        depth2 = 0;

    }
}
