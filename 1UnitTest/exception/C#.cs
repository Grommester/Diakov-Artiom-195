using System;

namespace exception
{
class Program
{
    static void Main(string[] args)
    {
        double a, b;
        try
        {
            Console.WriteLine("Enter first");
            a = Convert.ToDouble(Console.ReadLine());
            
            Console.WriteLine("Enter second");
            b = Convert.ToDouble(Console.ReadLine());
            
            if (b == 0)
                    Console.WriteLine("you cannot divide by zero ");
                else
                    Console.WriteLine("Result:" + " " + a / b);
        }
        catch
        {
            Console.WriteLine("Возникло исключение!");
        }
        finally
        {
            Console.WriteLine("Блок finally");
        }
        Cnsole.WriteLine("Конец программы");
        Console.Read();
    }
}
}
