#include <stdio.h>

int main() {

    int vize1,vize2,final;
    float dersort; 

    printf("Enter the first visa points:");
    scanf("%d",&vize1);
    printf("Enter the second visa points:");
    scanf("%d",&vize2);
    printf("Enter the Final points:");
    scanf("%d",&final); 

    dersort = (vize1+vize2+final)/3.0;
    if (dersort > 60){
        printf("You passed the Lesson.");

    }


    else {
        printf("You failed the Lesson.");


    }




    return 0;
}