using System;

namespace calculate
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            double a;
            double b;
            double total;
            char oper;

            Console.WriteLine("Введите первое число:");
            a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите оператор:");
            oper = Convert.ToChar(Console.ReadLine());

            Console.WriteLine("Введите второе число:");
            b = Convert.ToDouble(Console.ReadLine());
           


                        if (oper == '+')
                        {
                            total = a + b;
                            Console.WriteLine("Cумма " + a + " и " + b + " равна " + total);
                        }

                        else if (oper == '-')
                        {
                            total = a - b;
                            Console.WriteLine("Разность " + a + " и " + b + " равна " + total);
                        }

                        else if (oper == '*')
                        {
                            total = a * b;
                            Console.WriteLine("Умножение " + a + " на " + b + " равно " + total);
                        }

                        else if (oper == '/')
                        {
                            total = a / b;
                            Console.WriteLine("Деление " + a + " на " + b + " равно " + total);
                try
                {
                    if (b == 0)
                        Console.WriteLine("you cannot divide by zero ");
                    else
                        Console.WriteLine("Result:" + " " + a / b);
                }
                catch
                {
                    Console.WriteLine("Возникло исключение!");
                }
            }
                        }
                        else
                        {
                            Console.WriteLine("Неизвестный оператор.");
                        }
            
        }
    }
}
