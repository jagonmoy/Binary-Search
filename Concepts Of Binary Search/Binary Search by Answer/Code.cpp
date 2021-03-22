bool func(ll val ) {
   
 bool fact ;
  
 // here will be some condition if this condition is true then the value of fact will be true otherwise it will be false ;
  
  return fact ;
  
}

ll BinarySearch( ) {
     ll l = -1 , r = 1e12 ; // value of l and r will depend on the constraints 
     while(r > l+1) {
         ll m = (l+r)/2 ;
         if (func(m)) {
             l = m or r = m ; // accordiing to how the good and bad values are arranged . if 1 represent good value and 0 represent bad value .
                             // if the array is , 111111110000000 then l = m , else if the array is 00000111111 then r = m ;
                               
         }
         else l = m or r = m ;

     }
  cout << l or r (according to situation) << endl;
}
