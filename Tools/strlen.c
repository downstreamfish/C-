int strlen(const char *s)
{
	const char *p = s;
	while(*s)
		s++;
	return s - p;
}

int strlen (const char *s)
{
	int n;
	while(*s++)
		n++;
	return n;
}