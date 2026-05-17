using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        string[] line = Console.ReadLine().Split(' ');
        string[] line2 = Console.ReadLine().Split(' ');

        int la = int.Parse(line[0]); 
        int lb = int.Parse(line[1]); 
        int sa = int.Parse(line2[0]); 
        int sb = int.Parse(line2[1]); 

        if (n >= la && n <= lb && n >= sa && n <= sb) {
            Console.WriteLine("possivel");
        } else {
            Console.WriteLine("impossivel");
        }
    }
}