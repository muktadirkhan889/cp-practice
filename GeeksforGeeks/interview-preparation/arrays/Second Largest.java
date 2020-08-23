/*package whatever //do not write package name here */
/* https://practice.geeksforgeeks.org/problems/second-largest/0/?track=interview-arrays&batchId=117    */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t--!=0) {
		    
		    
		    int n = Integer.parseInt(br.readLine());
		    int arr [] = new int[n];
		    StringTokenizer st = new StringTokenizer(br.readLine());
		    
		    for(int i=0; i<n; i++) {
		        arr[i] = Integer.parseInt(st.nextToken());
		    }
		    
		    
		    int largest = Integer.MIN_VALUE;
		    int slargest = Integer.MIN_VALUE;
		    for(int i=0; i<n; i++) {
		        if(arr[i]>largest) {
		            slargest = largest;
		            largest = arr[i];
		        } else if(arr[i]>slargest && arr[i]!=largest) {
		            slargest = arr[i];
		        }
		    }

		    System.out.println(slargest);
		    
		}
	}
}
