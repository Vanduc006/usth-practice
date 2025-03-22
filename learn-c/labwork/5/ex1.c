
#include <stdio.h>
int staticArr[] = {1,2,3,4,5,6,7,8};
int size = 8;

int dynamic(int arr[],int size) {
    for (int i = 0; i < size; i++ ) {
        int num;
       scanf("%d",&num);
       arr[i] = num;
    }
}

int printArr(int arr[], int size) {
    for ( int i = 0; i < size ; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int maxInArr(int arr[], int size) {
    int maxx = arr[0];
    for ( int i =  0; i < size; i++) {
        if ( arr[i] > maxx ) {
            maxx = arr[i];
        }
    }
    printf("\n");
    return maxx;
}

int minInArr(int arr[], int size) {
    int minn = arr[0];
    for ( int i =  0; i < size; i++) {
        if ( arr[i] < minn ) {
            minn = arr[i];
        }
    }
    printf("\n");
    return minn;
}

int main() {
    
    int dynamicArr[size];
    printArr(staticArr,size);
    printf("MAX IN STATIC ARR %d", maxInArr(staticArr,size));
    printf("MIN IN STATIC ARR %d", minInArr(staticArr,size));
    dynamic(dynamicArr,size);
    printArr(dynamicArr,size);
    printf("MAX IN DYNAMIC ARR %d", maxInArr(dynamicArr,size));
    printf("MIN IN DYNAMIC ARR %d", minInArr(dynamicArr,size));
}