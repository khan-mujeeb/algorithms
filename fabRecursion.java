public class fabRecursion{
    public static void main(String[] args) {
       int a; 
        a=fab(7);
        System.out.println(a);
    }
    static int fab(int n)
    {
        if(n<2)
            return n;
        return fab(n-2)+fab(n-1);
    }
}