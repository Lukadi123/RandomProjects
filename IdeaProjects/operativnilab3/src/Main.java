import java.util.Arrays;
import java.util.Random;
import java.util.concurrent.Semaphore;
import java.util.concurrent.locks.ReentrantLock;


class Grades {

    static double average = 0;


    static final BoundedRandomGenerator random = new BoundedRandomGenerator();

    private static final int ARRAY_LENGTH = 10000000;

    private static final int NUM_THREADS = 10;

    static ReentrantLock lock = new ReentrantLock();
    static Semaphore semaphore = new Semaphore(0);

    static void init() {
        lock =  new ReentrantLock();
        semaphore = new Semaphore(0);
    }

    // DO NOT CHANGE
    public static int[] getSubArray(int[] array, int start, int end) {
        return Arrays.copyOfRange(array, start, end);
    }

    public static void main(String[] args) {

        init();

        int[] arr = ArrayGenerator.generate(ARRAY_LENGTH);
        CalculateThread calculateThread = new CalculateThread(arr,0,ARRAY_LENGTH);
        int size = ARRAY_LENGTH/NUM_THREADS;
        Thread[] threads =  new Thread[NUM_THREADS];
        for (int i=0;i<NUM_THREADS;i++)
        {
            int start = i*size;
            int end = start + size;
            CalculateThread calcThread = new CalculateThread(arr,start,end);
            threads[i]= new Thread(()->calcThread.calculateAverageGradeParallel());
            threads[i].start();
        }
        try {
            for (int i = 0; i < NUM_THREADS; i++) {
                semaphore.acquire();
            }
        }catch(InterruptedException e)
            {
                e.printStackTrace();
            }

        average/=ARRAY_LENGTH;


        CalculateThread calculateThread1 = new CalculateThread(arr,0,ARRAY_LENGTH);

        System.out.println("Your calculated average grade is: " + average);
        System.out.println("The actual average grade is: " + ArrayGenerator.actualAvg);

        SynchronizationChecker.checkResult();

    }


    // TO DO: Make the CalculateThread class a thread, you can add methods and attributes
    static class CalculateThread {

        private int[] arr;
        int startSearch;
        int endSearch;

        public CalculateThread(int[] arr, int startSearch, int endSearch) {
            this.arr = arr;
            this.startSearch=startSearch;
            this.endSearch=endSearch;
        }

        public Double calculateAverageGrade() {
            return Arrays.stream(arr).average().getAsDouble();
        }

        public void calculateAverageGradeParallel() {
           double localSum=0;
           for (int i=startSearch;i<endSearch;i++)
           {
               localSum+=arr[i];
           }lock.lock();
           try
           {
               average+=localSum;
           }
           finally {
               lock.unlock();
           }
           semaphore.release();
        }
    }

    /******************************************************
     // DO NOT CHANGE THE CODE BELOW TO THE END OF THE FILE
     *******************************************************/

    static class BoundedRandomGenerator {
        static final Random random = new Random();
        static final int RANDOM_BOUND_UPPER = 10;
        static final int RANDOM_BOUND_LOWER = 6;

        public int nextInt() {
            return random.nextInt(RANDOM_BOUND_UPPER - RANDOM_BOUND_LOWER) + RANDOM_BOUND_LOWER;
        }

    }

    static class ArrayGenerator {

        private static double actualAvg = 0;

        static int[] generate(int length) {
            int[] array = new int[length];

            for (int i = 0; i < length; i++) {
                int grade = Grades.random.nextInt();
                actualAvg += grade;
                array[i] = grade;
            }

            actualAvg /= array.length;

            return array;
        }
    }

    static class SynchronizationChecker {
        public static void checkResult() {
            if (ArrayGenerator.actualAvg != average) {
                throw new RuntimeException("The calculated result is not equal to the actual average grade!");
            }
        }
    }
}