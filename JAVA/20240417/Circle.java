package practice;

public class Circle {
	public double radius;
	public static double PI = 3.141592;
	
	public Circle(double radius) {
		this.radius = radius;
	}
	
	public double getArea() {
		return radius * radius * PI;
	}
}
