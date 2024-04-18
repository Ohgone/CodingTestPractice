package practice;

public class Rectangle {
	private double width;
	private double height;
	
	public Rectangle(double width, double height) {
		this.width = width;
		this.height = height;
	}
	
	public double getArea() {
		return (width * height);
	}
	
	public double getCircumference() {
		return (width * 2) + (height * 2);
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle rc = new Rectangle(3.82, 8.65);
		System.out.println("면적: " + rc.getArea());
		System.out.println("둘레: " + rc.getCircumference());
	}

}
