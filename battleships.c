#include <stdio.h>

int main(){
    int R,C,N,x,y;
    int shipcount = 0;
    scanf("%d %d %d" , &R , &C , &N);
    int grid[R][N];

    for (int i = 0 ; i < R ; i++){
        for (int j = 0 ; j < C ; j++){
            scanf("%d" , grid[i][j]);
            if (grid[i][j] == 1){
                shipcount++
            }
        }
    }
    for (int i = 0; i < N ;){
        scanf("%d %d",&x,&y );
        if (grid[x][y] == 1){
            shipcount--;
            grid[x][y] = 0;
            if (shipcount == 0){
                printf("Isuru");
                break;
            }
        }else{
            N--;
            if (N == 0){
                printf("Dulaj");
                break;
            }
        }
    }
    return 0;
}