using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibraryPassword
{
    public class ClassChecker
    {
        public static bool validatePassword(string password)
        {
            if (password.Length < 8 || password.Length > 20)
                return false;
            if (!password.Any(char.IsDigit))
                return false;
            if (!password.Any(char.IsLower))
                return false;
            if (!password.Any(char.IsUpper))
                return false;
            if (password.Intersect("'!@#№$%^:&?*()./}]{[<>,-+=_-").Count() == 0)
                return false;
            return true;
        }
        static void Main(string[] args)
        {
            string password = "fgih";
            bool actual = ClassChecker.validatePassword(password);
            Console.WriteLine("res " + actual);
        }
    }
}