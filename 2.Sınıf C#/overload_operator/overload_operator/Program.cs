using System;
namespace operatorAsiriYukleme
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime basla = new DateTime();
            basla = DateTime.Now;
            Console.WriteLine("Çalışmaya Başlama Zamanı= " + basla.ToString());// + operatörü string birleştirme yapıyor
            
            for (int i = 0; i < 1000000000; i++) { }
            
            DateTime bitir = new DateTime();
            bitir = DateTime.Now;
            Console.WriteLine("Çalışmanın Bitiş Zamanı= " + bitir);// + operatörü string birleştirme yapıyor
            
            TimeSpan gecenSure = new TimeSpan();
            gecenSure = bitir - basla;
            Console.WriteLine("Toplam çalışma süresi= " + gecenSure);
        }
    }
}