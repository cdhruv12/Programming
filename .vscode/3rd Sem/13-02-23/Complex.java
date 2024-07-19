import java.util.*;

class Complex {
  double real, imaginary;

  public Complex(double real, double imaginary) {
    this.real = real;
    this.imaginary = imaginary;
  }

  public double getReal() {
    return real;
  }

  public double getImaginary() {
    return imaginary;
  }

  public void display() {
    System.out.println("(" + real + " + " + imaginary + "i)");
  }

  public static Complex add(Complex c1, Complex c2) {
    double real = c1.real + c2.real;
    double imaginary = c1.imaginary + c2.imaginary;

    return new Complex(real, imaginary);
  }

  public static Complex subtract(Complex c1, Complex c2) {
    double real = c1.real - c2.real;
    double imaginary = c1.imaginary - c2.imaginary;

    return new Complex(real, imaginary);
  }

  public static void main(String[] args) {
    Complex c1 = new Complex(3, 4);
    Complex c2 = new Complex(1, 2);

    System.out.println("Complex number 1: ");
    c1.display();

    System.out.println("Complex number 2: ");
    c2.display();

    System.out.println("Addition of complex numbers: ");
    Complex sum = Complex.add(c1, c2);
    sum.display();

    System.out.println("Subtraction of complex numbers: ");
    Complex difference = Complex.subtract(c1, c2);
    difference.display();
  }
}