using System;

public class URI
{
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] numbers = new int[N];

        for (int i = 0; i < N; i++)
            numbers[i] = int.Parse(Console.ReadLine());

        int count = 1; 

        for (int i = 1; i < N; i++) {
            if (numbers[i] != numbers[i - 1])
                count++;
        }

        Console.WriteLine(count);
    }
}