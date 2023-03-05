using System;

interface IAnimal
{
    void animalSound(); // interface method (gövdesi yok)
}

// Dog sınıfı IAnimal interface'ini "implement" ediyor
class Dog : IAnimal
{
    public void animalSound()
    {
        // animalSound() metodunun gövdesi burada yazılır
        Console.WriteLine("The dog says: bark bark");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Dog myDog = new Dog(); // Bir dog nesnesi üretilir
        myDog.animalSound();
    }
}