using System;
using System.Globalization;

class URI {

    static void Main(string[] args) { 
        string[] peca1 = Console.ReadLine().Split(' ');
        string[] peca2 = Console.ReadLine().Split(' ');

        int quantidade1 = int.Parse(peca1[1]);
        double valor1 = double.Parse(peca1[2], CultureInfo.InvariantCulture);

        int quantidade2 = int.Parse(peca2[1]);
        double valor2 = double.Parse(peca2[2], CultureInfo.InvariantCulture);

        double total = (quantidade1 * valor1) + (quantidade2 * valor2);

        Console.WriteLine("VALOR A PAGAR: R$ " + total.ToString("F2", CultureInfo.InvariantCulture));
    }

}