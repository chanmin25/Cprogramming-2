#pragma once

struct LOGIN {
	char USID;
	char USPW;
};

int login_check(struct LOGIN user[], int size, char* id, char* pw);