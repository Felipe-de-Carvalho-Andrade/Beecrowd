using System;

class URI {
    static void Main(string[] args){
        while (true) {
            string[] input = Console.ReadLine().Split(' ');

            string num01 = input[0];
            string num02 = input[1];

            if (num01 == "0" && num02 == "0")
                break;

            int i = num01.Length - 1; 
            int j = num02.Length - 1; 

            int carry = 0;
            int countCarry = 0;

            while (i >= 0 || j >= 0) {
                int digA = 0, digB = 0;

                if (i >= 0)
                    digA = int.Parse(num01[i].ToString());
                if (j >= 0)
                    digB = int.Parse(num02[j].ToString());

                int sum = digA + digB + carry;
                
                if (sum >= 10) {
                    countCarry++;
                    carry = 1;
                } else {
                    carry = 0;
                }

                i--;
                j--;
            }   

            if (countCarry == 0)
                Console.WriteLine("No carry operation.");
            else if (countCarry == 1)
                Console.WriteLine("1 carry operation.");
            else 
                Console.WriteLine($"{countCarry} carry operations.");
        }
    }

}