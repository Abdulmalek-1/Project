#include "translation.h"
#include <stdio.h>

void lookUpTable(char *Asmcommand, char *Mchcommand) {
    if (strcmp(Asmcommand, "RA=RA+RB") == 0) {
        strcpy(Mchcommand, "00000000"); 
    } else if (strcmp(Asmcommand, "RB=RA+RB") == 0) {
        strcpy(Mchcommand, "00010000"); 
    } else if (strcmp(Asmcommand, "RA=RA-RB") == 0) {
        strcpy(Mchcommand, "00000100"); 
    } else if (strcmp(Asmcommand, "RB=RA-RB") == 0) {
        strcpy(Mchcommand, "00010100");  
    } else if (strcmp(Asmcommand, "RO=RA") == 0) {
        strcpy(Mchcommand, "00100000"); 
    } else if (strcmp(Asmcommand, "RA=0") == 0) {
        strcpy(Mchcommand, "00001000"); 
    } else if (strcmp(Asmcommand, "RA=1") == 0) {
        strcpy(Mchcommand, "00001001"); 
    } else if (strcmp(Asmcommand, "RA=2") == 0) {
        strcpy(Mchcommand, "00001010"); 
    } else if (strcmp(Asmcommand, "RA=3") == 0) {
        strcpy(Mchcommand, "00001011"); 
    } else if (strcmp(Asmcommand, "RA=4") == 0) {
        strcpy(Mchcommand, "00001100"); 
    } else if (strcmp(Asmcommand, "RA=5") == 0) {
        strcpy(Mchcommand, "00001101"); 
    } else if (strcmp(Asmcommand, "RA=6") == 0) {
        strcpy(Mchcommand, "00001110"); 
    } else if (strcmp(Asmcommand, "RA=7") == 0) {
        strcpy(Mchcommand, "00001111"); 
    } else if (strcmp(Asmcommand, "RB=0") == 0) {
        strcpy(Mchcommand, "00011000"); 
    } else if (strcmp(Asmcommand, "RB=1") == 0) {
        strcpy(Mchcommand, "00011001"); 
    } else if (strcmp(Asmcommand, "RB=2") == 0) {
        strcpy(Mchcommand, "00011010"); 
    } else if (strcmp(Asmcommand, "RB=3") == 0) {
        strcpy(Mchcommand, "00011011"); 
    } else if (strcmp(Asmcommand, "RB=4") == 0) {
        strcpy(Mchcommand, "00011100"); 
    } else if (strcmp(Asmcommand, "RB=5") == 0) {
        strcpy(Mchcommand, "00011101"); 
    } else if (strcmp(Asmcommand, "RB=6") == 0) {
        strcpy(Mchcommand, "00011110"); 
    } else if (strcmp(Asmcommand, "RB=7") == 0) {
        strcpy(Mchcommand, "00011111"); 
    } else if (strncmp(Asmcommand, "JC=", 3) == 0) {
        if (strcmp(Asmcommand, "JC=0") == 0) {
            strcpy(Mchcommand, "01110000");
        } else if (strcmp(Asmcommand, "JC=1") == 0) {
            strcpy(Mchcommand, "01110001");
        } else if (strcmp(Asmcommand, "JC=2") == 0) {
            strcpy(Mchcommand, "01110010");
        } else if (strcmp(Asmcommand, "JC=3") == 0) {
            strcpy(Mchcommand, "01110011");
        } else if (strcmp(Asmcommand, "JC=4") == 0) {
            strcpy(Mchcommand, "01110100");
        } else if (strcmp(Asmcommand, "JC=5") == 0) {
            strcpy(Mchcommand, "01110101");
        } else if (strcmp(Asmcommand, "JC=6") == 0) {
            strcpy(Mchcommand, "01110110");
        } else if (strcmp(Asmcommand, "JC=7") == 0) {
            strcpy(Mchcommand, "01110111");
        }
    } else if (strncmp(Asmcommand, "J=", 2) == 0) {
        if (strcmp(Asmcommand, "J=0") == 0) {
            strcpy(Mchcommand, "10110000");
        } else if (strcmp(Asmcommand, "J=1") == 0) {
            strcpy(Mchcommand, "10110001");
        } else if (strcmp(Asmcommand, "J=2") == 0) {
            strcpy(Mchcommand, "10110010");
        } else if (strcmp(Asmcommand, "J=3") == 0) {
            strcpy(Mchcommand, "10110011");
        } else if (strcmp(Asmcommand, "J=4") == 0) {
            strcpy(Mchcommand, "10110100");
        } else if (strcmp(Asmcommand, "J=5") == 0) {
            strcpy(Mchcommand, "10110101");
        } else if (strcmp(Asmcommand, "J=6") == 0) {
            strcpy(Mchcommand, "10110110");
        } else if (strcmp(Asmcommand, "J=7") == 0) {
            strcpy(Mchcommand, "10110111");
        }
    } else {
        strcpy(Mchcommand, "ERROR INVALID INSTRUCTRION"); 
    }
}

void translateAsm2Bin(char *Asmcommand, char * Mchcommand ){
    int i = 0;
    char temp[20];
    while(*Asmcommand != '\0'){
        if(! isspace(*Asmcommand)){
            temp[i++] = toupper( *Asmcommand);
        }
        Asmcommand++;
    }
    temp[i] = '\0';
    printf("%s", temp);
    lookUpTable(temp, Mchcommand);
    printf(" -> Machine Code: %s\n", Mchcommand);

    
}
