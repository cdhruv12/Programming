//? Acess Modifiers
public class Acesss_Modifiers
{
    public static void main(String[] args)
    {
        Modifiers mod=new Modifiers();
        mod.username="Dhruv";
        mod.setPassword("asdf");
        System.out.println("Username is : "+mod.username);
        //? System.out.println("Password is : "+mod.password);
    }
}
class Modifiers
{
    public String username;
    private String password;
    void setPassword(String pwd)
    {
        password=pwd;
    }
}