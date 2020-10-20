# qlib
Library files I wrote by myself.<br>
*qlib.h中有注释如何使用*

## 字符串操作
```
int qfindc(char *buf,char c,int from);			//本函数用于从字符串中查找特定字符
void qsplits(char *ret,char *buf,int x,int y);		//本函数用于从字符串指定首尾位置截取内容
```

## 网络操作
```
int qgetip(char *ethname, char *ip, int iplen);		//本函数用于获取网卡的ip
int qgetmac(char *ethname, char *mac, int maclen);	//本函数用于获取网卡的mac
```
