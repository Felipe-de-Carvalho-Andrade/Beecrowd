import java.util.Scanner;

public class Problem1865 {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int C = reader.nextInt();

        for (int i = 0; i < C; i++) {
            String name = reader.next();
            int strength = reader.nextInt();

            if (name.equals("Thor")) {
                System.out.println("Y");
            } else {
                System.out.println("N");
            }
        }
    }
}
