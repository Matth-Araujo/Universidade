//criando um vetor aleatorio, transferindo para outro e organizando
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void createA(int el, int *array){
        srand(time(NULL));

    for(int i = 0; i<el;i++){
        array[i] = rand()%1000;
    }
}

void showArray(int el, int *array){
    for(int i = 0; i<el;i++){
        printf("%d\t ",array[i]);
    }
}

void createB(int el, int *arrayA, int *arrayB){
    int j = 0, tmp;
    for(int i = 0; i<el;i++){
        arrayB[i] = arrayA[i];
    }

    while(1){
        j = 0;

        for(int x = 0; x < el; x++){

            if(arrayB[x]>arrayB[x+1]){
            tmp = arrayB[x];
            arrayB[x] = arrayB[x+1];
            arrayB[x+1] = tmp;
            j++;
            }
        }


        if(j==0){
            break;
        }

        

    }

}

int main(void){

    int elements, *a, *b;

    printf("Input the number of the elements of the array: ");
    scanf("%d",&elements);

    a = (int*)malloc(elements*sizeof(a));
    b = (int*)malloc(elements*sizeof(b));

    createA(elements, a);
    showArray(elements, a);
    printf("\n");
    createB(elements, a, b);
    showArray(elements, b);
    free(a);
    free(b);

    return 0;
}
