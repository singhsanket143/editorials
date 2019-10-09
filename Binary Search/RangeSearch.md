Here the main point  to be noted that the array is <b>sorted</b> and we have to find the  beginning and ending of the given target element .
So, we can use binary search here to get the target value lower and higher indexes from the array.
<br><br>CODE : 
<pre><code class="lang-cpp">
 #include&lt;bits/stdc++.h&gt;
 #define ll long long int
 using namespace std;<br>
ll getLowerIdx(ll* arr, ll n, ll x, bool lowerIdx) {
    ll begin = 0, end = n - 1, mid, ans = -1;
    while ( begin <= end) {
         mid = end + (begin - end)/2;
         if(arr[mid] == x) {
             ans = mid;
             if(lowerIdx) {
                 end = mid - 1;
             }
             else {
                 begin = mid + 1;
             }
         }
         else if(x > arr[mid]) {
             begin = mid + 1;
         }   
         else {
             end = mid - 1;
         } 
    }
    return ans;
}

int main() {
    //We can achieve order of log(n) complexity using Binary Search Technique.
    ll n, x;
    cin >> n;
    ll* arr = new ll[n+1];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    ll lowerIndex = getLowerIdx(arr, n, x, true);
    ll higherIndex = getLowerIdx(arr, n, x, false);
    if(lowerIndex == -1) {
        cout << "-1"<<" "<<"-1\n";
    }
    else {
        cout << lowerIndex <<" "<< higherIndex ;
    }
}
