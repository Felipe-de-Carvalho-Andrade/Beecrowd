using System;

class URI {
    static void Main(string[] args){
        string input;
        while ((input = Console.ReadLine()) != null) {
            int n = int.Parse(input);

            int reamin = 1 % n;
            int length = 1;

            while (reamin != 0) {
                reamin = (reamin * 10 + 1) % n;
                length++;
            }

            Console.WriteLine(length);
        }
    }

}