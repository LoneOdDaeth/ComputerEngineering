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

        public void training(string index)
        {
            if (index == "defence") defence += 1;
            if (index == "atack") atack += 1;
            if (index == "dribbling") dribbling += 1;
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
    }

    class basketbol
    {
        static void Main(string[] args)
        {
            player p1 = new player();

            p1.name = "lebron James";
            p1.position = "Atack";
            p1.setskills(75, 85, 78);

            Console.WriteLine("Player price" + p1.getprice() + "M$");
            p1.training("defence");
            Console.WriteLine("Player price" + p1.getprice() + "M$");
        }
    }
}