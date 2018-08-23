/*
 *读取一行字符串，不会跳过空白字符，在第一个换行符处停止读取
 *str是用来存储输入的数组，n是最大读入字符的数量
 *如果输入行包含多于n个的字符，将忽略多余的字符
 */
int read_line(char str[], int n)
{
	int ch;
	int i = 0;
	while((ch = getchar() != '\n' && ch != EOF)
	{
		if(i < n)
		{
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}