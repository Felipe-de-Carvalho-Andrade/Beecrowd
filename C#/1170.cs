using System;
using System.Globalization;

class URI {

    static void Main(string[] args) {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++) {
            double c = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            int count = 0;

            while (c > 1.0) {
                c /= 2.0;
                count++;
            }

            Console.WriteLine($"{count} dias");
        }

    }

}