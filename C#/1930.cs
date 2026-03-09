using System; 
using System.Linq;

class URI {

    static void Main(string[] args) { 
        int[] numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        
        Console.WriteLine(numbers.Sum() - 3);
    }

}