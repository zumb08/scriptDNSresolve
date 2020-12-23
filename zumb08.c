#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netdb.h>

int main(int argc, char *argv[])
{
    char *alvo;
    alvo = argv[1];
    struct hostnet *host;
    char *result;
    char txt[50];
    FILE *zum;
    zum = fopen(argv[2], "r");

    if(argc < 2) 
    {
        
        printf("##############################ZUMB08######################################\n");
        printf("############################ use: ./zumb example.com zum.txt #########\n");
        printf("##############################ZUMB08######################################\n");
        
        return 0;
    }

    while(fscanf(zum, "%s", &txt) != EOF);
    {
        result = (char *) strcat(txt, alvo);
        host = gethostbyname(result);
        if(host == NULL)
        {
            continue;
        }

        printf("HOSTS: %s ====> IP: %s \n", result, inet_ntoa(*((struct in_addr *) host -> h_addr)> ))

    }
}