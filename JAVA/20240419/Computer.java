package practice;

public class Computer {
	public final String[] osType = {"윈도7", "애플 OS X", "안드로이드"};
	private String os; 
	private byte memory;
	
	public Computer(int os, byte memory) {
		this.os = osType[os];
		this.memory = memory;
	}
	
	public void print() {
		System.out.println("운영체제: " + os + ", 메인메모리: " + memory);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Computer pc = new Computer(0, (byte)16);
		Computer apple = new Computer(1, (byte)32);
		Computer galaxy = new Computer(2, (byte)16);
		
		pc.print();
		apple.print();
		galaxy.print();
	}

}
