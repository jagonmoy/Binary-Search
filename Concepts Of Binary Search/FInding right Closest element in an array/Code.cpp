VL v ;
void rightClosest(ll n ,ll x) {
    ll l = -1 ;      //if the array is 0 indexing
    ll r = n ;
    while(r > l+1 ) {
        ll m = (l+r)/2 ;
        if ( v[m] >= x ) r = m ; 
        else  l = m ;
    }
    cout << r+1 << endl;
}
