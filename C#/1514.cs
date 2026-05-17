using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        while (true) {
            string[] line = Console.ReadLine().Split(' ');

            int n = int.Parse(line[0]);
            int m = int.Parse(line[1]);

            if (m == 0 && n == 0)
                break;

            int[,] matriz = new int[n, m];

            for (int i = 0; i < n; i++) {
                string[] line2 = Console.ReadLine().Split(' ');
                for (int j = 0; j < m; j++) 
                    matriz[i, j] = int.Parse(line2[j]);
            } 

            int result = 0;

            bool cond1 = true;

            for (int i = 0; i < n; i++) {
                int soma = 0;
                for (int j = 0; j < m; j++)
                    soma += matriz[i, j];

                if (soma == m)
                    cond1 = false;
            }

            if (cond1)
                result++;

            bool cond2 = true;

            for (int j = 0; j < m; j++) {
                bool resolveu = false;

                for (int i = 0; i < n; i++) 
                    if (matriz[i, j] == 1)
                        resolveu = true;
                    
                if (!resolveu) 
                    cond2 = false;
            }

            if (cond2)
                result++;

            bool cond3 = true;

            for (int j = 0; j < m; j++) {
                int total = 0;

                for (int i = 0; i < n; i++) 
                    total += matriz[i, j];

                if (total == n)
                    cond3 = false;
            }

            if (cond3)
                result++;

            bool cond4 = true;

            for (int i = 0; i < n; i++) {
                int soma = 0;

                for (int j = 0; j < m; j++)
                    soma += matriz[i, j];

                if (soma == 0)
                    cond4 = false;
            }

            if (cond4)
                result++;

            Console.WriteLine(result);
        }
    }
}