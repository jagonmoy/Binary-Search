VL v ;
void leftClosest(ll n ,ll x) {
    ll l = -1 ;      //if the array is 0 indexing
    ll r = n ;
    while(r > l+1 ) {
        ll m = (l+r)/2 ;
        if ( v[m] <= x ) l = m ; 
        else  r = m ;
    }
    cout << l+1 << endl;
}
