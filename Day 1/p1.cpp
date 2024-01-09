
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int lar=-1,sec=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>lar){
	            sec=lar;
	            lar=arr[i];
	        }
	        else if(arr[i]>sec && arr[i]!=lar){
	            sec=arr[i];
	        }
	    }
	    return sec;
	}
};