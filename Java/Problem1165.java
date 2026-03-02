import java.util.Scanner;

public class Problem1165 {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int N = reader.nextInt();

        for (int i = 0; i < N; i++) {
            int X = reader.nextInt();

            System.out.println(X + (isPrime(X) ? " eh primo" : " nao eh primo"));
        }
    }
    
    private static boolean isPrime(int x) {
        if (x <= 1) 
            return false;
        
        for (int i = 2; i < x; i++) {
            if (x % i == 0) 
                return false;
        }

        return true;
    }
        
}