#include "main.h"
/**
 * _memcpy - a function that copies the memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *      
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{      
	        int p = 0;
		        int i = n;
			        for (; p < i; p++)
				{
					                dest[p] = src[p];
							                n--;
									        }      
				        return (dest);
}      
