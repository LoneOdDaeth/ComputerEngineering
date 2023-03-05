using System;

namespace İsim_saklama
{
    class sinif
    {
        public int sayi = 100;

        public void topla()
        {
            Console.WriteLine("sinif fonksiyonu çalıştı.");
        }
    }
    class sinif1 : sinif
    {
        public int sayi1 = 200;
        
        internal int ogren()
        {
            return base.sayi;
        }

        public void topla1() 
        {
            Console.WriteLine("sinif1 fonksiyonu çalıştı.");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            sinif1 y = new sinif1();

            Console.WriteLine(y.sayi);
            Console.WriteLine(y.ogren());
            y.topla();
        }
    }
}
