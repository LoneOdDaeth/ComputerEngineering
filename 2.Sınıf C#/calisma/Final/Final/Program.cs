// Normal kalitim
//using System;

//namespace Final
//{
//    class sayi
//    {
//        public int a;
//        private int b; //Alt sinif ve main ulasamaz.
//        protected int c = 250; //Alt siniftan ulasilir, mainden ulasilamaz.

//        public int toplamHesapla()
//        {
//            return this.a + c; //This sayi sinifini isaret eder.
//        }
//    }

//    class deger : sayi
//    {
//        public int m;
//        protected int n;

//        public int toplambul()
//        {
//            return base.a + this.m + c; //base sayi sinifini temsil eder. this hem sayi hem deger.
//        }
//    }

//    class Program
//    {
//        static void Main(string[] args)
//        {
//            sayi x = new sayi();
//            deger y = new deger();

//            //Ulaşılabilen alanlar:
//            Console.WriteLine(x.a);
//            Console.WriteLine(y.a);
//            Console.WriteLine(y.m);

//            y.a = 100;
//            y.m = 200;
//            Console.WriteLine(y.toplambul());
//            Console.WriteLine(y.toplamHesapla());
//        }
//    }
//}

//using System;

//namespace Kalitim
//{
//    class Sayi
//    {
//        public Sayi()
//        {
//            Console.WriteLine("Ana sınıf yapıcısı çalıştı");
//        }
//    }
//    class Deger : Sayi
//    {
//        public Deger(int n)
//        {
//            Console.WriteLine("Alt sınıf yapıcısı çalıştı. Parametre:" + n);
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Deger y = new Deger(10);
//        }
//    }
//}

//using System;

//namespace Kalitim
//{
//    class Sayi
//    {
//        public int oge1;
//        public Sayi()
//        {
//            Console.WriteLine("Parametresiz yapıcı çalıştı");
//        }
//        public Sayi(int prm1)
//        {
//            oge1 = prm1;
//        }
//    }
//    class Deger : Sayi
//    {
//        public int oge2;
//        public Deger(int prm1, int prm2) : base(prm1)
//        {
//            oge2 = prm2;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Deger y = new Deger(10, 20);
//            Console.WriteLine(y.oge1 + " \n" + y.oge2);
//        }
//    }
//}


// çift kalıtım
//using System;

//namespace Kalitim
//{
//    class Sinif1
//    {
//        public Sinif1()
//        {
//            Console.WriteLine("Sınıf1 yapıcısı çalıştı.");
//        }
//    }
//    class Sinif2 : Sinif1
//    {
//        public Sinif2()
//        {
//            Console.WriteLine("Sınıf2 yapıcısı çalıştı.");
//        }
//    }
//    class Sinif3 : Sinif2
//    {
//        public Sinif3(int n)
//        {
//            Console.WriteLine("Sınıf3 yapıcısı çalıştı. Parametre:" + n);
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Sinif3 y = new Sinif3(5);
//            Console.ReadKey();
//        }
//    }
//}


// İsim saklama
//using System;

//namespace Kalitim
//{
//    class Sinif1
//    {
//        public int sayi = 100;
//    }
//    class Sinif2 : Sinif1
//    {
//        public int sayi = 200;
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Sinif2 y = new Sinif2();
//            Console.WriteLine(y.sayi);
//        }
//    }
//}


//method saklama
//using System;

//namespace Kalitim
//{
//    class Sinif1
//    {
//        public void topla()
//        {
//            Console.WriteLine("Sınıf1 fonksiyonu çalıştı.");
//        }
//    }
//    class Sinif2 : Sinif1
//    {
//        public new void topla()
//        {
//            Console.WriteLine("Sınıf2 fonksiyonu çalıştı.");
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Sinif1 abc = new Sinif1();
//            abc.topla();
//            Sinif2 def = new Sinif2();
//            def.topla();
//        }
//    }
//}


//using System;

//interface IAnimal
//{
//    void animalSound(); // interface method (gövdesi yok)
//}
//// Dog sınıfı IAnimal interface'ini "implement" ediyor
//class Dog : IAnimal
//{
//    public void animalSound()
//    {
//        // animalSound() metodunun gövdesi burada yazılır
//        Console.WriteLine("The dog says: bark bark");
//    }
//}
//class Program
//{
//    static void Main(string[] args)
//    {
//        Dog myDog = new Dog(); // Bir dog nesnesi üretilir
//        myDog.animalSound();
//    }
//}


