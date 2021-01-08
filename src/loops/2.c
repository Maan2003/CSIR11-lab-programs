#include<stdio.h>
#include<math.h>

int main ()
{ int N
; printf( "Enter N: " )
; scanf( "%d", &N )    
; int s1 =  0
    , s2 =  0
    // , s3 =  0  // no pattern found
    , s4 =  0
    , s5 =  0
; int i
; for( i = 1
     ; i <= N
     ; i += 1 ) 
    { s1 += i
    ; s2 += 3 + 2 * i
    // ; s3 = ???
    ; s4 += pow(2, i)
    ; s5 += (i % 2 ? 1 : -1) * (2 * i - 1)
    ; }
; printf
    ( "S = 1+2+3... N times = %d\n"
      "S = 5+7+9... N times = %d\n"
      // "S= 1+5+10+15 ... N times = %d\n"
      "S = 2+4+8+... N times = %d\n"
      "S = 1 -3 +5 -7 ... N times = %d\n"
    , s1, s2
    // , s3
    , s4, s5
    )
; int s6  = 0
    , s7  = 0
    // , s8  = 0
    , s9  = 0
    , s10 = 0

    , x6  = 11
    , x7  = 5
    // , x8  = 0
    , x9  = 2
    , x10 = 1

; while ( x6 < N )
{ s6 += x6
; x6 += 1
; }

; while ( x7 < N )
{ s7 += x7
; x7 += 2
; }

; while ( x9 < N )
{ s9 += x9
; x9 *= 2
; }

; while ( x10 < N )
{ s10 += x10
; x10 = -x10 + (x10 > 0) ? -2 : 2
; }

; printf
    ( "S = 11+12+13... upto N = %d\n"
      "S = 5+7+9... upto N = %d\n"
      // "S= 1+5+10+15 ... upto N = %d\n"
      "S = 2+4+8+... upto N = %d\n"
      "S = 1 -3 +5 -7 ... upto N = %d\n"
    , s6, s7
    // , s8
    , s9, s10
    )

; return 0
; }