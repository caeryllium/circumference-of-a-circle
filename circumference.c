    #include <stdio.h>
    #include <math.h>
    #include <stdbool.h>
    #include <string.h>

    int main(){
        float radiusMeasure; 
        float diameter;
        char type [15];
        float circumference;
        float circumferenceD;
        
        printf("Will you be using radius or diameter? ");
        scanf("%29s", type);
        if (strcmp (type, "radius")== 0){
            printf("What is the radius of the circle? ");
            scanf("%f", &radiusMeasure);
            printf("calculating...");
            circumference = radiusMeasure * 2 * 3.14;
            printf("The circumference is %f units", circumference);

        }
        else if (strcmp(type, "diameter")== 0) {
            printf("What is the diameter of the circle?");
            scanf("%f", &diameter);
            printf("calculating...");
            circumferenceD = diameter * 3.14;
            printf("%f", circumferenceD);
        
        }
        else {
            printf("Please try again.");
        }
        return 0;
    }