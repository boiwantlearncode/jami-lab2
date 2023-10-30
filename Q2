// Online C compiler to run C program online
#include <stdio.h>

int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result); 
int main() {
    int number, digit, something=0; 
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    
    printf("digitPos1(): %d\n", digitPos1(number, digit)); 
    digitPos2(number, digit, &something); 
    printf("digitPos2(): %d\n", something);
    return 0; 
}

int digitPos1(int num, int digit) {
    int pos=0; 
    int result=0; 
    do {
        pos++;
        if (num%10 == digit){
            result = pos;
            break; 
        }
        num = num/10; 
    } while (num > 0);
    return result;
}

void digitPos2(int num, int digit, int *result) {
    // int* result = &something;
    
    int pos=0; 
    *result=0; 
    do {
        pos++;
        if (num%10 == digit){
            *result = pos;
            // something = pos;
            break; 
        }
        num = num/10; 
    } while (num > 0);
}

// Differences
// (1) void has pointer variable argument, int doesn't
// (2) void has no return value, int has
