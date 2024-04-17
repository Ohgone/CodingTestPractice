package practice;

public class Account {
	
	private String owner;
	private long balance;
	
	public Account() {
		owner = "default";
		balance = 10000;
	}
	
	public Account(String owner) {
		this.owner = owner;
		balance = 10000;
	}
	
	public Account(long balance) {
		owner = "default";
		this.balance = balance;
	}
	
	public Account(String owner, long balance) {
		this.owner = owner;
		this.balance = balance;
	}
	
	public String getOwner() {
		return owner;
	}
	
	public void setOwner(String owner) {
		this.owner = owner;
	}
	
	public long getBalance() {
		return balance;
	}
	
	public void setBalance(long balance) {
		this.balance = balance;
	}
	
	public long deposit(long amount) {
		balance += amount;
		return balance;
	}
	
	public long withdraw(long amount) {
		balance -= amount;
		return balance;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Account a = new Account("ogw", 50000);
		System.out.println(a.getOwner() + " " + a.getBalance());
		System.out.println(a.deposit(20000));
		System.out.println(a.withdraw(5000));
	}

}
