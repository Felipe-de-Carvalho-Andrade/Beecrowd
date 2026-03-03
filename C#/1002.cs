using System; 

class URI {

    static void Main(string[] args) { 

        double raio = double.Parse(Console.ReadLine().Trim());

        double area = 3.14159 * Convert.ToDouble(Math.Pow(raio, 2));
        Console.WriteLine($"A={area.ToString("F4")}");

    }

}