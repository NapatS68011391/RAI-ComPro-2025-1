#include <stdio.h>
#include <string.h>

int count_Vowels(char str[]){
    int count = 0;
    int i = 0;
    while (str[i] != '\0'){
        char c = str[i];
    if(c == 'a'||c=='e'||c=='i'||c=='o'||c=='u'){
        count++;
    } i++;
}
    return count;
    }
    int main(){
        char str[100];
        printf("Input: ");
        scanf("%199[^\n]", str);
        printf("Output: Number of vowels: %d\n", count_Vowels(str));
    return 0;
    }
   