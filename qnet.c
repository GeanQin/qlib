#include "qlib.h"

#include <net/if.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

int qgetip(char *ethname, char *ip, int iplen)
{
    struct sockaddr_in *addr;
    struct ifreq ifr;
    int sockfd;

    if(strlen(ethname) >= IFNAMSIZ)
    {
        printf("device error\n");
        return -1;
    }
    strcpy(ifr.ifr_name,ethname);
    sockfd = socket(AF_INET,SOCK_DGRAM,0);
    if(sockfd == -1)
    {
        printf("socket error !");
        return -1;
    }
    if(ioctl(sockfd,SIOCGIFADDR,&ifr) == -1)
    {
        printf("ioctl error\n");
        close(sockfd);
        return -1;
    }
    addr = (struct sockaddr_in *)&(ifr.ifr_addr);
    strncpy(ip, inet_ntoa(addr->sin_addr), iplen);
    close(sockfd);
    return 0;
}

int qgetmac(char *ethname, char *mac, int maclen)
{
    struct sockaddr_in *addr;
    struct ifreq ifr;
    int sockfd;
    unsigned char hd[6];

    if(strlen(ethname) >= IFNAMSIZ)
    {
        printf("device error\n");
        return -1;
    }
    strcpy(ifr.ifr_name,ethname);
    sockfd = socket(AF_INET,SOCK_DGRAM,0);
    if(sockfd == -1)
    {
        printf("socket error !");
        return -1;
    }
    if(ioctl(sockfd,SIOCGIFHWADDR,&ifr) == -1)
    {
        printf("ioctl error\n");
        close(sockfd);
        return -1;
    }
    memcpy(hd,ifr.ifr_hwaddr.sa_data,sizeof(hd));
    snprintf(mac, maclen, "%02X:%02X:%02X:%02X:%02X:%02X\0", hd[0], hd[1], hd[2], hd[3], hd[4], hd[5]);
    close(sockfd);
    return 0;

}
