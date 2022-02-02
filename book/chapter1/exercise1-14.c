#include<stdio.h>

/* program to print a histogram of the frequencies of different characters in its input */

#define CHARS_MAX 5

main()
{
    int i, c;
    int chars[CHARS_MAX];
    int freq[CHARS_MAX];

    for(i = 0; i < CHARS_MAX; ++i)
        chars[i] = EOF;
    
    for(i = 0; i < CHARS_MAX; ++i)
        freq[i] = 1;

    while ((c = getchar()) != 'D') {
        for(i = 0; i < CHARS_MAX; ++i) {
            if(chars[i] == EOF){
                chars[i] = c;
                break;
            } else if(chars[i] == c){
                ++freq[i];
                break;
            }
        }
    }
    for(i = 0; i < CHARS_MAX; ++i)
        printf("%c\t|", chars[i]);
    printf("\n");
    for(i = 0; i < CHARS_MAX; ++i)
        printf("%d\t|", freq[i]);
    printf("\n");
}
