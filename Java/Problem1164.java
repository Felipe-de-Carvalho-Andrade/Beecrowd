import java.util.Scanner;

public class Problem1164 {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        
        int N = reader.nextInt();
        int X, sum;

        for (int i = 0; i < N; i++) {
            X = reader.nextInt();
            sum = 0;

            for (int j = 1; j < X; j++) {
                if (X % j == 0) 
                    sum += j;
            }

            if (sum == X) {
                System.out.println(X + " eh perfeito");
            } else {
                System.out.println(X + " nao eh perfeito");
            }
        }
    }
}
