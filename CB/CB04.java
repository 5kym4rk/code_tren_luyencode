import java.util.Scanner;

public class coban {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int sum = a + b;
        int difference = a - b;
        int product = a * b;

        System.out.println(sum);
        System.out.println(difference);
        System.out.println(product);

        if (b == 0) {
            System.out.println("ERROR");
        } else {
            double quotient = (double) a / b;
            System.out.printf("%.2f%n", quotient);
        }

        scanner.close();
    }
}