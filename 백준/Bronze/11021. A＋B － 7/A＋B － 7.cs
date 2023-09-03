using System;

namespace Baejo0n
{
    class Program
    {
        static void Main(string[] args)
        {
            int _t = Convert.ToInt32(Console.ReadLine());
            int _c = 1;

            for (int i = 0; i < _t; i++)
            {
                int[] istr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int sum = istr[0] + istr[1];
                Console.WriteLine("Case #" + _c + ": " + sum);
                _c++;
            }
           
        }
        
    }

    // int[] istr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
}