using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        while (true) {
            string[] input = Console.ReadLine().Split(' ');

            int h1 = int.Parse(input[0]);
            int m1 = int.Parse(input[1]);
            int h2 = int.Parse(input[2]);
            int m2 = int.Parse(input[3]);

            if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
                break;

            int agora = h1 * 60 + m1;
            int depois = h2 * 60 + m2;
            
            int sono = depois - agora;

            if (sono < 0)
                sono += 24 * 60;

            Console.WriteLine(sono);
        }
    }
}