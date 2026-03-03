using System; 

class URI {

    static void Main(string[] args) { 

      int kind_of_tea = int.Parse(Console.ReadLine());
      string[] inputs = Console.ReadLine().Split(' ');

      int right_quantity = 0;

      for (int i = 0; i < 5; i++) {
         int try_tea = int.Parse(inputs[i]);

         if (kind_of_tea == try_tea) 
            right_quantity++;
      }
      
      Console.WriteLine(right_quantity);
   } 

}