#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void port_scanner();

int main( int argc, char *argv[]){
    if (argc < 4){
        printf("Please enter the server IP address and range of ports to be scanned\n");
        
        printf("USAGE: %s IPv4 First_Port Last_Port\n", argv[0]);

        exit(1);
    }

    char tIP[16] = {0};
    strcpy(tIP , argv[1]); //Copy IP address

    char f_port[6] = {0};
    strcpy(f_port, argv[2]);

    char l_port[6] = {0};
    strcpy(l_port, argv[3]);

    port_scanner(tIP, f_port, l_port);
    return 0;
}

void port_scanner(char tIP[16],char first_port[6], char last_port[6]){
    printf("Initiating Port Scan");
    
}