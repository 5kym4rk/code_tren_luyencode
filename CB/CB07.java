import java.util.Scanner;

public class coban {
    public static final double PI = 3.14;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double r = scanner.nextDouble();

        double chuvi = 2 * PI * r;
        double dientich = PI * r * r;

        System.out.printf("%.3f %.3f", chuvi, dientich);

        scanner.close();
    }
}