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

            //if (0 < h && h <= 23 && 0 <= m && m <= 59)
            //{
            //    int hf = h * 60;
            //    hf += m;

            //    int h_ = hf - 45;
            //    int H = h_ / 60;
            //    int M = h_ % 60;

            //    Console.WriteLine($"{H} {M}");
            //}

            if (45 <= m) // 만약 분이 45보다 크거나 같으면
            {
                m -= 45; // 분을 45 뺀다
                Console.WriteLine($"{h} {m}");
            }

            else // 만약 분이 45보다 작으면 
            {
                m += 15; // 분 -45 +60 = +15!! 
                if (h <= 0) //만약 뺀 시간이 0시 아래라면
                {
                    h = 24; // 시간을 24시로 만든다
                }
                --h; // 시간을 1 뺀다
                Console.WriteLine($"{h} {m}");
            }
        }
    }
}
