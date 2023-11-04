#include <stdio.h>
#include <string.h>
#define SIZE 80

char *sweepSpace1(char *str); 
char *sweepSpace2(char *str); 

// ALWAYS DO THIS
// fgets(str, SIZE, stdin);
// if (p=strchr(str, '\n')) *p = '\0';

int main() {
    char str[SIZE],str2[SIZE], *p;
    
    printf("Enter the string: \n");
    fgets(str, SIZE, stdin);
    
    // Converts to array to a proper string type that can be manipulated using string functions like strcpy, strcasecmp
    str = ['n', 'u', 't', 's', '\n']
    str = ['n', 'u', 't', 's', '\0']
    
    // strchr for loops the string to find '\n'
    // and it output the address of the '\n' in the string
    // that's why we declare p as a pointer variable
    if (p=strchr(str,'\n')) {
        *p = '\0';
    }
    strcpy(str2,str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str)); 
    printf("sweepSpace2(): %s\n", sweepSpace2(str2)); 
    return 0;
}

// Array notation

// i is to loop through the string
// j is to loop through the new string (which does not have space)

e.g.
['n', 'u', ' ', 't', 's', '\0'] --> i
['n', 'u', 't', 's', '\0'] --> j

char *sweepSpace1(char *str) {
    int j = 0;
    for (int i = 0; i < SIZE; i++) {
        if (str[i] == '\0') {
            str[j] = '\0';
            break;            
        }

        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    
    return str;
}

// Pointer notation
char *sweepSpace2(char *str) {
    // ['a', 'b', 'c']
    // *str = 'a'
    // *(str + 1) = 'b'
    
    // *(str+i) = str[i]
    
    
    int j = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(str+i) == '\0') {
            *(str+j) = '\0';
            break;            
        }

        if (*(str+i) != ' ') {
            *(str+j) = *(str+i);
            j++;
        }
            
    }
    
    return str;
}
