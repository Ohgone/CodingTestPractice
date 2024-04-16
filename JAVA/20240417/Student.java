package practice;

public class Student {
	
	private String department;
	private int studentId;
	
	public void setter(String department, int studentId) {
		this.department = department;
		this.studentId = studentId;
	}
	
	public void getter() {
		System.out.println(this.department);
		System.out.println(this.studentId);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student s = new Student();
		s.setter("환경공학과", 20500471);
		s.getter();
	}

}
