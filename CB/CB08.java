import java.util.Scanner;


public class coban {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int sum = a + b;

        System.out.printf("%d + %d = %d", a, b, sum);

        scanner.close();
    }
}