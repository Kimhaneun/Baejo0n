using System;
using System.Text;

namespace Baejo0n
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            int count = Convert.ToInt32(Console.ReadLine());

            int[] i = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int find = Convert.ToInt32(Console.ReadLine());

            for (int j = 0; j < count; j++)
            {
                if (i[j] == find)
                {
                    sum++;
                }
            }

            Console.WriteLine(sum);
        }
    }
}