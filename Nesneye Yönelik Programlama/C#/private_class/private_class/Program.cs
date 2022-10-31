using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class oyuncu
    {
        private string ad; private string mevki; private int savunma;
        private int atak; private int topSurme; private double deger;

        public void setAd(string adi)
        {
            ad = adi;
        }
        public void setMevki(string mevkisi)
        {
            mevki = mevkisi;
        }
        public void setYetenek(int sav, int atk, int ts)
        {
            savunma = sav;
            atak = atk;
            topSurme = ts;
            degerBelirle();
        }
        public void calis(string konu)
        {
            if (konu == "savunma") savunma += 1;
            if (konu == "atak") atak += 1;
            if (konu == "topSurme") topSurme += 1;

            degerBelirle();
        }
        public void degerBelirle()
        {
            deger = savunma * 0.3 + atak * 0.4 + topSurme * 0.5;
        }
        public double getDeger()
        {
            return deger;
        }

        public int Atak
        {
            set 
            {
                if (value < 25)
                    atak = 25;
                else
                    atak = value;
                degerBelirle();
            }
            get
            {
                return atak;
            }
        }

    }
    class Program
    {
        static void Main(string[] args)
        {
            oyuncu oyuncu1 = new oyuncu(); //1. nesne üretiliyor
            oyuncu oyuncu2 = new oyuncu(); //2. nesne üretiliyor

            oyuncu1.setAd("Oğuz");
            oyuncu1.setMevki("Santrafor");
            oyuncu1.setYetenek(45, 79, 81);

            oyuncu2.setAd("Selim");
            oyuncu2.setMevki("Defans");
            oyuncu2.setYetenek(85, 59, 55);

            Console.WriteLine("Oyuncu degeri:" + oyuncu1.getDeger() + " M$");
            oyuncu1.calis("atak");
            Console.WriteLine("Oyuncu degeri:" + oyuncu1.getDeger() + " M$");
        }
    }
}
