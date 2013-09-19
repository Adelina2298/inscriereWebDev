#include <iostream.h>
#include <stdarg.h>


int ADD_TWO ( int i ) {
    
    return i + 2;
           
    }
    
int SUBSTRACT_FIVE ( int i ) {
    
    return i - 5;
           
           }

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
    for ( it = 2; it <= i/2 && ok == 1; it++ )
        if ( i % it == 0 ) ok = 0;
    if( ok == 1 ){ 
        if ( neg == 1 ) return -i;
        return i;
        }
    
    ok = 0;
    minus = i-1;
    while ( ok == 0 ){
          ok = 1;
          for ( it = 2; it < minus/2 && ok == 1; it++ )
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
    
void print ( int no_arguments, ... ) {
     
     int it;
     va_list argument;
     va_start ( argument, no_arguments );
     
     cout << "[ ";
     for ( it = 0; it < no_arguments; it++ ){
         cout << va_arg ( argument, int );
         if ( it < no_arguments-1 ) cout << ", ";
         else cout << " ]\n";
         }
     
     va_end( argument );
     
     }
    

    
int main ( ) {
    
    int i;
    
    cout << "\n NUMBER: ";
    cin >> i;
    
    cout << "\n [ " << i << ", ADD_TWO, " << "SUBSTRACT_FIVE ] = ";
    print ( 2, ADD_TWO( i ), SUBSTRACT_FIVE( i ) );
    
    cout << "\n [ " << i <<  ", SQUARE_NUMBER, " << "NEGATIVE_NUMBER, " << "MIRRORED_NUMBER, " << "SUM_OF_DIGITS, " << "CLOSEST_PRIME ] = ";
    print ( 5, SQUARE_NUMBER( i ), NEGATIVE_NUMBER( i ), MIRRORED_NUMBER( i ), SUM_OF_DIGITS( i ), CLOSEST_PRIME( i ) );
    cout << "\n\n\n";
    
    
    system("PAUSE");
    return 0;

    }
    

    

    
    
    


    

    
    
    


    
