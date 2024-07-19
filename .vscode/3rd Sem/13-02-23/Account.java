public class Account {
    public int customerId;
    public String customerName;
    public String branch;
    public double balance;

    public Account(int customerId, String customerName, String branch, double balance) { // ? constructor
        this.customerId = customerId;
        this.customerName = customerName;
        this.branch = branch;
        this.balance = balance;
    }

    public int getCustomerId() {
        return customerId;
    }

    public String getCustomerName() {
        return customerName;
    }

    public String getBranch() {
        return branch;
    }

    public double getBalance() {
        return balance;
    }

    public void display() {
        System.out.println("Customer Id: " + customerId);
        System.out.println("Customer Name: " + customerName);
        System.out.println("Branch Name: " + branch);
    }

    public void withdraw(double amount) {
        if (amount > balance) {
            System.out.println("Insufficient balance");
        } else {
            balance = balance - amount;
            System.out.println("Successfully withdrew amount " + amount);
        }
    }

    public void deposit(double amount) {
        balance = balance + amount;
        System.out.println("Successfully deposited amount " + amount);
    }

}