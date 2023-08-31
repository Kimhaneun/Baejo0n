using System;

namespace Baejo0n
{
    class Program
    {
        static void Main(string[] args)
        {
            int inputInt = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < inputInt; i++)
            {
                int[] istr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                
                Console.WriteLine(istr[0] + istr[1]);
            }
        }
    }
}