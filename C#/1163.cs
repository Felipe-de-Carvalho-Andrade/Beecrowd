using System; 

// DEU ERRADO EM ALGUNS CASOS NÃO SEI PQ
class URI {

    static void Main(string[] args) { 
        string line;

        while ((line = Console.ReadLine()) != null) {
            double h = double.Parse(line);

            string[] points = Console.ReadLine().Split(' ');
            int p1 = int.Parse(points[0]);
            int p2 = int.Parse(points[1]);

            int n = int.Parse(Console.ReadLine());
            
            for (int i = 0; i < n; i++) {
                string[] shot = Console.ReadLine().Split(' ');
                double angle = double.Parse(shot[0]);
                double velocity = double.Parse(shot[1]);

                double rad = angle * Math.PI / 180.0;

                const double g = 9.80665;
                double vx = velocity * Math.Cos(rad);
                double vy = velocity * Math.Sin(rad);

                // S = So + Vot + at²/2 
                // --> h =  Vyt - gt²/2 
                // --> gt²/2 - Vyt + h = 0 (Bhaskara)
                double square = Math.Sqrt(vy * vy + 2 * g * h);
                double t = (2 * h) / (square - vy);
                
                double distance =  vx * t;
                
                if (distance >= p1 && distance <= p2)
                    Console.WriteLine($"{distance:F5} -> DUCK");
                else
                    Console.WriteLine($"{distance:F5} -> NUCK");
            }
        }

    }

}