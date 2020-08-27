import java.util.*;
import java.lang.*;

/* https://practice.geeksforgeeks.org/problems/counting-sort/1 */ 
class CountSort
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            long n = sc.nextLong();
            char seq[] = new char[(int)n+1];
            String str = "";
            str = sc.next();
            seq = str.toCharArray();
            GfG gfg = new GfG();
            System.out.println(gfg.countSort(seq));
        }
    }
}
// } Driver Code Ends


class GfG
{
    
    // Function to do count sort
    // seq[]: input array
    // return the sorted input array of character
    public static char[] countSort(char seq[])
    {
        int hash [] = new int[26];
        
        for(int i=0; i<seq.length; i++) {
            hash[seq[i]-'a']++;
        }
        int x = 0;
        for(int i=0; i<26; i++) {
            int temp = hash[i];
            while(temp--!=0) {
                seq[x] = (char)(i+'a');
                x++;
            }
        }
        return seq;
    }
}
