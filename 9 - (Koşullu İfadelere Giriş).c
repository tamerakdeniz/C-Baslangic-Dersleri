#include <stdio.h>

int main() {

    int note;
    printf("Enter your note:");
    scanf("%d",&note);

    if(note>60) {

        printf("You passed the lesson.");

    }

    else {

        printf("You failed the lesson.");

    }




    return 0;
} 