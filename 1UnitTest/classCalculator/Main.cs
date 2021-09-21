using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculator
{
    public class CalculatorChecker
    {
        public static double ValidateCalculator(double a, double b, string oper)
        {
            if (oper == "+")
            {
                return (a + b);
            }

            if (oper == "-")
            {
                return a - b;

            }
            if (oper == "*")
            {
                return (a * b);

            }
            if (oper == "/")
            {
                if (b == 0.0D)
                {
                    throw new DivideByZeroException();


                }
                return (a / b);
                try
                {


                    if (b == 0)
                    {
                        Console.WriteLine("Вы не можете делить на ноль ");

                        return 1;
                    }
                    else
                        Console.WriteLine("Результат :" + " " + a / b);

                }
                catch
                {
                    Console.WriteLine("Неправильный ввод");
                }


            }

            return 0;
        }
        static public void Main()
        {
            double a = 0;
            double b = 0;



            Console.WriteLine("Введите число 1");
            a = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Введите число 2");
            b = Convert.ToDouble(Console.ReadLine());
            double res = CalculatorChecker.ValidateCalculator(a, b, "*");
            Console.WriteLine("res" + res);
        }

    }
}
