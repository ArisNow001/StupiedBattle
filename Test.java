import java.util.*;
import java.time.*;

public class Test {

public static void testPidor() {

    long start = System.nanoTime();

    long iteration = 100_000_000_000L;

    double dop = 1;
    double total = 0;

    for (long i = 0; i < iteration; i++) {

        total += 1 / dop;
        dop += 2;

        total -= 1 / dop;
        dop += 2;
    }

    double pi = total * 4;

    long end = System.nanoTime();

    double time = (end - start) / 1_000_000_000.0;

    System.out.println("Количество Итераций: " + iteration);
    System.out.println("Число Пи: " + pi);
    System.out.println("Время: " + time + " секунд");
}


public static void testArray() {

    long start = System.nanoTime();

    int n = 1_000_000_000;

    System.out.println("Массив был создан");

    int[] arr = new int[n];

    System.out.println("Начал заполнять массив");

    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    long total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
        arr[i] = 0;
    }

    long end = System.nanoTime();

    double time = (end - start) / 1_000_000_000.0;

    System.out.println("Сумма: " + total);
    System.out.println("Время: " + time + " секунд");
}


public static void testPrimes() {

    long start = System.nanoTime();

    int iteration = 50_000_000;

    ArrayList<Integer> primes = new ArrayList<>();

    for (int n = 2; n < iteration; n++) {

        boolean prime = true;
        int i = 2;

        while (i * i <= n) {

            if (n % i == 0) {
                prime = false;
                break;
            }

            i++;
        }

        if (prime) {
            primes.add(n);
        }
    }

    System.out.println("Количество элементов: " + primes.size());

    long total = 0;

    for (int i = 0; i < primes.size(); i++) {
        total += primes.get(i);
    }

    long end = System.nanoTime();

    double time = (end - start) / 1_000_000_000.0;

    System.out.println("Сумма: " + total);
    System.out.println("Время: " + time + " секунд");
}


public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("1 - PIdor");
    System.out.println("2 - ARRAY");
    System.out.println("3 - PRIMES");

    System.out.print("Число: ");

    int choice = scanner.nextInt();

    if (choice == 1) {
        testPidor();
    }
    else if (choice == 2) {
        testArray();
    }
    else if (choice == 3) {
        testPrimes();
    }
    else {
        System.out.println("Иди нахуй.");
    }

    scanner.close();
}
} // By Me and Fucking ChatGPT.
