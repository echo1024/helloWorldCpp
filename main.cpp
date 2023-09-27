#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int HW() {
    cout << "Hello World" << endl;
    system("pause");
    return 0;
}

int BL() {
    //变量的定义
    //语法：数据类型 变量名= 初始值
    int a = 10;
    cout << "a=" << a << endl;
    system("pause");
    return 0;
}

//C++定义常量两种方式
//
//#define 宏常量： #define 常量名 常量值
//
//== 通常在文件上方定义 == ，表示一个常量
//const修饰的变量 const 数据类型 常量名 = 常量值
//
//== 通常在变量定义前加关键字const == ，修饰该变量为常量，不可修改

#define day 7

int hcl() {
    cout << "一周共有" << day << "天" << endl;
    //宏常量不可以修改
    //const 修饰变量
    const int month = 12;
    cout << "一年总共有" << month << "个月份" << endl;
    system("pause");
    return 0;
}

//**作用：** 利用sizeof关键字可以 == 统计数据类型所占内存大小 ==
//
//语法： sizeof(数据类型 / 变量)

int MainSizeof() {
    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
    cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;
    system("pause");
    return 0;
}
//float	4字节	7位有效数字
//double	8字节	15～16位有效数字

int Floatmain() {
    float f1 = 3.14f;
    double d1 = 3.14;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << "float  sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;
    //科学计数法
    float f2 = 3e2;//3*10^2
    cout << "f2 =" << f2 << endl;
    float f3 = 3e-2;//3* 0.1^2
    cout << "f3 = " << f3 << endl;
    system("pause");
    return 0;
}

//**作用：** 字符型变量用于显示单个字符
//
//语法：char ch = 'a';
//
//注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号
//
//注意2：单引号内只能有一个字符，

int charMain() {
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;
    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符
    cout << (int) ch << endl; //查看字符a对应的ASCII码
    ch = 97;//可以直接用ASCII给字符型变量赋值
    cout << ch << endl;
    system("pause");
    return 0;
}

int main__() {
    cout << "\\" << endl;
    cout << "\tHello" << endl;
    cout << "\n" << endl;
    system("pause");
    return 0;
}

int strMain() {
    string str = "hello world";
    cout << str << endl;
    system("pause");
    return 0;
}

int mainBool() {
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;
    cout << "size of bool" << sizeof(bool) << endl;
    system("pause");
    return 0;
}

//语法： cin >> 变量
int mainCin() {
    int a = 0;
    cout << "请输入整型变量：" << endl;
    cin >> a;
    cout << a << endl;
    double d = 0;
    cout << "请输入浮点型变量：" << endl;
    cin >> d;
    cout << d << endl;

    //字符型输入
    char ch = 0;
    cout << "请输入字符型变量：" << endl;
    cin >> ch;
    cout << ch << endl;

    //字符串型输入
    string str;
    cout << "请输入字符串型变量：" << endl;
    cin >> str;
    cout << str << endl;

    //布尔类型输入
    bool flag = true;
    cout << "请输入布尔型变量：" << endl;
    cin >> flag;
    cout << flag << endl;
    system("pause");
    return EXIT_SUCCESS;
}

int _main() {
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;  //两个整数相除结果依然是整数
    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d2 / d1 << endl;

    system("pause");

    return 0;
}

//取模
int main1() {

    int a1 = 10;
    int b1 = 3;

    cout << 10 % 3 << endl;

    int a2 = 10;
    int b2 = 20;

    cout << a2 % b2 << endl;

    int a3 = 10;
    int b3 = 0;

    //cout << a3 % b3 << endl; //取模运算时，除数也不能为0

    //两个小数不可以取模
    double d1 = 3.14;
    double d2 = 1.1;

    //cout << d1 % d2 << endl;

    system("pause");

    return 0;
}

int main2() {
    int a = 1;
    a++;
    cout << a << endl;
    int b = 1;
    ++b;
    cout << b << endl;
    //区别
//前置递增先对变量进行++，再计算表达式
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << b2 << endl;

    //后置递增先计算表达式，后对变量进行++
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << b3 << endl;

    system("pause");

    return 0;
}

int main3() {

    //赋值运算符

    // =
    int a = 10;
    a = 100;
    cout << "a = " << a << endl;

    // +=
    a = 10;
    a += 2; // a = a + 2;
    cout << "a = " << a << endl;

    // -=
    a = 10;
    a -= 2; // a = a - 2
    cout << "a = " << a << endl;

    // *=
    a = 10;
    a *= 2; // a = a * 2
    cout << "a = " << a << endl;

    // /=
    a = 10;
    a /= 2;  // a = a / 2;
    cout << "a = " << a << endl;

    // %=
    a = 10;
    a %= 2;  // a = a % 2;
    cout << "a = " << a << endl;

    system("pause");

    return 0;
}

int main4() {

    int a = 10;
    int b = 20;

    cout << (a == b) << endl; // 0

    cout << (a != b) << endl; // 1

    cout << (a > b) << endl; // 0

    cout << (a < b) << endl; // 1

    cout << (a >= b) << endl; // 0

    cout << (a <= b) << endl; // 1

    system("pause");

    return 0;
}

//逻辑运算符  --- 非
int main5() {

    int a = 10;

    cout << !a << endl; // 0

    cout << !!a << endl; // 1

    system("pause");

    return 0;
}

//逻辑运算符  --- 或
int main6() {

    int a = 10;
    int b = 10;

    cout << (a || b) << endl;// 1

    a = 10;
    b = 0;

    cout << (a || b) << endl;// 1

    a = 0;
    b = 0;

    cout << (a || b) << endl;// 0

    system("pause");

    return 0;
}

//流程结构

int mainIf() {
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;
    cout << "您输入的分数为： " << score << endl;
    if (score > 600) {
        cout << "hahahaha" << endl;
    }
    system("pause");
    return 0;
}

int mainIfElse() {
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;
    cout << "您输入的分数为： " << score << endl;
    if (score > 600) {
        cout << "hahahaha" << endl;
    } else {
        cout << "55555" << endl;
    }
    system("pause");
    return 0;
}

int mainIfElseIfElse() {

    int score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600) {
        cout << "我考上了一本大学" << endl;
        if (score > 700) {
            cout << "我考上了北大" << endl;
        } else if (score > 650) {
            cout << "我考上了清华" << endl;
        } else {
            cout << "我考上了人大" << endl;
        }

    } else if (score > 500) {
        cout << "我考上了二本大学" << endl;
    } else if (score > 400) {
        cout << "我考上了三本大学" << endl;
    } else {
        cout << "我未考上本科" << endl;
    }

    system("pause");

    return 0;
}


int mainPig() {
    int pigA = 0;
    int pigB = 0;
    int pigC = 0;
    cout << "请输入pigA重量" << endl;
    cin >> pigA;
    cout << "请输入pigB重量" << endl;
    cin >> pigB;
    cout << "请输入pigC重量" << endl;
    cin >> pigC;
    if (pigA > pigB) {
        if (pigA > pigC) {
            cout << "pigA重" << endl;
        } else if (pigA < pigC) {
            cout << "pigC重" << endl;
        }
    } else {
        if (pigB > pigC) {
            cout << "pigB重" << endl;
        } else if (pigB < pigC) {
            cout << "pigC重" << endl;
        } else {
            cout << "pigB重" << endl;
        }
    }
    system("pause");
    return 0;
}

//通过三目运算符实现简单的判断
//语法：表达式1 ? 表达式2 ：表达式3
//如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
//
//如果表达式1的值为假，执行表达式3，并返回表达式3的结果。

int mainTernaryOperator() {

    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //C++中三目运算符返回的是变量,可以继续赋值

    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    system("pause");

    return 0;
}

//switch(表达式)
//{
//case 结果1：执行语句;break;
//
//case 结果2：执行语句;break;

//default:执行语句;break;
//
//}
//
//注意1：switch语句中表达式类型只能是整型或者字符型
//注意2：case里如果没有break，那么程序会一直向下执行
//总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

int mainSwitch() {
    int a = 0;
    cout << "输入" << endl;
    cin >> a;
    switch (a) {
        case 0:
            cout << a << endl;
            break;
        case 1:
            cout << a << endl;
            break;
        case 2:
            cout << a << endl;
            break;
        default:
            cout << "结束" << endl;
    }
    ::system("pause");
    return 0;
}

int mainWhile() {
    int a = 0;
    while (a < 100) {
        cout << "a=" << a << endl;
        a++;
    }
    ::system("pause");
    return 0;
}

//系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。

int mainGuess() {
    ::srand(::time(0));
    int randomNumber = ::rand() % 100 + 1;
    int a = 0;
    cout << "请输入猜测数字：" << endl;
    cin >> a;
    while (randomNumber != a) {
        if (a > randomNumber) {
            cout << "大了" << endl;
            cin >> a;
        } else if (a < randomNumber) {
            cout << "小了" << endl;
            cin >> a;
        }
    }
    cout << "猜对了数值为：" << a << endl;
    system("pause");
    return 0;
}

//do{ 循环语句 } while(循环条件);
//与while的区别在于==do...while会先执行一次循环语句==，再判断循环条件
int mainNarcissistic() {
    int a = 100;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    do {
        e = a;
        b = pow(e % 10, 3);
        e /= 10;
        c = pow(e % 10, 3);
        e /= 10;
        d = pow(e % 10, 3);
        if (b + c + d == a) {
            cout << a << "是水仙花数" << endl;
        }
        a++;
    } while (a < 10000);
    ::system("pause");
    return 0;
}

int mainKnockTable() {
    for (int i = 0; i <= 100; i++) {
        if (i % 7 == 0) {
            cout << "敲桌子" << endl;
        } else {
            cout << i << endl;
        }
    }
    ::system("pause");
    return 0;
}

int mainPrint() {
    for (int i = 1; i < 11; i++) {
        for (int a = 1; a < 11; a++) {
            cout << "*" << "";
        }
        cout << endl;
    }
    ::system("pause");
    return 0;
}

int main99() {
    for (int i = 1; i < 10; i++) {
        for (int a = 1; a < 10; a++) {
            if (a <= i) {
                cout << a << "*" << i << "=" << i * a << " ";
            }
        }
        cout << "\n" << endl;
    }
    ::system("pause");
    return 0;
}

int mainList() {
    int score[] = {112, 2, 3, 4, 53, 6, 7, 82993, 9, 10, 11, 12, 13, 14};
    cout << sizeof(score) / sizeof(score[0]) << endl;
//    获取静态数组长度；
    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
        cout << "print:" << score[i] << endl;
    }
    ::system("pause");
    return 0;
}

int mainAddress() {

    //数组名用途
    //1、可以获取整个数组占用内存空间大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *address = arr; // 或者 &arr[0]
    int *address2 = &arr[1];
    cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
    cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
    cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2、可以通过数组名获取到数组首地址
    cout << "数组首地址为： " << address << endl;
    cout << "数组第二个元素地址为： " << address2 << endl;

    //arr = 100; 错误，数组名是常量，因此不可以赋值

    system("pause");

    return 0;
}

int pigMain() {
    int pigList[5] = {300, 350, 200, 410, 250};
    int pig = 0;
    for (int i = 0; i < sizeof(pigList) / sizeof(pigList[0]); i++) {
        if (pigList[i] >= pig) {
            pig = pigList[i];
        } else {
            continue;
        }
    }
    cout << "最重猪的重量是：" << pig << endl;
    ::system("pause");
    return 0;
}

int mainReversed() {
//    逆序
    int numbList[] = {1, 3, 2, 5, 4};
    int endNum[sizeof(numbList) / sizeof(numbList[0])];
    int a = 0;
    for (int i = sizeof(numbList) / sizeof(numbList[0]) - 1; i >= 0; i--) {
        endNum[a] = numbList[i];
        cout << "逆序numbList:" << endNum[a] << endl;
        a++;
    }
    ::system("pause");
    return 0;
}

int mainBubbleSort() {
//冒泡
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }

    system("pause");

    return 0;
}

//二维数组
//数据类型  数组名[ 行数 ][ 列数 ];
//数据类型  数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
//数据类型  数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
//数据类型  数组名[  ][ 列数 ] = { 数据1，数据2，数据3，数据4};

int mainDoubleDimensionalArray() {

    //方式1
    //数组类型 数组名 [行数][列数]
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //方式2
    //数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
    int arr2[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };

    //方式3
    //数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};

    //方式4
    //数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
    int arr4[][3] = {1, 2, 3, 4, 5, 6};

    system("pause");

    return 0;
}

int mainDoubleDimensionalArray1() {
    //二维数组数组名
    int arr[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };
    cout << "二维数组大小： " << sizeof(arr) << endl;
    cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
    cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;
    cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    //地址
    cout << "二维数组首地址：" << arr << endl;
    cout << "二维数组第一行地址：" << arr[0] << endl;
    cout << "二维数组第二行地址：" << arr[1] << endl;
    cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
    cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;
    system("pause");
    return 0;
}

int mainScore() {
//    分别输出三个同学总成绩
    int score[3][3] = {
            {100, 100, 100},
            {90,  50,  100},
            {60,  70,  80},
    };
    string names[3] = {"张三", "李四", "王五"};

    for (int i = 0; i < 3; i++) {
        int num = 0;
        for (int x = 0; x < 3; x++) {
            num += score[i][x];
        }
        cout << names[i] << "的总分：" << num << endl;
        num = 0;
    }
    ::system("pause");
    return 0;
}

//函数创建调用
int add(int num1, int num2) {
    return num1 + num2;
}

int mainDemo() {
    int a = 100;
    int b = 101;
    int sum = add(a, b);
    cout << sum << endl;
    ::system("pause");
    return 0;

}

#include "swap.h"

//调用另外的cpp文件需要先建立.h头文件
int mainSw() {
    int a = 100;
    int b = 200;
    swap(a,b);
    ::system("pause");
    return 0;
}

//指针相关

int mainPointer(){
    int a = 10;
    int * p;
    p = &a;//指向a的地址
    cout << &a << endl; //打印数据a的地址
    cout << p << endl;  //打印指针变量p
    //通过*操作指针变量指向的内存
    cout << "*p = " << *p << endl;
    system("pause");
    return 0;
}
//普通变量存放的是数据,指针变量存放的是地址
//指针变量可以通过" * "操作符，操作指针变量指向的内存空间，这个过程称为解引用
//总结1： 我们可以通过 & 符号 获取变量的地址
//总结2：利用指针可以记录地址
//总结3：对指针变量解引用，可以操作指针指向的内存