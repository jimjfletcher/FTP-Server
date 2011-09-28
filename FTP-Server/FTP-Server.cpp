#include "stdafx.h"
#include <winsock.h>
#pragma comment(lib, "wsock32.lib")

void main(){
	WSAData wsaData;

	if (WSAStartup(MAKEWORD(1,1), &wsaData) != 0) {
		printf("WSAStartup failed.\n");
		exit(1);
	}


}