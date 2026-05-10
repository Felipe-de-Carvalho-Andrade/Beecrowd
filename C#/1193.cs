using System;

class URI {

    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());

        for (int i = 1; i <= n; i++) {
            string[] line = Console.ReadLine().Split(' ');
            string x = line[0];
            string y = line[1];

            Console.WriteLine($"Case {i}:");
            
            if (y == "bin") {   
                long dec = Convert.ToInt32(x, 2);
                string hex = Convert.ToString(dec, 16);

                Console.WriteLine($"{dec} dec");
                Console.WriteLine($"{hex.ToLower()} hex");
            } else if (y == "hex") {
                long dec = Convert.ToInt32(x, 16);
                string bin = Convert.ToString(dec, 2);

                Console.WriteLine($"{dec} dec");
                Console.WriteLine($"{bin} bin");
            } else {
                long dec = Convert.ToInt32(x, 10);
                string hex = Convert.ToString(dec, 16);
                string bin = Convert.ToString(dec, 2);

                Console.WriteLine($"{hex.ToLower()} hex");
                Console.WriteLine($"{bin} bin");
            }

            Console.WriteLine("");
        }

    }

}