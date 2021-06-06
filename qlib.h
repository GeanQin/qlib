/* 作者: Gean
 * 地址: https://github.com/GeanQin/qlib
 * 日志:
 * 	2020-04-13:	初次上传
 * 	2020-10-20:	增加失败返回
 * 	2020-10-20:	增加网络操作
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef enum{
	QLIB_ERR_NONE,
    QLIB_ERR_ARRAY_IS_TOO_SHORT,
    QlIB_ERR_CANNOT_QSPLITS
} QLIB_ERR_TYPE;

/* 本函数用于从字符串中查找特定字符
 * @param buf:		用于查找的字符串
 * @param c:		需要查找的字符
 * @param from:		从字符串中第几个字符开始
 * @return
 * 	> 0:		    返回从第$from开始第一个$c的位置
 * 	<= 0:		    失败
 */
int qfindc(char *buf, char c, int from);

/* 本函数用于从字符串指定首尾位置截取内容
 * @param ret:		    用于存放截取的结果
 * @param retlen:	    $ret的长度
 * @param buf:		    用于截取的字符串
 * @param x:		    起始位置
 * @param y:		    结束位置
 * @return
 * 	= QLIB_ERR_NONE:    成功
 * 	> QLIB_ERR_NONE:    失败
 */
QLIB_ERR_TYPE qsplits(char *ret, int retlen, char *buf, int x, int y);

/* 本函数用于获取网卡的ip
 * @param ethname:	网卡名字
 * @param ip:		用于存放ip
 * @param iplen:	$ip的长度
 * @return
 *      = 0:		成功
 *      = -1:		失败
 */
int qgetip(char *ethname, char *ip, int iplen);

/* 本函数用于获取网卡的mac
 * @param ethname:	网卡名字
 * @param mac:		用于存放mac
 * @param maclen:	$mac的长度
 * @return
 *      = 0:		成功
 *      = -1:		失败
 */
int qgetmac(char *ethname, char *mac, int maclen);
