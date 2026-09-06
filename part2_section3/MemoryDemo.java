// Java: dynamic allocation showing automatic garbage collection
import java.util.ArrayList;
import java.util.List;

public class MemoryDemo {
    public static void main(String[] args) {
        Runtime runtime = Runtime.getRuntime();

        // Allocate a large list on the heap.
        List<Integer> numbers = new ArrayList<>();
        for (int i = 1; i <= 1_000_000; i++) {
            numbers.add(i);
        }
        long sum = 0;
        for (int value : numbers) {
            sum += value;
        }
        System.out.println("Java: allocated a list of " + numbers.size() + " integers");
        System.out.println("Java: sum = " + sum);

        long usedBefore = runtime.totalMemory() - runtime.freeMemory();
        System.out.println("Java: memory in use before releasing = " + (usedBefore / 1024) + " KB");

        // Remove the only reference. The object is now eligible for garbage collection.
        numbers = null;

        // Suggest that the JVM run the garbage collector.
        System.gc();
        try { Thread.sleep(200); } catch (InterruptedException e) { }

        long usedAfter = runtime.totalMemory() - runtime.freeMemory();
        System.out.println("Java: memory in use after garbage collection = " + (usedAfter / 1024) + " KB");
        System.out.println("Java: the programmer never calls free(); the garbage collector reclaims memory");
    }
}
