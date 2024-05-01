import java.util.Scanner;

public class switchTest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = Integer.parseInt(scanner.nextLine());
        switch (num) {
            case 1:
                System.out.println("ciao");
                break;
            case 2:
                System.out.println("hello");
                break;
        }
    }
}
