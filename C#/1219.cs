using System;
using System.Globalization;

class URI {
    static void Main(string[] args) {
        string line;

        while ((line = Console.ReadLine()) != null) {
            string[] parts = line.Split(' ');

            double a = double.Parse(parts[0], CultureInfo.InvariantCulture);
            double b = double.Parse(parts[1], CultureInfo.InvariantCulture);
            double c = double.Parse(parts[2], CultureInfo.InvariantCulture);

            double s = (a + b + c) / 2.0;

            double triangleArea = Math.Sqrt(s * (s - a) * (s - b) * (s - c));

            // Raio e Área do Círculo Inscrito
            double r = triangleArea / s;
            double smallArea = Math.PI * r * r;

            // Raio e Área do Círculo Circunscrito
            double R = (a * b * c) / (4.0 * triangleArea);
            double bigArea = Math.PI * R * R;

            double red = smallArea;
            double violet = triangleArea - smallArea;
            double yellow = bigArea - triangleArea;

            Console.WriteLine(
                $"{yellow.ToString("F4", CultureInfo.InvariantCulture)} " +
                $"{violet.ToString("F4", CultureInfo.InvariantCulture)} " +
                $"{red.ToString("F4", CultureInfo.InvariantCulture)}"
            );
        }
    }
}