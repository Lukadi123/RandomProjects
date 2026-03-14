//
//class Order
//{
//    int id;
//    int product;
//    int priority;
//
//    public Order(int id, int product, int priority) {
//        this.id = id;
//        this.product = product;
//        this.priority = priority;
//    }
//    @Override
//    public String toString()
//    {
//        return String.valueOf(id);
//    }
//}
//
//
//
//public class  edinaesZadaca{
//    public static void orders(SLL<Order> active,SLL<Order> shipping)
//    {
//        SLLNode<Order> max=active.getFirst(); // njapriopritetna naracka;
//        SLLNode<Order> dvizi=active.getFirst();
//        while(dvizi!=null)
//        {
//            if (dvizi.element.priority<=max.element.priority)
//            {
//                max=dvizi;
//            }
//            dvizi=dvizi.succ;
//        }
//            shipping.insertLast(max.element);
//            active.delete(max);
//            max=active.getFirst(); // njapriopritetna naracka;
//            dvizi=active.getFirst();
//        while(dvizi!=null)
//        {
//            if (dvizi.element.priority<=max.element.priority)
//            {
//                max=dvizi;
//            }
//            dvizi=dvizi.succ;
//        }
//        shipping.insertLast(max.element);
//        active.delete(max);
//
//    }
//
//    public static void main(String[] args) {
//        Scanner cin= new Scanner(System.in);
//        int n= cin.nextInt();
//        int m= cin.nextInt();
//        SLL<Order> active= new SLL<>();
//        SLL<Order> shipping= new SLL<>();
//        for (int i = 0; i < n; i++) {
//            int id=cin.nextInt();
//            int product=cin.nextInt();
//            int priority=cin.nextInt();
//            Order order=new Order(id,product,priority);
//            active.insertLast(order);
//        }
//        for (int i = 0; i < m; i++) {
//            int id=cin.nextInt();
//            int product=cin.nextInt();
//            int priority=cin.nextInt();
//            Order order=new Order(id,product,priority);
//            shipping.insertLast(order);
//        }
//
//        orders(active,shipping);
//        System.out.println(active);
//        System.out.println(shipping.toString());
//
//    }
//}
//public class dvanaesetZadaca
