
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomInRange(int min,int max,int count,int numArray[]) {
  for (int i = 0; i < count; i++) {
      numArray[i] = rand() % (max - min + 1) + min;
  };

};

int main() {
    srand(time(0)); // Seed for randomness
    int count = 2;
    int numbers[count];

    RandomInRange(1, 10, count, numbers);
    int user;
    int goal;
    
    for (int i = 0; i < count; i++) {
      goal = 0;
      printf("Guess number ");
      printf("%d",i);
      printf("\n");
      // printf("%d",numbers[i]);
      // printf("\n");
      scanf("%d",&user);

      if (user == numbers[i])
      {
        goal = goal + 1;
        printf("True! \n");
      } else {
        printf("Wrong! \n");
      }
      
    };
    printf("Your goal is ");
    printf("%d",goal);
    printf("\n");

    return 0;
}