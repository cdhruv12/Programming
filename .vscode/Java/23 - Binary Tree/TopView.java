import java.util.*;
public class TopView
{
    static class Node 
    {
        int data;
        Node left,right;
        public Node(int data)
        {
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static class Info 
    {
        int hd; //? horizonatal distance
        Node node;
        public Info(Node node,int hd)
        {
            this.node=node;
            this.hd=hd;
        }
    }
    public static void topView(Node root)
    {
        //? level order
        //? `Queue<Info> q = new LinkedList<>();` is creating a queue named `q` that stores elements of
        //? type `Info`. The `LinkedList` class is being used to implement the queue. This queue will be
        //? used to perform a level order traversal of the binary tree in the `topView` method.
        Queue<Info>q=new LinkedList<>();
        //? The line `HashMap<Integer,Node> map = new HashMap<>();` is creating a HashMap named `map`
        //? that stores key-value pairs. In this case, the keys are of type `Integer` and the values are
        //? of type `Node`.
        HashMap<Integer,Node>map=new HashMap<>();
        int min=0,max=0;
        //? `q.add(new Info(root,0));` is adding a new `Info` object to the queue `q`. This `Info`
        //? object contains the root node of the binary tree and the horizontal distance `0` from the
        //? root node.
        q.add(new Info(root,0));
        //? `q.add(null);` is adding a `null` element to the queue `q`. In this specific context, adding
        //? a `null` element serves as a marker to indicate the end of a level in the binary tree during
        //? the level order traversal. When this `null` element is encountered and removed from the
        //? queue, it signifies that all nodes at the current level have been processed, and another
        //? `null` element is added to mark the end of the next level. This helps in separating nodes at
        //? different levels and ensures that the traversal is done level by level.
        q.add(null);
        while(!q.isEmpty())
        {
            Info curr=q.remove();
            if(curr==null)
            {
                if(q.isEmpty())
                {
                    break;
                }
                else
                {
                    q.add(null);
                }
            }
            else
            {
                //? This part of the code is checking if the horizontal distance (`hd`) of the current
                //? node being processed is encountered for the first time during the level order
                //? traversal of the binary tree. Here's a breakdown of what it does:
                if(!map.containsKey(curr.hd)) //? 1st time hd is occuring
                {
                    map.put(curr.hd,curr.node);
                }
                //? This part of the code is responsible for processing the left child of the current
                //? node during the level order traversal of the binary tree. Here's a breakdown of what
                //? it does:
                if(curr.node.left!=null)
                {
                    q.add(new Info(curr.node.left,curr.hd-1));
                    min=Math.min(min,curr.hd-1);
                }
                //? This part of the code is responsible for processing the right child of the current
                //? node during the level order traversal of the binary tree. Here's a breakdown of what
                //? it does:
                if(curr.node.right!=null)
                {
                    q.add(new Info(curr.node.right,curr.hd+1));
                    max=Math.max(max,curr.hd+1);
                }
            }
        }
        for(int i=min;i<=max;i++)
        {
            System.out.print(map.get(i).data+" ");
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        /*
                1
               / \
              2   3
             /\  /  \
            4 5 6   7
        */
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);
        root.right.right=new Node(7);
        topView(root);
    }
}