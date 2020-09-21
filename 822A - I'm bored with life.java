//https://codeforces.com/problemset/problem/822/A
//822A - I'm bored with life


import java.util.Scanner;
import java.math.BigInteger;

public class Main{
    static BigInteger fact(int N){
        BigInteger b = new BigInteger("1");
        for(int i=2;i<=N;i++){
            b = b.multiply(BigInteger.valueOf(i));
        }
        return b;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        BigInteger b1 = fact(a); 
        BigInteger b2 = fact(b);
        BigInteger result;
        result = b1.gcd(b2);
        System.out.println(result);
    }
}