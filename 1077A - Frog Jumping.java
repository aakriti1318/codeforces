//https://codeforces.com/problemset/problem/1077/A
//1077A - Frog Jumping

import java.math.BigInteger;
import java.util.*;
public class Main {
    public static void main(String[] args) {
    	Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        for(int i=1;i<=n;i++)
        {
        	BigInteger a=in.nextBigInteger();
        	BigInteger b=in.nextBigInteger();
        	BigInteger k=in.nextBigInteger();
        	BigInteger T=new BigInteger("2");
        	BigInteger temp=k.divide(T);
        	if(temp.multiply(T).compareTo(k)<0) System.out.println(a.subtract(b).multiply(temp).add(a));
        	else System.out.println(a.subtract(b).multiply(temp));
        }
    
    	
    }
}