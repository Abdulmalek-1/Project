#include <stdio.h>
#include <stdlib.h>
#include "translation.h"



int main(int argc, char* argv[]){
    FILE* ptr1 = fopen(argv[1], "r");
    if(!ptr1){
        printf("Error file can not be opened");
        exit(0);
    }
    FILE* ptr2 = fopen("/home/it/chip_design/CommonCore/ProblemSolving/project/fibonacci.bin", "w");
    if(!ptr2){
        printf("Error file can not be opened");
        exit(0);
    }
    char buffer1[100], buffer2[100];
    int count = 1;
    while (fgets(buffer1, 100, ptr1)){
	if(buffer1[0] != '\n'){
           printf("Line %d: ",count);
           translateAsm2Bin(buffer1, buffer2);
           fprintf(ptr2, "%s\n", buffer2);
           count++;
	}
    }
    printf("Successfully generated output file: fibonacci.bin\n");
    fclose(ptr1); 
    fclose(ptr2); 
    
    return 0;
}
