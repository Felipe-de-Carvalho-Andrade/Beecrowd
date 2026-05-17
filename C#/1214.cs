using System;
using System.Globalization;

// DEU ERRADO EM ALGUNS CASOS NÃO SEI PQ
class URI {
    static void Main(string[] args){
        int c = int.Parse(Console.ReadLine());

        for (int i = 0; i < c; i++) {
            string[] line = Console.ReadLine().Split(' ');

            int n = int.Parse(line[0]);
            int sum = 0;
            
            for (int j = 1; j <= n; j++) 
                sum += int.Parse(line[j]);

            double avg = (double)sum / n;

            int count = 0;

            for (int j = 1; j <= n; j++) 
                if (int.Parse(line[j]) > avg) 
                    count++;

            Console.WriteLine($"{((double)count / n * 100).ToString("F3", CultureInfo.InvariantCulture)}%");
        }
    }

}