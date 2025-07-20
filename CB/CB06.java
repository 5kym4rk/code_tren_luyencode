import java.util.Scanner;

public class coban {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int d = scanner.nextInt();
        int r = scanner.nextInt();

        int chuvi = (d + r) * 2;
        int dientich = d * r;

        System.out.println(chuvi);
        System.out.println(dientich);

        scanner.close();
    }
}