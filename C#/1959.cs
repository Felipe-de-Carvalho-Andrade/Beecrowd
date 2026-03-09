using System; 
using System.Linq;

class URI {
    static void Main(string[] args) {
        long[] numbers = Console.ReadLine().Split(' ').Select(long.Parse).ToArray();

        Console.WriteLine(numbers[0] * numbers[1]);
    }
}
