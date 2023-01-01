using System;

namespace Soyut_sınıf
{

    abstract class Personel
    {
        public double tabanMaas = 5000, maas;
        public abstract void maashesapla();
    }

    class yetkiliPersonel : Personel
    {
        double satısTutarı = 100;
        public override void maashesapla()
        {
            maas = tabanMaas + satısTutarı * 0.1;
            Console.WriteLine("Maaş= " + maas + "TL");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            yetkiliPersonel y = new yetkiliPersonel();
            y.maashesapla();
        }
    }
}
