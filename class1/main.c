#include <stdio.h>

#define URL "http://www.fishc.com"
#define NAME "506宿舍"
#define BOSS "刘治鑫"
#define YEAR  "2017年"
#define MONTH  "9月"
#define DAY "1日"

int main()
{
	printf("%s的爸爸是%s\n", NAME, BOSS);
	printf("%s创建于%s%s%s", NAME, YEAR, MONTH, DAY);
	return 0;
}