package practice;

public class Cylinder {
	
	public Circle circle;
	public double height;
	
	public double getVolume() {
		return circle.getArea() * height;
	}
	
	public Cylinder(Circle circle, double height) {
		this.circle = circle;
		this.height = height;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Cylinder cy = new Cylinder(new Circle(2.8), 5.6);
		System.out.println(cy.getVolume());
	}

}
