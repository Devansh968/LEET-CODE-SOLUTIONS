//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int lLargest[n];
    int rSmallest[n];
    lLargest[0] = arr[0];
    rSmallest[n-1] = arr[n-1];
    
    int l = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>l)
            l = arr[i];
        lLargest[i] = l;
    }
    
    int s = arr[n-1];
    for (int i = n-2; i>=0; i--){
        if (arr[i]<s)
            s = arr[i];
        rSmallest[i] = s;
    }
    
    for (int i = 1; i<n-1; i++){
        if (rSmallest[i] == lLargest[i])
            return rSmallest[i];
    }
    return -1;
    
}