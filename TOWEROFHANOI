#include <stdio.h>
void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printf("move disk from %c to %c\n",from_rod,to_rod);
        return;
    }
    towerOfHanoi(n-1 , from_rod, aux_rod, to_rod);
    printf("move disk from %c to %c\n",from_rod,to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
int main() {
    
    int n=3;
    towerOfHanoi(n,'a','c','b');
    return 0;
}