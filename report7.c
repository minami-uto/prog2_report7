#include <stdio.h>

void sorting(int scores[], int size);
void sorting(int scores[], int size){
    int tiisai;
    int s=1;
    for(int i=0; i<size; i++){
        for(int j=s; j<size; j++){
            if(scores[i] < scores[j]){ //順番を交換する
                tiisai = scores[i];
                scores[i] = scores[j];
                scores[j] = tiisai;
            }
        }
        s++;
    }
    /*
    for(int i=0; i<size; i++){
        printf("data[%d] = %d\n",i, scores[i]);
    }
    */
}

int main(){
    //const int SIZE = 5; //定数として配列のサイズを宣言                          
    //int scores[SIZE] = {0, 60, 70, 100, 90};
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    printf("scores =");
    for(int i=0; i<SIZE; i++){
        printf(" %d", scores[i]);
    }
    printf("\n");

    sorting(scores, SIZE);

    printf("results =");
    for(int i=0; i<SIZE; i++){
        printf(" %d", scores[i]);
    }
    printf("\n");

    return 0;
}