using System;
using System.Text;

namespace Baejo0n
{
    class Program
    {
        static void Main(string[] args)
        {
            // End of File: 파일의 끝을 확인할 수 있는지를 묻는 것
            // 문제 10951 번은 EOF(End of File)를 활용하여 푸는 문제이다.
            // => 입력 값이 null인지 확인하여 에러를 체크하고 풀라는 뜻 같은데...
            // Split()으로 나누면 빈 배열을 반환하기때문에 null검사를 할 수 없다고 한다.

            while (true)
            {
                string s = Console.ReadLine();
                if (s == null)
                {
                    break;
                }
                int[] i = Array.ConvertAll(s.Split(), int.Parse);
                int sum = i[0] + i[1];
                Console.WriteLine(sum);
            }
        }
    }
}