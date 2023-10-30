// Online C compiler to run C program online
#include <stdio.h>

int numDigits1(int num);
void numDigits2(int num, int* result);

int main() {
    int number, answer=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    
    printf("numDigits1(): %d\n", numDigits1(number)); 
    
    numDigits2(number, &answer); 
    printf("numDigits2(): %d\n", answer);
    
    return 0;
}

int numDigits1(int num) {
    int count = 0; 
    do {
        count++; // count = 1, 2, 3, 4
        num = num / 10; // 123, 12, 1, 0
    } while (num > 0); 
    
    return count;
}

void numDigits2(int num, int* result) {
    int* p;
    int q = 10;
    p = &q; // &q = Blk 287
    *p = q; // q = 10
    
    
    int* result = &answer;
    int* result;
    result = &answer;
    
    *result = numDigits1(num);
}
