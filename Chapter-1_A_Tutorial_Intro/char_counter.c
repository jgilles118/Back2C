/*This program will count the number of characters
 * a file.
 *
 * */

#include <stdio.h>
#include <string.h>

int main(){

    char story[100];
    int cc = 0;

    printf("Tell me a story and I\'ll count the character: ");
    fgets(story, sizeof(story), stdin);

    cc = strlen(story)-1;  
    printf("%1d\n", cc);

    return 0;
}
