/* 求最大值函数，具有可变参数 */
#include <stdarg.h>

int max_int(int n, ...)   /* n must be at least 1 */
{
	va_list ap;
	int i, current, largest;
	
	va_start(ap, n);
	largest  = va_arg(ap, int);
	
	for(i = 1; i < n; i++){
		current = va_arg(ap, int);
		if(current > largest){
			largest = current;
		}
	}
	va_end(ap);
	return largest;
}
