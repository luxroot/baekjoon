import java.util.*;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String table,result;
        result = "";
        table="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int N,b,mod;
        N=sc.nextInt();
        b=sc.nextInt();
        while(N != 0) {
            mod = N % b;
            result = table.charAt(mod) + result;
            N /= b;
        }
        System.out.println(result);
        sc.close();
    }
}