using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        while (true) {
            int n = int.Parse(Console.ReadLine());

            if (n == 0)
                break;

            string[] line = Console.ReadLine().Split(' ');

            int maria = 0;
            int joao = 0;

            for (int i = 0; i < n; i++) {
                int v = int.Parse(line[i]);
                
                if (v == 0)
                    maria++;
                else
                    joao++;
            }

            Console.WriteLine($"Mary won {maria} times and John won {joao} times");
        }
    }
}