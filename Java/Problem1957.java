import java.util.Scanner;

public class Problem1957 {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int V = reader.nextInt();

        String hexstr = Integer.toString(V, 16);

        System.out.println(hexstr.toUpperCase());
    }
    
}