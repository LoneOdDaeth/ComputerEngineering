using System;
namespace Kalitim
{
    class Sayi
    {
        public int oge1;

        public Sayi()
        {
            Console.WriteLine("Parametresiz yapıcı çalıştı");
        }
        public Sayi(int prm1)
        {
            oge1 = prm1;
        }
    }
    class Deger : Sayi
    {
        public int oge2;

        public Deger(int prm1, int prm2) : base(prm1)
        {
            oge2 = prm2;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Deger y = new Deger(10, 20);
            Console.WriteLine(y.oge1 + " \n" + y.oge2);
        }
    }
}