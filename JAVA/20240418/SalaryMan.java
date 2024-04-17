package practice;

public class SalaryMan {
	
	private int salary;
	
	public SalaryMan() {
		this.salary = 1000000;
	}
	
	public SalaryMan(int salary) {
		this.salary = salary;
	}
	
	public int getAnnualGross() {
		return (salary * 12) + (salary * 5);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(new SalaryMan().getAnnualGross());
		System.out.println(new SalaryMan(2000000).getAnnualGross());
	}

}
