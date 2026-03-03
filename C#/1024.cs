using System; 

class URI {

    static void Main(string[] args) { 

        int N = int.Parse(Console.ReadLine());
        
        for (int i = 0; i < N; i++) {
            char[] text = Console.ReadLine().ToCharArray();
            
            for (int j = 0; j < text.Length; j++) 
                if (char.IsLetter(text[j])) 
                    text[j] = (char)((int)text[j] + 3);
            
                Array.Reverse(text);
            
            for (int j = text.Length / 2; j < text.Length; ++j)
                text[j] = (char)((int)text[j] - 1);
            
            Console.WriteLine(string.Join("", text));
        }

    }

}