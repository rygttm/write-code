//算数操作符
//+   -   *   /   %
//#define _CRT_SECURE_NO_WARNINGS_
//#include <stdio.h>
//int main()
//{
//	double  a = 5.0 / 2;
//	printf("a=%lf\n", a);
//	return 0;
//}
//一:算数操作符
//+   -   *   /   %
//1.除了%操作符之外，其他的几个操作符可以作用于整数和浮点数
//2.除号两端均为整数，则执行整数除法。若有一个为浮点数，则执行浮点数除法
//3.% 两端不能有浮点数，必须均为整数.返回的是整除之后的余数
//二:移位操作符 （操作数必须为整数）
//int main()
//{
//	int a = -1;
//	// >>是右移操作符
//	//移动的是二进制位
//	//a是整型，4个字节，32个比特位即为00000000000000000000000000010000
//	int b = a >> 1;
//	printf("b=%d", b);//在计算机中，存储到内存的是补码。-1在8字节中表示为11111111，所以右移后结果不变
//	return 0;
//}
//我们的编译器作的是算术右移
//右移操作符分为算术右移和逻辑右移
//算术右移：右边丢弃，左边补原符号位
//逻辑右移：右边丢弃，左边补零
//最高位表示符号，0为正，1为负
//正数的原码，反码，补码都相同
//负数：1.原码转反码：符号位不变，其余位取反。如：-6的原码为10000110，反码为：11111001
//      2.反码转补码：直接补1即可。如：-5的反码为11111010，补码为：11111011
//      3.原码转补码：符号位不变，其余各位取反后补1，也就是反码补1.
//      4.补码转原码；退1后，除符号位各位取反
//反码的由来: 
// 用带符号位的原码进行乘除运算时结果正确,而在加减运算的时候就出现了问题,如: 用十进制表示:1 + (-1) = 0,
//但用二进制表示:00000001 + 10000001 = 10000010, 将结果换算成十进制数也就是 - 2.
//于是就发现问题出现在带符号位的负数身上,为了解决二进制中正负数的加减问题,人们就在原码的基础上发明了反码.
//反码的表示方式是用来处理负数的，符号位置不变，其余位置相反.
//所以1 + (-1) = 0, 用二进制就可以表示为:00000001 + 11111110 = 11111111, 
//在反码的表示形式中,11111111表示-0,所以就可以解决"二进制正负数相加等于0"的问题
//求反码的方法是:原码取反后就是反码,正数不变,负数保留符号位1不变,剩下位按位取反. (1变0,0变1)
//补码的由来:
//虽然反码的出现解决了正负数的加减问题, 但让0这个数字有两种"形态": "0"和"-0", 但这是不合逻辑的,
//只应该有一个0,所以人们就又发明了补码.
//在反码的基础上补一位就得到了补码, 但有失必有得, 需要丢掉最高位.
//如反码中的"-0"表示为11111111, 补上一个1后为100000000, 将最高位的1去掉, 就剩下00000000.
//跟正数的0完美融合, 这样就解决了"0"和"-0"的问题.(人类的智慧是伟大的...)
//下面再通过"正负数相加等于零"的问题来验证一下补码是否可用:
//3 + (-3) = 0, 二进制表示: 00000011 + 11111101("-3"的补码) = 100000000, 
//去掉最高位并将结果换算成十进制: 0, 问题彻底解决.
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	printf("b=%d", b);//左移后的结果为：11111110的原码为10000010即为-2，则输出-2
//	return 0;
//}
//左移操作符：左边丢弃，右边补0.



//向左移，有×2的效果。向右移，有÷2的效果。
//警告：对于移位运算符，不要移动负数位，这个是标准未定义的。编译器不知道你在干嘛
//int num = 10;
//num >> -1;//error


//三：位操作符（操作数必须为整数）
//&：按位与     |:按位或    ^:按位异或
//int main()
//{
	////& -  按(二进制)位与
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	////一定要拿出数据在内存中的补码进行运算
	////00000000000000000000000000000011
	////00000000000000000000000000000101
	////00000000000000000000000000000001
	////对应位的数字，只要有一个0则为0，同时为1则为1
	//printf("c=%d", c);
	//return 0;
//}
//int main()
//{
//	//|  -  按(二进制)位或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("c=%d", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//对应位的数字，只要有一个1则为1，同时为0则为0
//	return 0;
//}
//int main()
//{
//	//^  -  按(二进制)位异或
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("c=%d", c); 
//	//对应的数字，相同为0，相异为1
//	return 0;
//}
//一道变态的面试题：不能创建临时变量（第三个变量），实现两个数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法-可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//异或法-不会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//编写代码实现：求一个整数储存在内存中的二进制中的1的个数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//方法一：int main()//这种算法无法解决num为负数时候的情况
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//方法二：int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//用到了按位与和移位操作符
//		{
//			count++;
//		}
//	}
//	printf("数字1的个数为%d\n", count);
//	//获得num的32个比特位即可
//	//将num&1若最右位结果为1，则num的补码最右位存在一个1，那么下一次只需将num的比特位向右挪动即可，重复操作
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);// 当n& （n - 1）时便可以消去num一个最低位的1,
//	}                         //有几个1便循环几次（也和0没有任何关系了）,
//	                          //当n为0时跳出循环，count的值即为所求的值。       
//	printf("二进制中1的个数=%d\n", count);
//	return 0;
//}

//四：赋值操作符
//	+=
//	-=
//	*=
//	/=
//	%=
//	>>=
//	<<=
//	&=
//	|=
//	^=
//五：单目操作符
//a+b  +为双目操作符，有左操作数和有操作数
//单目操作符：只有一个操作数

//int main()
//{
//	int a = 0;
//	if (!a)//意思是如果a为假则打印hehe
//	{
//		printf("hehe\n");
//	}
//	//!为逻辑反操作符	
//	return 0;
//}
//-负值		+正值		&取地址		sizeof操作数的类型长度（以字节为单位）
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p;//解引用操作符
//	return 0;
//}
//"*"的作用是引用指针指向的变量值，引用其实就是引用该变量的地址，
//“解”就是把该地址对应的东西解开，解出来，就像打开一个包裹一样，那就是该变量的值了，所以称为“解引用”。
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算的是变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4个字节
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));//1个字节
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));// 8个字节（一个指针在32位的计算机上占4个字节，在64位的计算机上占8个字节）
//
//	printf("%d\n", sizeof(arr));//40个字节
//	printf("%d\n", sizeof(int [10]));//数组去掉数组名，则为数组类型
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof的括号中的表达式不会真实进行运算的
//	printf("%d\n", s);                //所以s的值为0
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//   ~按（二进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-对补码进行按位取反
//	//对补码进行求原码结果为（退1然后符号位不变其他位取反得到原码）
//	//10000000000000000000000000000001原码
//	//打印结果应为-1
//	printf("%d\n", ~a);
//	
//	return 0;
//}
// 
//int main()
//{
//	int a = 11;
//	//需求：将二进制从低位数的第三个数字变为1
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//上下两排数字按位或即可满足需求
//
//	//需求：想把原来第三位的数字改成1
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//上下两排数字按位与即可满足需求
//	//00000000000000000000000000000100
//	//将上排数字进行按位取反~即可得到11111111111111111111111111111011
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++
//	printf("%d\n", a);
//	return 0;
//}
//
//()是强制类型转换
//int main()
//{
//	int a = (int)3.14; 
//	printf("%d", a);
//	return 0;
//}

//一道练习题

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));// 8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//  8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));// 40
//	printf("%d\n", sizeof(ch));//  10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//指针就是地址，地址就是指针；
//指针变量里面存放的是:某一类型数据的第一个地址值，也就是地址值占几个字节，指针变量就占几个字节
//一个指针在32位的计算机上，占4个字节；
//一个指针在64位的计算机上，占8个字节。

//六：关系操作符
//>	>=	<	<=  !=	== （注意不要将==和=搞混）

//七：逻辑操作符
//&&逻辑与		||逻辑或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	//&&两个同时为真，则输出真1   ||有一个为真，则输出真1，同时为假，则输出假0
//
//	return 0;
//}
//
//360笔试题：
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i=a++||++b||d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d ); 
//	return 0;
//}
//&&逻辑与:
//简单来说如果第一个数是真值，就返回第二个数，即判断第二个数是真是假，
//如果第一个数是假值，那没得说就是兄弟你了（第一个数：假），后面的就不用看了。
//||逻辑或
//总之如果第一个数是真值，就不用判断第二个数了，直接返回第一个数；
//如果第一个数为假，那就得看看第二个数是真是假了，即返回第二个数。
//八：条件操作符(三目操作符)
//exp1?exp2:exp3
// 
//将其转化为条件表达式
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3; 
//	b = (a > 5 ? 3 : -3);//如果a>5成立，3为整个表达式的结果，反之，-3为整个表达式的结果
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	//求出a和b之间的较大值
//	return 0;
//}
//九：逗号表达式
//逗号表达式，就是用逗号隔开的多个表达式
//逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果
//十：下标引用，函数调用，结构成员
//1.[]下标引用操作符
//操作数：一个数组名+一个索引值
//2.()函数调用操作符
//操作数：函数名+传递参数
//3.访问一个结构的成员
//.结构体.成员名
//->结构体指针->成员名

//学生
//创建一个结构体类型-struct student
//struct student
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct student这个类型创建了一个学生对象s1，并初始化
//	struct student s1 = { "张三",20,"2019010305"};
//	struct student* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id); //结构体指针->成员名
//	//上下作用效果相同
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	//上下作用效果相同
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}



//十一:表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定的
//一:隐式类型转换
// 1.整型提升
//c的整型算术运算总是至少以缺省整型类型的精度来进行的，为了获得这个精度，表达式中的字符和短整型操作数在
//使用前被转换为普通整型，这种转换被称为整型提升。
//实例1：整型提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//32个比特位转化为8个比特位发生截断00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	//a和b如何相加(在整型运算时，先要进行整型提升，然后相加)
//	// 00000011
//	// 01111111
//	//提升后：
//	//00000000000000000000000000000011	
//	//00000000000000000000000001111111
//	//进行相加
//	//00000000000000000000000010000010
//	char c = a + b;
//	//因为运算结果是整型，而储存在c中需要是char类型，所以需要再进行截断
//	//10000010现在是char类型8个比特位
//	//但打印结果为整型，需要进行整型提升
//	//11111111111111111111111110000010-补码
//	//输出的是十进制，需要将补码转化为原码
//	//10000000000000000000000001111110
//	//结果为-126
//	printf("%d\n", c);
//
//	return 0;
//}
////整型提升:
////a.如果是无符号数，则高位直接补0；
////b.如果是有符号数，则高位全补符号位。

//实例二:
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int a = 0xb60000;
//	if (a == 0xb6)//10110110
//		printf("a");
//	if (b == 0xb600)//1011011000000000
//		printf("b");
//	if (c == 0xb60000)//101101100000000000000000000000
//		printf("c");
//	return 0;
//}
//==也是一种运算，那么ab就要进行整型提升
//实例三:
//int main()
//{
//	char c = 1;
//	//00000000000000000000000000000001
//	//00000001
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//c只要参与表达式运算，就会发生整型提升，所以是4个字节
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//c语言中的%u是输入输出格式说明符，表示按unsigned int格式输入或输出数据。(无符号10进制整数)

//2.算术转换
//long double 
//double 
//float
//unsigned long int
//long int 
//unsigned int 
//int 
//两个不相同的类型数据进行运算时，将列表中排名较低的转换为另一排名较高的
//二:操作符的属性
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序
//三:一些问题表达式
//代码一：a*b+c*d+e*f  第三个*与第一个+的运算顺序是不确定的
//代码二：c + --c      前面的c不知道是自减后的还是自减前的
//代码三：三个fun函数的调用顺序不确定
//int fun()
//{
//	static int count = 1;//重新调用时，不再进行初始化，保留上一次运算结果的值
//	return ++count;
//}
//int main()
//{
//	int answer = 0;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//代码四：
int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}
//linux系统下结果为10
//依靠操作符的优先级和结合性无法确定第一个+和第三个前置++的运算顺序

















































