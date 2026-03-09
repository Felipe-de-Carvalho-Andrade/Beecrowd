using System; 

class URI {

    static void Main(string[] args) { 
        int C = int.Parse(Console.ReadLine());

        for (int i = 0; i < C; i++) {
            Console.WriteLine(int.Parse(Console.ReadLine()) % 2 == 0 ? "0" : "1");
        }
    }

}