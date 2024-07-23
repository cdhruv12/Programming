public class Acess
{
    public static void main(String[] args)
    {
        Acc a1=new Acc();
    a1.username="Dhruv";
    a1.setPassword("iubciwbciuwbec");
    System.out.println("Username : "+ a1.username);
    System.out.println("Password : "+ a1.getPassword());
    }
}
class Acc
{
    public String username;
    private String password;

    public void setPassword(String pwd)
    {
        password=pwd;
    }
    public String getPassword()
    {
        return this.password;
    }
}