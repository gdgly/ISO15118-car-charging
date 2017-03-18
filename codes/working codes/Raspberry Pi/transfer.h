/*
*	transfer.h for client
*
*	Author		: Jiztom
*	Created on	: 18.02.2017
*	Modified on	: 18.02.2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#ifndef TRANSFER_H_
#define TRANSFER_H_


#define PORT 3490
#define BACKLOG 10



char sendd(int sockfd , char data);
unsigned char receivee(int client_fd,unsigned char *code, unsigned int *value);
int init_tcp();
int accept_client(int socket_fd);

#endif /* TRANSFER_H_*/