#include <iostream.h>


int SQUARE_NUMBER ( int i ) {
    
    return i * i;
    
    }
    
int NEGATIVE_NUMBER ( int i ) {
    
    if ( i<0 ) return i;
    return -i;
    
    }
    
int MIRRORED_NUMBER ( int i ) {
    
    int mir, digit;
    
    mir = 0;
    while ( i != 0 ) {
          digit = i%10;
          i = i/10;
          mir = mir*10 + digit;
          }
          
    return mir;
    
    }

int SUM_OF_DIGITS ( int i ) {
    
    int sum, digit;
    
    if( i<0 ) i = -i;
    sum = 0;
    while ( i != 0 ){
          digit = i%10;
          i = i/10;
          sum = sum + digit;
          }
          
    return sum;
    
    }

int CLOSEST_PRIME ( int i ) {
    
    int ok, minus, plus, it, neg = 0;
    
    if ( i < 0 ){ i = -i; neg = 1; }
    ok = 1;
    for ( it=2; it<i/2 && ok == 1; it++ )
        if ( i % it == 0 ) ok = 0;
    if( ok == 1 ){ 
        if ( neg == 1 ) return -i;
        return i;
        }
    
    ok = 0;
    minus = i-1;
    while ( ok == 0 ){
          ok = 1;
          for ( it=2; it<minus/2 && ok == 1; it++ )
              if ( minus % it == 0 ) ok = 0;
          if ( ok == 0 ) minus --;
          }
    
    ok = 0;
    plus = i+1;
    while ( ok == 0 ){
          ok = 1;
          for ( it=2; it<plus/2 && ok == 1; it++ )
              if ( plus % it == 0 ) ok = 0;
          if ( ok == 0 ) plus ++;
          } 
    
    if ( plus-i < i-minus ){ 
       if ( neg == 1 ) return -plus;
       return plus;
       }
    else {
       if ( neg == 1 ) return -minus;
       return minus;
       }
       
    }
    

    
int main ( ) {
    
    int i;
    
    cout << "\n NUMBER: ";
    cin >> i;
    
    cout << "\n SQUARE_NUMBER: " << SQUARE_NUMBER( i );
    cout << "\n NEGATIVE_NUMBER: " << NEGATIVE_NUMBER( i );
    cout << "\n MIRRORED_NUMBER: " << MIRRORED_NUMBER( i );
    cout << "\n SUM_OF_DIGITS: " << SUM_OF_DIGITS( i );
    cout << "\n CLOSEST_PRIME: " << CLOSEST_PRIME( i );
    cout << "\n\n";
    
    
    system("PAUSE");
    return 0;

    }
    

    

    
    
    


    
