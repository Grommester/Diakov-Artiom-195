import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        try{
            Scanner in = new Scanner(System.in);

            System.out.println("Enter first number");
            double num1 = in.nextDouble();

            System.out.println("Enter second number");
            double num2 = in.nextDouble();

            if(num2 == 0){
                throw new Exception("You can't divide by zero");
            }

            double res = num1 / num2;
            System.out.print("Result: ");
            System.out.println(res);
        }
        catch(Exception err){
            System.out.println("Invalid input");
        }
        finally{
            System.out.println("Program has ended");
        }
    }
}
