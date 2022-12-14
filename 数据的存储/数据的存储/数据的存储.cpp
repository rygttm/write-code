#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
//c语言类型分为1.内置类型 2.自定义类型（构造类型）
//1.char      字符数据类型
//2.short     短整型
//3.int       整型
//4.long      长整型
//5.long long 更长的整型
//6.float     单精度浮点数
//7.double    双精度浮点数
//类型决定了开辟内存空间的大小，和如何看待内存空间的视角
//一：整型家族
//char:   unsigned char   signed char  char在内存中存储时存的是ascll码值，当整形来看
//short:  unsigned short(int)  signed short(int)
//int:    unsigned int    signed int 
//long:   unsigned long(int)  signed long(int)
//二:浮点型家族
//float  
//double
//三：构造类型
//数组类型   int arr[10]  去掉arr就是类型，那么数组类型可以自定义了
//结构体类型 struct       结构体成员发生变化时，结构体类型也发生变化了
//枚举类型   enum         
//联合类型   union        
//四：指针类型
//int*pi
//char*pc
//float*pf
//void*pv
//五：空类型
//void

//整型在内存中的存储
//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00 00 00 14 - 十六进制
//	//0x14 00 00 00 - 内存存储形式（小端存储模式）
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//0xFF FF FF F6 - 十六进制
//	//0xF6 FF FF FF - 内存存储形式（小端存储模式）
//	return 0;//当箭头到return 0 位置时，才可查看变量a和b的内存储存形式
//}          //描述的是字节的顺序，所以FF占一个字节8个比特位

//什么是大端小端？
//大端字节序存储模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//小端字节序存储模式，是指数据的高位保存在内存的高地址中，而数据的低位，保存在内存的低地址中；
//内存条地址从左到右逐渐变高，数据从左到右由高位变到低位

//百度2015年系统工程师笔试题：
//      请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序（10分）
//int check_system()
//{
//	int a = 1;
//	return *(char*)&a;
//	//返回1小端
//	//返回0大端
//}
//int main()
//{
//	//写一段代码，告诉我们当前机器的字节序是什么
//	//算法：char型指针可以访问一个字节，我们只要拿到数据在内存中存储的第一个字节的内容，即可判断
//	//返回1是小端
//	//返回0是大端
//	int ret = check_system();//函数的功能更加干净，只返回1或0
//	if (ret == 1)
//		printf("你的机器是小端字节序存储模式\n");
//	else
//		printf("你的机器是大端字节序存储模式\n");
//		
//	return 0;
//}

//练习1：输出什么？
//int main()
//{
//	char a = -1;
//	//发生截断，截断后结果为11111111，整型提升后为11111111111111111111111111111111
//	signed char b = -1;
//	//发生截断，截断后结果为11111111，整型提升后为11111111111111111111111111111111
//	unsigned char c = -1;
//	//发生截断，截断后结果为11111111，整型提升后为00000000000000000000000001111111
//	printf("a=%d b=%d c=%d", a, b, c);
//	//%d代表输出十进制整数，内存中存储的是补码，打印的是原码
//	return 0;
//}
//练习2.输出什么？
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000-原码
//	//11111111 11111111 11111111 01111111-反码
//	//11111111 11111111 11111111 10000000-补码
//	//截断后a的内存储存形式为10000000
//	//打印的是4个字节所以进行整型提升
//	//为11111111 11111111 11111111 10000000-补码
//	//如果是%d，则需要找到补码的原码，但打印的是%u，所以原反补相同，十进制为4294967168
//	//整型提升
//	//无符号数高位补0
//	//有符号数高位补符号位
//	printf("%u\n", a);内存自动认为a储存的是无符号数
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//有符号的char的范围是-128-->127  共有256种 01111111是127，10000000是-128
//无符号的char的范围是0-->255     共有256种 00000000是0，11111111是255

//练习3:输出什么？
//int main()
//{
//	char a = 128;
//	//a的范围是-128-->127，存不下128，但128就是127+1，而我们知道有符号数中，127+1就是-128
//	//那么a中存放的就是-128的补码结果应该不变
//	printf("%u\n", a);
//	return 0;
//}

//练习4：输出什么？
//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100-补码
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010-补码
//	//加之后的结果为11111111 11111111 11111111 11110110
//	//结果在内存里那一定是补码，最后格式化成为有符号整数
//	printf("%d\n", i + j); 
//	//11111111 11111111 11111111 11110101-减1的结果
//	//10000000 00000000 00000000 00001010-取反的结果，也就是-10
//	return 0;
//}

//练习5：输出什么？
//int main()
//{
//	unsigned int i;//定义无符号整数i
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	    Sleep(100);
//	}
//	//-1转化为无符号整数,最高位被当成有效位那就是全1，全1这个数字将很大
//	return 0;
//}
////所以结果为死循环

//练习6：输出什么？
//int main()
//{
//	char a[1000];//a的范围是-128-->127
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//计算到0结束，但是不包括0，所以答案为255
//	return 0;
//}

//练习7：输出什么？
//int main()
//{
//	unsigned char i = 0;//无符号char型的范围是0-->255  
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	//225+1=0，所以程序会死循环，i<=225恒成立
//	return 0;
//}

//总结：
//在使用无符号数unsigned时，条件如果设定不合适，很容易导致死循环

//二：浮点型在内存中的存储
//int main()
//{
//	double d = 1E10;//1.0*10^10
//	printf("%lf\n", d);
//	return 0;
//}

//练习题：
//int main()
//{
//	//9.0
//	//1001.0 - 二进制表现形式
//	//(-1)^0*1.001*2^3
//	//(-1)^s*M    *2^E
//	//s - 0
//	//M - 1.001
//	//E - 3
//
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	//*pFloat认为n是以浮点数形式存储的
//	//0 00000000 00000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);//0.000000
//	//(-1)^0*0.00000000000000000001001*2^-126
//	//中间的有效数字只打印六位
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0*1.001*2^3
//	//0 10000010 00100000000000000000000
//	printf("num的值为:%d\n", n);
//	//打印的是整数，将上面代码看成补码
//	//高位为0，则为正数，原码就是补码
//	//1091567616
//	printf("*pFloat的值为%f\n", *pFloat);	
//	return 0;
//}
//IEEE规定任意一个二进制浮点数可以表示为下面的形式：
//(-1)^s*M*2^E
//(-1)^s表示符号位，当s=0，浮点数为正数。当s=1，浮点数为负数
//M表示有效数字，大于等于1，小于2
//2^E表示指数位

//IEEE 754规定:对于32位的浮点数，最高的一位是符号位s，接着的8位是指数E，剩下的23位为有效数字M
//IEEE 754规定:对于64位的浮点数，最高的一位是符号位s，接着的11位是指数E，剩下的52位为有效数字M

//IEEE 754规定对有效数字M和指数E，还有一些特别的规定。
//1.因为M总能写成1.xxxxxx的形式，为了节省空间将1舍去，只保存后面的xxxxxx部分，等到读取时，再加上1
//2.首先E为一个无符号整数（unsigned int）,这意味着，如果E为8位，他的取值范围是0到255.
//如果E为11位，他的取值范围是0到2047.但是科学计数法的E是可以出现负数的,所以IEEE规定，存入内存时，
//E的真实值必须加上一个中间值，对于8位的E，这个中间数是127；对于11位的E，这个中间数是1023，
//无论E是正还是负都要加中间值

//0.5
//0.1 - 二进制表示形式，小数点后面的权重为2的负1次方，小数点前面的权重为2的0次方
//(-1)^0*1.0*2^-1
//S - -1
//M - 1.0
//E - -1
//E + 127 = 126 - E真正存到内存的结果为126
//0 01111110 00000000000000000000000将其转化为16进制则，为内存窗口存储形式

//总结，先将十进制的浮点数转换为二进制的浮点数，再把二进制的浮点数转换为科学计数法，根据IEEE的
//SME的规定将其转换后存储到内存中

//然后，指数E从内存中取出还可以分为三种情况：
//1.E不全为0或不全为1：
//     这时浮点数就采用下面的规则表示，即指数E的计算值减去127（或1023），得到真实值，再将有效数字
//M前加上1。	
//2.E全为0：
//     这时，浮点数的指数E等于1-127（或者1-1023）即为真实值，有效数字M不再加上第一位的1，而是还原
//为0.xxxxxx的小数。这样做是为了表示+-0，以及接近于0的很小的数字。
//3.E全为1：
//     这时，如果有效数字全为0，表示+-无穷大








































































































































































































