/*package whatever //do not write package name here */
// https://practice.geeksforgeeks.org/problems/sum-of-array-elements/0/?track=interview-arrays&batchId=117

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t--!=0) {
		    int n = sc.nextInt();
		    int sum = 0;
		    for(int i = 0; i < n; i++) {
		        sum += sc.nextInt();
		    }
		    System.out.println(sum);
		}
	}
}
