using System;
namespace operatorAsiriYukleme
{
    class Sayi
    {
        private int deger;
        public Sayi(int gelenDeger)
        {
            this.deger = gelenDeger;
        }
        public void Yazdir()
        {
            Console.WriteLine(this.deger);
        }
        public static Sayi operator +(Sayi a, Sayi b)
        {
            return new Sayi(a.deger + b.deger);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Sayi s1 = new Sayi(3);
            Sayi s2 = new Sayi(5);
            Sayi s3 = s1 + s2;
            s3.Yazdir();
        }
    }
}