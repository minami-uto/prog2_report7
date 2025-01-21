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

    for(int i=0; i<size; i++){
        printf("data[%d] = %d\n",i, scores[i]);
    }
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    sorting(scores, SIZE);
    return 0;
}