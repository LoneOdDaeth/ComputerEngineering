using System;

namespace basketbol
{
    class player
    {
        public string name, position;
        private int defence, atack, dribbling; // bunlar private olduğu için bunlara değer verilemez
        private double price; // ancak metotlarla değiştirilebilir

        public void setskills(int def, int atk, int drib)
        {
            defence = def;
            atack = atk;
            dribbling = drib;
            setprice();
        }

        public void setprice()
        {
            price = defence * 0.3 + atack * 0.4 + dribbling * 0.5;
        }

        public double getprice()
        {
            return price;
        }

        public int atak
        {
            set
            {
                if (value < 25)
                    atack = 25;
                else
                    atack = value;
                setprice();
            }
            get
            {
                return atack;
            }
        }
    }

    class basketbol
    {
        static void Main(string[] args)
        {
            player p1 = new player();

            p1.name = "lebron James";
            p1.position = "Atack";

            Console.WriteLine("Atak değeri girin= ");
            int atk = int.Parse(Console.ReadLine());
            p1.atak = atk;
            Console.WriteLine("Oyuncu atak yeteneği= " + p1.atak);
        }
    }
}