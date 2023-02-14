#include <stdio.h>
#include <assert.h>
//模拟实现strcpy——>拷贝
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20];
//	char arr2[] = "hello,world";
//    char *ch=my_strcpy(arr1, arr2);
//	printf("%s", ch);
//	return 0;
//}
//模拟实现strcmp——>比较函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//		while (*str1&&str2)
//		{
//			if (*str1 == *str2)
//			{
//				if (str1 == '\0')
//				{
//					return 0;
//				}
//				str1++;
//				str2++;
//			}
//			else
//				return *str1 - *str2;
//
//		}
//
//}
//int main()
//{
//	char arr1[] = "ab";
//	char arr2[] = "ab";
//    int ret=my_strcmp(arr1, arr2);
//	if (ret == 0)
//		printf("相等\n");
//	else if (ret > 0)
//	{
//		printf("大于\n");
//	}
//	else
//		printf("小于\n");
//	return 0;
//}
////模拟实现strcat——>追加函数
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	//1.找到\0
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.覆盖\0追加上去
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char *ret=my_strcat(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
////模拟实现strstr——>查找函数 ，查找字符串是否在另一个字符串中
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	 const char* cp = str1;
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (s1!='\0'&&s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//
//	
//}
//int main()
//{
//	char arr1[] = "aaccbbd";
//	char arr2[] = "cb";
//	char *ret=my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	*p = 20;//这个操作是不可以的 
//	p = &b;//这个操作是可以的
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	 int* const p = &a;
//	//cosnt在*的右边修饰的是指针变量p，所以指针变量p无法修改，但是指针p指向的内容可以修改
//	p = &b;//这个操作是不行的
//	*p = 20;//这个操作是可以的
//	return 0;
//
//}
//内存拷贝
//#include <string.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void * src,size_t num)
// {
//	void*ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[20];
//    my_memcpy(arr1, arr1+2, 20);//memmove可以实现重叠拷贝
//	
//	return 0;
//}
//模拟实现memmove---拷贝函数可以重叠
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//1.从前往后
//	
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//2.从后往前
//		while (num--)
//		{
//			*((char*)dest + num) =*((char*)src + num);
//		}
//		
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10]={0};
//	my_memmove(arr1+2, arr1, 20);//1 2 1 2 3 4 5 8 9
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	printf("%p\n", arr);
//    printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	char* pa = &ch;
//	printf("%c", *pa);
//	return 0;
//}
//int main()
//{
//	char* pa = "hello world";
//	printf("%p", pa);
//	return 0;
//}
int main()
{
    char str1[] = "hello world.";
    char str2[] = "hello world.";
    const char* str3 = "hello world.";
    const char* str4 = "hello world.";
    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}