bool isValid(char*s){
    int length = 0;
    char * ptr = (char*)malloc(length/2);
    memset(ptr, 0, length/2);
    int i , a = 0;
    for (i = 0; i < length; i++)
    {
        if((*(s + i) == '(' ) || (*(s + i) == '{') || (*(s + i) == '['))
        {
            a++;
            *(ptr + a) = *(s + i);
        }
        else if((*(s + i) == (*(ptr + a) + 1))||(*(s + i)==(*(ptr + a) + 2)))
        {
            a--;
        }
        else return 0;
    }
    if(a)
       return 0;
    return 1;
}
