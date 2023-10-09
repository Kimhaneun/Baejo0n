using System;

namespace Baejo0n
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int[] s = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int sum = s[0] + s[1];
                if (sum == 0)
                {
                    break;
                }
                Console.WriteLine(sum);
            }
        }
    }
}