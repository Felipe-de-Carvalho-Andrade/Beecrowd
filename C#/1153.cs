using System;

public class URI {
    static void Main(string[] args) {
        int N = int.Parse(Console.ReadLine());
        Console.WriteLine(FatorialRecursivo(N));
    }

    public static long FatorialRecursivo(int n) {
        if (n <= 1) return 1; 
        return n * FatorialRecursivo(n - 1);
    }
}