#pragma once


#include <limits.h>
#include <netdb.h>
#include <iostream>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <signal.h>
#include <unistd.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <vector>

#include "AddressInfo.h"

using namespace std;




class AddressManager
{

public:
	std::vector<AddressInfo>AddressInfoVector;
	
	void AddItem(char *IP, u_short port);
	void DelItem(char *IP, u_short port);

	
private:
	int FindIP(char *IP, u_short port);
};