//����ü�� ����� ip�ּҸ� ����ϰ� �ϴ� �ڵ�
#include <stdio.h>
union ip_addr
{
	unsigned int abbr;
	unsigned char saddr[4];
} ip;
main() 
{
	ip.abbr = 0x01020304;
	printf ("%d.%d.%d.%d\n", ip.saddr[3], ip.saddr[2], ip.saddr[1], ip.saddr[0]);
 	return 0;
}