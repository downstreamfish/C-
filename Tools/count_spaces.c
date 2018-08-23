/*
 *统计字符串中空格的数量
 *const用来表明函数不会改变数组
 *采用数组作为参数
 */

int count_spaces(const char str[])
{
	int count = 0, i;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			count++;
		}
	}
	return count;
}
/*
 *采用指针作为参数
 */

int count_spaces(const char *s)
{
	int count = 0;
	for(; *s != '\0'; s++)
	{
		if(*s == ' ')
		{
			count++;
		}
	}
	return count;
}