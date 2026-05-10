using System;
using System.Globalization;

class URI {

    static void Main(string[] args) {
        string line;

        while ((line = Console.ReadLine()) != null) {
            string[] inputs = line.Split(' ');
            
            long a = long.Parse(inputs[0]);
            long b = long.Parse(inputs[1]);

            Console.WriteLine(Math.Abs(a - b));
        }

    }

}