/*package whatever //do not write package name here */
// https://practice.geeksforgeeks.org/problems/reverse-an-array/0/?track=interview-arrays&batchId=117
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t--!=0) {
		    int n = Integer.parseInt(br.readLine());
		    StringTokenizer st = new StringTokenizer(br.readLine());
		    int arr [] = new int [n];
		    for(int i = 0; i < n; i++) {
		        arr[i] = Integer.parseInt(st.nextToken());
		    }
		    for(int i = arr.length-1; i>=0; i--) {
		        System.out.print(arr[i]);
		        if(i!=0) {
		            System.out.print(" ");
		        }
		    }
		    System.out.println();
		}
	}
}
