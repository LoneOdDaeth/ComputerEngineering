using System;
using System.Runtime.CompilerServices;

namespace Basketbol
{
    class oyuncu
    {
        public string isimSoyisim;
        public string mevki;
        public double boy;
        public string yas;
    }
    class basketbol
    {
        static void Main(string[] argc)
        {
            oyuncu oyuncu1 = new
                oyuncu();
            oyuncu oyuncu2 = new
                oyuncu();

            oyuncu1.isimSoyisim = "Kobe Bryant";
            oyuncu1.mevki = "Kısa Forvet/Şutör Gard";
            oyuncu1.boy = 1.98;
            oyuncu1.yas = "Rıp";

            oyuncu2.isimSoyisim = "Lebron James";
            oyuncu2.mevki = "Uzun Forvet/Kısa Forvet";
            oyuncu2.boy = 2.06;
            oyuncu2.yas = "37";

            Console.WriteLine("Oyuncuların ortalama boyları= " + (oyuncu1.boy + oyuncu2.boy) / 2);
        }
    }
}