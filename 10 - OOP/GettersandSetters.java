//? Getters and Setters
public class GettersandSetters
{
    public static void main(String args[])
    {
        Auth gs=new Auth();
        gs.setUsername("Dhruv");
        gs.setPassword("asdhgiw");
        System.out.println("Username is : "+ gs.getUsername());
        System.out.println("Password : "+ gs.getPassword());
    }
}
class Auth 
{
    private String username;
    private String password;
    void setUsername(String username)
    {
        this.username=username;
    }
    void setPassword(String password)
    {
        this .password=password;
    }
    String getUsername()
    {
        return this.username;
    }
    String getPassword()
    {
        return this.password;
    }
}