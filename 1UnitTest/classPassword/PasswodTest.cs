using Microsoft.VisualStudio.TestTools.UnitTesting;
using ClassLibraryPassword;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibraryPassword.Tests
{
    [TestClass()]
    public class PasswordCheckerTests
    {
        [TestMethod()]
        public void Check_8Symbols_RerurnsTrue()
        {
            string password = "qazwwret7A/h";
            bool expected = true;
            bool actual = ClassChecker.validatePassword(password);
            Assert.AreEqual(expected, actual);
        }

        [TestMethod()]
        public void Check_4Symbols_RerurnsFalse()
        {
            string password = "fgih";
            bool expected = false;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_20Symbols_False()
        {
            string password = "qazwsxedecrfvtgbyhnujmk12354";
            bool expected = false;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_HasDigits_ReturnsTrue()
        {
            string password = "da1^";
            bool expected = true;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_HasNotDigits_ReturnsFalse()
        {
            string password = "dafht";
            bool expected = false;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_HasSpecS_ReturnsTrue()
        {
            string password = "Eratyk1-$ky";
            bool expected = true;
            bool actual = ClassChecker.validatePassword(password);
            Assert.AreEqual(expected, actual);
        }
        [TestMethod()]
        public void Check_HasSpecS_ReturnsFalse()
        {
            string password = "cu";
            bool expected = false;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);
        }
        [TestMethod()]
        public void Check_HasUpperLowerCase_ReturnsTrue()
        {
            string password = "Mful1-pooL";
            bool expected = true;
            bool actual = ClassChecker.validatePassword(password);
            Assert.AreEqual(expected, actual);
        }
        [TestMethod()]
        public void Check_HasUpperLowerCase_ReturnsFalse()
        {
            string password = "atruiportok";
            bool expected = false;
            bool actual = ClassChecker.validatePassword(password);
            Assert.IsFalse(actual);

        }
    }
}
