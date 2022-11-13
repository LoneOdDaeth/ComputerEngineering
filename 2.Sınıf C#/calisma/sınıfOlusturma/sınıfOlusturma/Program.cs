using System;

namespace program
{
    class player
    {
        public string name, position;
        public int defence, atack, dribbling;
        public double price;
    }
    class Futbol
    {
        static void Main(string[] args)
        {
            player player1 = new player();
            player player2 = new player();

            player1.name = "Berk";
            player1.position = "Right Back";
            player1.defence = 75;
            player1.atack = 60;
            player1.dribbling = 50;

            player1.name = "Oğuz";
            player1.position = "Center Attacking Midfielder";
            player1.defence = 75;
            player1.atack = 70;
            player1.dribbling = 80;

            Console.WriteLine("Avarage dribbels of players= " + (player1.dribbling + player2.dribbling) / 2);
        }
    }
}