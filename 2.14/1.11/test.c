#include <stdio.h>
#include <assert.h>
//ģ��ʵ��strcpy����>����
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
//ģ��ʵ��strcmp����>�ȽϺ���
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
//		printf("���\n");
//	else if (ret > 0)
//	{
//		printf("����\n");
//	}
//	else
//		printf("С��\n");
//	return 0;
//}
////ģ��ʵ��strcat����>׷�Ӻ���
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	//1.�ҵ�\0
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.����\0׷����ȥ
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
////ģ��ʵ��strstr����>���Һ��� �������ַ����Ƿ�����һ���ַ�����
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
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	*p = 20;//��������ǲ����Ե� 
//	p = &b;//��������ǿ��Ե�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	 int* const p = &a;
//	//cosnt��*���ұ����ε���ָ�����p������ָ�����p�޷��޸ģ�����ָ��pָ������ݿ����޸�
//	p = &b;//��������ǲ��е�
//	*p = 20;//��������ǿ��Ե�
//	return 0;
//
//}
//�ڴ濽��
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
//    my_memcpy(arr1, arr1+2, 20);//memmove����ʵ���ص�����
//	
//	return 0;
//}
//ģ��ʵ��memmove---�������������ص�
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//1.��ǰ����
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
//		//2.�Ӻ���ǰ
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