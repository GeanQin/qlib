/* 作者: Gean
 * 地址: https://github.com/GeanQin/qlib
 * 日志:
 * 	2020-04-13: 初次上传
 * 	2020-10-20: 增加失败返回
 */
#include <string.h>
#include <stdio.h>

/* 本函数用于从字符串中查找特定字符
 * @param buf:	用于查找的字符串
 * @param c:	需要查找的字符
 * @param from:	从字符串中第几个字符开始
 * @return
 * 	> 0:	返回从第$from开始第一个$c的位置
 * 	<= 0:	失败
 */
int qfindc(char *buf,char c,int from);

/* 本函数用于从字符串指定首尾位置截取内容
 * @param ret:	用于存放截取的结果
 * @param buf:	用于截取的字符串
 * @param x:	起始位置
 * @param y:	结束位置
 * @return
 * 	= 0:	成功
 * 	= -1:	失败
 *
 */
int qsplits(char *ret,char *buf,int x,int y);
