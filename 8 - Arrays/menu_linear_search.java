//? Menu for linear search
public class menu_linear_search {
    public static int menu(String food[],String key){
        for(int i=0;i<food.length;i++)
        {
            if(food[i]==key)
            {
                return i;
            }
        }
        return -1;
    }   
    public static void main(String args[]){
        String food[]={"Dosa","Samosa","Chips"};
        String key="Chips";
        int index=menu(food,key);
        if(index==-1){
            System.out.println("Not present");
        }
        else{
            System.out.println("The index is at "+index);
        }
    } 
}
