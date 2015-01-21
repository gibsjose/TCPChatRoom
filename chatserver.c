
#include <sys/socket.h> //Socket features
#include <netinet/in.h> //Internet-specific features of sockets
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    // Open connection socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);




    return 0;
}
