VL v ;
void BinarySearch(ll n ,ll x) {
    ll l = 0 ;      //if the array is 0 indexing
    ll r = n-1 ;
    bool fact = false ;
    while(r >= l ) {
        ll m = (l+r)/2 ;
        if ( v[m] == x ) {
            fact = true ;
            break ;
        }
        else if ( v[m] > x ) r = m-1 ;
        else l = m+1 ;
    }
    if(fact) cout << "YES" << endl;
    else cout << "NO" << endl;
}
