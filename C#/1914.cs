using System; 
using System.Linq;

class URI {

    static void Main(string[] args) { 
        int QT = int.Parse(Console.ReadLine());

        for (int i = 0; i < QT; i++) {
            string[] strings = new string[4];
            strings = Console.ReadLine().Split(' ');

            int[] numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int sum = numbers[0] + numbers[1];

            if (sum % 2 == 0) 
                if (strings[1] == "PAR")
                    Console.WriteLine(strings[0]);
                else
                    Console.WriteLine(strings[2]);
            else 
                if (strings[1] == "IMPAR")
                    Console.WriteLine(strings[0]);
                else
                    Console.WriteLine(strings[2]);
        }
    }
}