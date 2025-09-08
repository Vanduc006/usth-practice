
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

int nhap(int number) { // thuc la x
    scanf("%d",&number); // truyen vao gia tri cho x
    return number; // tra ve x
}



int main() {
    
    // int dynamicArr[size];
    // printArr(staticArr,size);
    // printf("MAX IN STATIC ARR %d", maxInArr(staticArr,size));
    // printf("MIN IN STATIC ARR %d", minInArr(staticArr,size));
    // dynamic(dynamicArr,size);
    // printArr(dynamicArr,size);
    // printf("MAX IN DYNAMIC ARR %d", maxInArr(dynamicArr,size));
    // printf("MIN IN DYNAMIC ARR %d", minInArr(dynamicArr,size));

    // int x;int y; int z;
    // int number;
    // nhap(x);
    // scanf("%d",&x);
    // printf("%d",number);

    // int n = 9;
    // int y = 40;
    // int arr[9] = {10,20,40,15,1}; // array 
    // lay ra 1 thi ghi la arr[0]

    int n;
    scanf("%d",&n);
    float arr[n]; // {null,null,null}

    // int n = sizeof(arr) / sizeof(arr[0]);
    // int n = 3;

    for (int i =0;i <n;i++) {
        scanf("%f",&arr[i]);
    }


    // for (int i=0;i < n; i++) {
    //     printf("%d",arr[i]);
    // }
    //khong gia tri ->  null ,khac 0

    // arr = {1,2,3,4,5,6};

    // printf("So ban nhap la %d",nhap(x));
    // printf("So ban nhap la %d",nhap(y));
    // printf("So ban nhap la %d",nhap(z));

    // int maxx = arr[0];

    // for (int i = 0;i < n;i++) {
    //     if ( arr[i] > maxx) {
    //         maxx = arr[i];
    //     }
    // }

    // 2 + 3 + 4 / 3 -> 2/3 + 3/3 + 4/3

    // printf("%d",maxx);

    float avarage; // 0
    for( int i=0;i < n;i++) {
        avarage = (arr[i] / n) + avarage; 
        //loop 1 : average = 0 + 
    }
    printf("%f",avarage);









}

