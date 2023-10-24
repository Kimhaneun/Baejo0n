using System;

namespace baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();

            int h = int.Parse(s[0]);
            int m = int.Parse(s[1]);

            int z = Convert.ToInt32(Console.ReadLine());

            m += z;

            if (60 <= m)
            {
                int p = m / 60;
                h += p;
                m %= 60;

                if (24 <= h)
                {
                    h -= 24;
                }
            }

            Console.WriteLine($"{h} {m}");
        }
    }
}
