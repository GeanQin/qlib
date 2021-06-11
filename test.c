#include <qlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
#if 1
	//字符串测试
	char strtest[] = "qwe1qinjian1qwe";
	printf("strtest: %s\n", strtest);
	int n1 = qfindc(strtest, '1', 1);
	if(n1 > 0){
		printf("第一个1在%d个.\n", n1);
	}
	int n2 = qfindc(strtest, '1', n1 + 1);
	if(n1 > 0){
		printf("第二个1在%d个.\n", n2);
	}

	char splits[strlen(strtest)];
	int ret = qsplits(splits, strlen(strtest), strtest, n1 + 1, n2 - 1);
	if(ret == 0){
		printf("splits: %s\n", splits);
	}
#endif

#if 0
	//网络测试
	char ip[16];
	int ipret = qgetip(argv[1], ip, 16);
	if(ipret == 0){
		printf("ip: %s\n", ip);
	}
	char mac[20];
	int macret = qgetmac(argv[1], mac, 20);
	if(macret == 0){
		printf("mac: %s\n", mac);
	}

#endif
}
