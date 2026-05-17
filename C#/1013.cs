using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        // OUTRA OPÇÃO DE LEITURA
        /* 
            int[] ReadInts() =>
                Console.ReadLine()
                .Split(' ', StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

            var v = ReadInts();
            int a = v[0], b = v[1], c = v[2];
        */
        
        string[] line = Console.ReadLine().Split(' ');

        int a = int.Parse(line[0]); 
        int b = int.Parse(line[1]);
        int c = int.Parse(line[2]);

        Console.WriteLine($"{Math.Max(a, Math.Max(b, c))} eh o maior");
    }

}