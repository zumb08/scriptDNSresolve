#include <netinet/in.h>
#include <stdio.h> 
#include <netdb.h>
#include <arpa/inet.h> 


int main (int argc, char *argv[]){

    if(argc <= 1){
        printf("mode of use: ./resolve www.example.com\n");

        return 0; 
    }
    struct hostent *alvo = gethostbyname(argv[1]);

    if (alvo == NULL) {
        printf("Error :/ \n" );
    } else {

    printf("IP: %s\n", inet_ntoa (*((struct in_addr *) alvo-> h_addr)));
    
    }
}