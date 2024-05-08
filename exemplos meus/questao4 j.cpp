#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createA(int qtt, int *a){
    int i;
    for(i = 0;i<qtt;i++){
        a[i] = rand()%100;
    }
}

void transferNOrgB(int qtt, int *a, int *b){
    int i, j, tmp, smaller;
    bool itsSmaller = false;

    for(i = 0;i<qtt;i++){
        if(a[i]>a[i+1]){
            tmp = a[i+1];
            a[i+1] = a[i];
            a[i] = tmp;

            smaller = a[i];

                for(j = 0; j<qtt;j++){

                    if(smaller<a[j]&&smaller!=smaller){
                        itsSmaller = true;
                    }

                    else{
                        itsSmaller = false;
                    }

                    if(j+1==qtt){
                       break;
                        }

                }

            if(i+1==qtt){
                break;
            }

            if(itsSmaller == true){
                b[i] = smaller;
            }

        }
    }


}

showArray(int qtt, int *array){
    int i;
     for(i = 0;i<qtt;i++){
        printf("%d\t", array[i]);
    }
}

int main (void){

    int qtt, *arrayA, *arrayB;
    printf("Input the lenght of A: ");
    scanf("%d",&qtt);

    createA(qtt, arrayA);
    printf("A: ");
    showArray(qtt, arrayA);
    transferNOrgB(qtt, arrayA, arrayB);
    printf("B: ");
    showArray(qtt, arrayB);

}
