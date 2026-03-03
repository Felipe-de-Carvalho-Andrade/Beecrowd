using System;

public class URI {
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            string M = Console.ReadLine();
            int half = M.Length / 2;

            string firsthalf = M.Substring(0, half);
            string secondhalf = M.Substring(half);

            string result = Reverse(firsthalf) + Reverse(secondhalf);

            Console.WriteLine(result);
        }
    }

    static string Reverse(string s)
    {
        char[] array = s.ToCharArray();
        Array.Reverse(array);
        return new string(array);
    }
}