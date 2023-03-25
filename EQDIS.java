/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int n;
		for(int i=0;i<t;i++){
		    n=sc.nextInt();
		    int[] x=new int[n];
		    for(int j=0;j<n;j++){
		        x[j]=sc.nextInt();
		    }
		    Arrays.sort(x);
		    int c=1;
		    for(int j=0;j<n-1;j++){
		        if(x[j]!=x[j+1]){
		            c=c+1;
		        }
		    }
		    if(n%2==0){
		        System.out.println("YES");
		    }
		    else{
		        if(c<n){
		            System.out.println("YES");
		        }
		        else{
		            System.out.println("NO");
		        }
		    }
		    //System.out.println(c);
		}
	}
}
