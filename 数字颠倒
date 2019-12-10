int reverse(int x){
    int y = 0;
    int max = 214783647;
    int min = -214783648;
    int lastmax = max % 10;
    int lastmin = min % 10;
    while ( x != 0 )
       if ( y < max/10 && y > min /10) {
           y = 10 * y + ( x % 10);
           x = x / 10;
       } else if (( y == max / 10 && x / 10 <=lastmax ) || (y == min / 10 && x / 10 >=lastmin)){
           y = 10 * y + ( x % 10);
           x = x / 10;
       } else {
           y = 0;
           break;
       }
       
return y;

}
