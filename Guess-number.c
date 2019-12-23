int game(){
int answer[3] = {1, 2, 3};
int guess[3] = {1, 2, 3};
random( answer , 3); 
random( guess , 3);
int count = 0;
for (int i = 0; i < 3; i++){
    if guess[i] = answer[i]
    count++;
}
return count;
}
