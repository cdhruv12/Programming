//? Liner Search
public class linear_search {
    public static int search(int num[],int key){
        for(int i=0;i<num.length;i++){
            if (num[i]==key) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int num[]={12,23,34,45,56,67};
        int key=34;
        int index=search(num,key);
        if(index==-1){
            System.out.println("No. not find");
        }
        else{
            System.out.println("The key is at index "+index);
        }
    }
}
