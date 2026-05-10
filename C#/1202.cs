using System;

class URI {
    static void Main(string[] args)     {
        int T = int.Parse(Console.ReadLine());

        for (int i = 0; i < T; i++) {
            string desc = Console.ReadLine();

            int n = BinaryMod(desc);
            int fib = FibonacciMod(n);

            Console.WriteLine(fib.ToString("D3"));
        }
    }
    
    // PISANO PERIOD

    // Converte binário grande para n % 1500
    static int BinaryMod(string bin) {
        int result = 0;

        foreach (char c in bin)
            result = (result * 2 + (c - '0')) % 1500;

        return result;
    }

    // Fibonacci (1000 --> Pega apenas os 3 últimos dígitos)
    static int FibonacciMod(int n) {
        if (n == 0) 
            return 0;
        if (n == 1) 
            return 1;

        int a = 0, b = 1;

        for (int i = 2; i <= n; i++) {
            int c = (a + b) % 1000;
            a = b;
            b = c;
        }

        return b;
    }
}