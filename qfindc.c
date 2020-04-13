/* ----------------------------------------
 * 本函数用于从字符串中查找特定字符
 * buf:         用于查找的字符串
 * c:           需要查找的字符
 * from:        从字符串中第几个字符开始
 * ----------------------------------------
 * 作者Gean:
 * 允许所有人使用，使用时请保留此内容.
 * ----------------------------------------
 * 日志:
 * 2020-04-13:  初次上传
 *              Gean<qingean@outlook.com>
 * 
 * 
 * ---------------------------------------
 */

#include<string.h>

int qfindc(char *buf,char c,int from){
	int i,n;
	for(i=from-1;i<strlen(buf);i++){
		if(buf[i]==c){
			n=i+1;
			break;
		}
	}
	return n;
}