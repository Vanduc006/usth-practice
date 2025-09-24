// FUNCTION swap (Array, Size) :
//     SET n = Size
//     SET temp = Array[0]
//     SET Array[0] = Array[Size-1]
//     SET Array[Size-1] = temp
//     SET new = 0
//     FOR i from 0 to Size-1 :
//         new = new*10 + Array[i]
//     RETURN new

// MAIN :
//     GET number
//     GET size
//     SET Array[size] // size=5
//     FOR i from size-1 to 0 : // 4 --> 0
//         Array[i] = number % 10
//         number = number / 10

//     SET result = swap(Array, size)
//     PRINT result

#include <stdio.h>

int swap(int size, int arr[]) {
    // printf("%d %d \n",arr[0],arr[size-1]);
    int temp;
    arr[0] = arr[size-1];
    arr[size-1] = temp;
    int newNumber = 0;
    for (int i=0; i <= size-1; i++) {
        newNumber = newNumber*10 + arr[i];
    }
    return newNumber;
}

int main() {
    int number;
    scanf("%d",&number);
    int size; 
    scanf("%d",&size);

    int arr[1000];
    for (int i=size-1; i >= 0; i--) {
        printf("i = %d \n",i);
        arr[i] = number % 10;
        number = number / 10;
    }

    printf("%d",swap(size,arr));
}   