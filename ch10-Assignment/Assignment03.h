#pragma once

struct LOGIN {
	char USID[21];
	char USPW[12];
};

int login_check(struct LOGIN user[], int size, char* id, char* pw);