using Microsoft.VisualStudio.TestTools.UnitTesting;
using calculator;
using System;
using System.Collections.Generic;
using System.Text;

namespace calculator.Tests
{
    [TestClass()]
    public class CalculatorCheckerTests
    {
        [TestMethod()]
        public void ValidateCalculatorTest_plus_ReturnTrue()
        {
            double a = 8;
            double b = 15;
            string operation = "+";
            double result = 23;
            double actual = CalculatorChecker.ValidateCalculator(a, b, operation);
            Assert.AreEqual(result, actual);

        }


        [TestMethod]
        public void ValidateCalculatorTest_Minus_ReturnTrue()
        {
            double a = 51;
            double b = 6;
            string operation = "-";
            double result = 45;
            double actual = CalculatorChecker.ValidateCalculator(a, b, operation);
            Assert.AreEqual(result, actual);
        }

        [TestMethod]
        public void ValidateCalculatorTest_multiply_ReturnTrue()
        {
            double a = 25;
            double b = 5;
            string operation = "*";
            double result = 125;

            double actual = CalculatorChecker.ValidateCalculator(a, b, operation);
            Assert.AreEqual(result, actual);
        }

        [TestMethod]
        public void ValidateCalculatorTest_divide_ReturnTrue()
        {
            double a = 7.5;
            double b = 3;
            string operation = "/";
            double result = 2.5;

            double actual = CalculatorChecker.ValidateCalculator(a, b, operation);
            Assert.AreEqual(result, actual);
        }

        [TestMethod()]
        [ExpectedException(typeof(DivideByZeroException), "Вы не можете делить на ноль ")]
        public void ValidateCalculatorTest_divide_ReturnFalse()
        {
            double a = 1;
            double b = 0;


            string operation = "/";
            double actual = CalculatorChecker.ValidateCalculator(a, b, operation);

        }

    }
}
