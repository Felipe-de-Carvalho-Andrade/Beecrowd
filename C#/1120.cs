using System; 

class URI {

    static void Main(string[] args) { 

       string inputs;

            while ((inputs = Console.ReadLine()) != null) {
                string[] part = inputs.Split(' ');
                string D = part[0];
                string N = part[1];

                if (D == "0" && N == "0")
                    break;
                
                N = N.Replace(D, "");
                N = N.TrimStart('0');

                if (N.Length == 0)
                    Console.WriteLine("0");
                else
                    Console.WriteLine(N);
            }

    }

}