using System;

class URI {

    // 12 grãos = 1 grama
    // --> 12000 grãos = 1 kg
    // 7 (1 - 2 - 4 - 8 - 16 - 32- 64) = 2^(n-1)

    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++) {
            int x = int.Parse(Console.ReadLine());
            ulong sum = 0;

            for (int j = 0; j < x; j++)
                sum += (ulong)Math.Pow(2, j); 

            Console.WriteLine((sum/12000) + " kg");
        }

    }

}