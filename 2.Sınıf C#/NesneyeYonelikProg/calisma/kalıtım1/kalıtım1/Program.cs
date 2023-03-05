using System;

namespace kalıtım1
{
    class Sayi
    {
        public int a;
        private int b;
        protected int c = 250;

        public int toplamHesapla()
        {
            return this.a + c;
        }
    }
    class Deger : Sayi
    {
        public int m;
        protected int n;

        public int toplamBul()
        {
            return base.a + this.m + c;
        }
    }
    class program
    {
        static void Main(string[] args)
        {
            Sayi x = new Sayi();
            Deger y = new Deger();

            Console.WriteLine(x.a);
            Console.WriteLine(y.a);
            Console.WriteLine(y.m);

            y.a = 100;
            y.m = 200;

            Console.WriteLine(y.toplamBul());
            Console.WriteLine(y.toplamHesapla());
        }
    }
}