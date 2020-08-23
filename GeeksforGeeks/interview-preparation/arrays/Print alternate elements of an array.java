//User function Template for Java

/* https://practice.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1/?track=interview-arrays&batchId=117 */ 

// arr[] is the array 
// n is the number of elements in array.
class GfG
{
    public static void print(int arr[], int n)
    {
        for(int i=0; i<n; i++) {
            if(i%2==0) {
                System.out.print(arr[i] + " ");
            }
        }
    }
}
