# Back2C
## 1.1 Getting Started with the classic Hello World

```C
#include <stdio.h>

int main() {

    printf("Hello World!");
    
    return 0;
}
```
---
## To complie then run the file, type the commmand below in the cmd or terminal.
```terminal
$ gcc hello.c -o shoutoutLoud

$ ./shoutoutLoud

```
---
## 1.2 The While loop with Variables & Arithmetic

    1. Using the While-loop
```C
#include <stdio.h>

int main() {
     
    //To convert Fahrenheit to Celcius 
    int step, lower, upper;
    float fahr, celsi;

    //Static values for the code
    lower = 0;
    upper = 300;
    step = 20;


    fahr = lower;
    while(fahr <= upper){
        celsi = (5.0/9.0) * (fahr-32.0);

        //Display the while loop results
        printf("%4.0f %6.1f\n", fahr, celsi);
        fahr = fahr + step;
    }
    return 0;
}
```
---
## 1.3 Using the For loop

```C

#include<stdio.h>

int main(){

    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20){
        
        printf("%4d %6.1f\n", fahr, (5.9/9.0)*(fahr - 32));

    }
    return 0;
}
```
---
## 1.4 Symbolic Constants

```C
//Use #define declare a symbolic name or constant
#define LOWER   0
#define UPPER   300
#define STEP    20

int main(){

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP){
        
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
     }

    return 0;
}
```
---
## 1.5 A Collection of Programs

```C
//Character Input & Output

c = gitchar() - Fetches the next input character each time it is called.
putchar(c) - The compliment to getchar().

//File Copying

/* Example
get a Character
while (the character is not at the end of the file signal){

    output the character just read;
    ger a new character;
    }
*/

#include <stdio.h>

int main(){

    int c;

    c = getchar();

    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    
    return 0;
}

// This can also be written

#include <stdio.h>

int main(){

    int c;

    while ((c = getchar()) != EOF){
        
        putchar(c);
    }
    
    return 0;
}
```
---
```C
// Charater Counting

```

