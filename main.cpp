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
    //�����Ķ���
    //�﷨���������� ������= ��ʼֵ
    int a = 10;
    cout << "a=" << a << endl;
    system("pause");
    return 0;
}

//C++���峣�����ַ�ʽ
//
//#define �곣���� #define ������ ����ֵ
//
//== ͨ�����ļ��Ϸ����� == ����ʾһ������
//const���εı��� const �������� ������ = ����ֵ
//
//== ͨ���ڱ�������ǰ�ӹؼ���const == �����θñ���Ϊ�����������޸�

#define day 7

int hcl() {
    cout << "һ�ܹ���" << day << "��" << endl;
    //�곣���������޸�
    //const ���α���
    const int month = 12;
    cout << "һ���ܹ���" << month << "���·�" << endl;
    system("pause");
    return 0;
}

//**���ã�** ����sizeof�ؼ��ֿ��� == ͳ������������ռ�ڴ��С ==
//
//�﷨�� sizeof(�������� / ����)

int MainSizeof() {
    cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;
    cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;
    cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;
    cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;
    system("pause");
    return 0;
}
//float	4�ֽ�	7λ��Ч����
//double	8�ֽ�	15��16λ��Ч����

int Floatmain() {
    float f1 = 3.14f;
    double d1 = 3.14;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << "float  sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;
    //��ѧ������
    float f2 = 3e2;//3*10^2
    cout << "f2 =" << f2 << endl;
    float f3 = 3e-2;//3* 0.1^2
    cout << "f3 = " << f3 << endl;
    system("pause");
    return 0;
}

//**���ã�** �ַ��ͱ���������ʾ�����ַ�
//
//�﷨��char ch = 'a';
//
//ע��1������ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫����
//
//ע��2����������ֻ����һ���ַ���

int charMain() {
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;
    //ch = "abcde"; //���󣬲�������˫����
    //ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�
    cout << (int) ch << endl; //�鿴�ַ�a��Ӧ��ASCII��
    ch = 97;//����ֱ����ASCII���ַ��ͱ�����ֵ
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

//�﷨�� cin >> ����
int mainCin() {
    int a = 0;
    cout << "���������ͱ�����" << endl;
    cin >> a;
    cout << a << endl;
    double d = 0;
    cout << "�����븡���ͱ�����" << endl;
    cin >> d;
    cout << d << endl;

    //�ַ�������
    char ch = 0;
    cout << "�������ַ��ͱ�����" << endl;
    cin >> ch;
    cout << ch << endl;

    //�ַ���������
    string str;
    cout << "�������ַ����ͱ�����" << endl;
    cin >> str;
    cout << str << endl;

    //������������
    bool flag = true;
    cout << "�����벼���ͱ�����" << endl;
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
    cout << a1 / b1 << endl;  //����������������Ȼ������
    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d2 / d1 << endl;

    system("pause");

    return 0;
}

//ȡģ
int main1() {

    int a1 = 10;
    int b1 = 3;

    cout << 10 % 3 << endl;

    int a2 = 10;
    int b2 = 20;

    cout << a2 % b2 << endl;

    int a3 = 10;
    int b3 = 0;

    //cout << a3 % b3 << endl; //ȡģ����ʱ������Ҳ����Ϊ0

    //����С��������ȡģ
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
    //����
//ǰ�õ����ȶԱ�������++���ټ�����ʽ
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << b2 << endl;

    //���õ����ȼ�����ʽ����Ա�������++
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << b3 << endl;

    system("pause");

    return 0;
}

int main3() {

    //��ֵ�����

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

//�߼������  --- ��
int main5() {

    int a = 10;

    cout << !a << endl; // 0

    cout << !!a << endl; // 1

    system("pause");

    return 0;
}

//�߼������  --- ��
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

//���̽ṹ

int mainIf() {
    int score = 0;
    cout << "������һ��������" << endl;
    cin >> score;
    cout << "������ķ���Ϊ�� " << score << endl;
    if (score > 600) {
        cout << "hahahaha" << endl;
    }
    system("pause");
    return 0;
}

int mainIfElse() {
    int score = 0;
    cout << "������һ��������" << endl;
    cin >> score;
    cout << "������ķ���Ϊ�� " << score << endl;
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

    cout << "�����뿼�Է�����" << endl;

    cin >> score;

    if (score > 600) {
        cout << "�ҿ�����һ����ѧ" << endl;
        if (score > 700) {
            cout << "�ҿ����˱���" << endl;
        } else if (score > 650) {
            cout << "�ҿ������廪" << endl;
        } else {
            cout << "�ҿ������˴�" << endl;
        }

    } else if (score > 500) {
        cout << "�ҿ����˶�����ѧ" << endl;
    } else if (score > 400) {
        cout << "�ҿ�����������ѧ" << endl;
    } else {
        cout << "��δ���ϱ���" << endl;
    }

    system("pause");

    return 0;
}


int mainPig() {
    int pigA = 0;
    int pigB = 0;
    int pigC = 0;
    cout << "������pigA����" << endl;
    cin >> pigA;
    cout << "������pigB����" << endl;
    cin >> pigB;
    cout << "������pigC����" << endl;
    cin >> pigC;
    if (pigA > pigB) {
        if (pigA > pigC) {
            cout << "pigA��" << endl;
        } else if (pigA < pigC) {
            cout << "pigC��" << endl;
        }
    } else {
        if (pigB > pigC) {
            cout << "pigB��" << endl;
        } else if (pigB < pigC) {
            cout << "pigC��" << endl;
        } else {
            cout << "pigB��" << endl;
        }
    }
    system("pause");
    return 0;
}

//ͨ����Ŀ�����ʵ�ּ򵥵��ж�
//�﷨�����ʽ1 ? ���ʽ2 �����ʽ3
//������ʽ1��ֵΪ�棬ִ�б��ʽ2�������ر��ʽ2�Ľ����
//
//������ʽ1��ֵΪ�٣�ִ�б��ʽ3�������ر��ʽ3�Ľ����

int mainTernaryOperator() {

    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //C++����Ŀ��������ص��Ǳ���,���Լ�����ֵ

    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    system("pause");

    return 0;
}

//switch(���ʽ)
//{
//case ���1��ִ�����;break;
//
//case ���2��ִ�����;break;

//default:ִ�����;break;
//
//}
//
//ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
//ע��2��case�����û��break����ô�����һֱ����ִ��
//�ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����

int mainSwitch() {
    int a = 0;
    cout << "����" << endl;
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
            cout << "����" << endl;
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

//ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��

int mainGuess() {
    ::srand(::time(0));
    int randomNumber = ::rand() % 100 + 1;
    int a = 0;
    cout << "������²����֣�" << endl;
    cin >> a;
    while (randomNumber != a) {
        if (a > randomNumber) {
            cout << "����" << endl;
            cin >> a;
        } else if (a < randomNumber) {
            cout << "С��" << endl;
            cin >> a;
        }
    }
    cout << "�¶�����ֵΪ��" << a << endl;
    system("pause");
    return 0;
}

//do{ ѭ����� } while(ѭ������);
//��while����������==do...while����ִ��һ��ѭ�����==�����ж�ѭ������
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
            cout << a << "��ˮ�ɻ���" << endl;
        }
        a++;
    } while (a < 10000);
    ::system("pause");
    return 0;
}

int mainKnockTable() {
    for (int i = 0; i <= 100; i++) {
        if (i % 7 == 0) {
            cout << "������" << endl;
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
//    ��ȡ��̬���鳤�ȣ�
    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
        cout << "print:" << score[i] << endl;
    }
    ::system("pause");
    return 0;
}

int mainAddress() {

    //��������;
    //1�����Ի�ȡ��������ռ���ڴ�ռ��С
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *address = arr; // ���� &arr[0]
    int *address2 = &arr[1];
    cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
    cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
    cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2������ͨ����������ȡ�������׵�ַ
    cout << "�����׵�ַΪ�� " << address << endl;
    cout << "����ڶ���Ԫ�ص�ַΪ�� " << address2 << endl;

    //arr = 100; �����������ǳ�������˲����Ը�ֵ

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
    cout << "������������ǣ�" << pig << endl;
    ::system("pause");
    return 0;
}

int mainReversed() {
//    ����
    int numbList[] = {1, 3, 2, 5, 4};
    int endNum[sizeof(numbList) / sizeof(numbList[0])];
    int a = 0;
    for (int i = sizeof(numbList) / sizeof(numbList[0]) - 1; i >= 0; i--) {
        endNum[a] = numbList[i];
        cout << "����numbList:" << endNum[a] << endl;
        a++;
    }
    ::system("pause");
    return 0;
}

int mainBubbleSort() {
//ð��
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

//��ά����
//��������  ������[ ���� ][ ���� ];
//��������  ������[ ���� ][ ���� ] = { {����1������2 } ��{����3������4 } };
//��������  ������[ ���� ][ ���� ] = { ����1������2������3������4};
//��������  ������[  ][ ���� ] = { ����1������2������3������4};

int mainDoubleDimensionalArray() {

    //��ʽ1
    //�������� ������ [����][����]
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

    //��ʽ2
    //�������� ������[����][����] = { {����1������2 } ��{����3������4 } };
    int arr2[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };

    //��ʽ3
    //�������� ������[����][����] = { ����1������2 ,����3������4  };
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};

    //��ʽ4
    //�������� ������[][����] = { ����1������2 ,����3������4  };
    int arr4[][3] = {1, 2, 3, 4, 5, 6};

    system("pause");

    return 0;
}

int mainDoubleDimensionalArray1() {
    //��ά����������
    int arr[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };
    cout << "��ά�����С�� " << sizeof(arr) << endl;
    cout << "��ά����һ�д�С�� " << sizeof(arr[0]) << endl;
    cout << "��ά����Ԫ�ش�С�� " << sizeof(arr[0][0]) << endl;
    cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    //��ַ
    cout << "��ά�����׵�ַ��" << arr << endl;
    cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
    cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;
    cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
    cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;
    system("pause");
    return 0;
}

int mainScore() {
//    �ֱ��������ͬѧ�ܳɼ�
    int score[3][3] = {
            {100, 100, 100},
            {90,  50,  100},
            {60,  70,  80},
    };
    string names[3] = {"����", "����", "����"};

    for (int i = 0; i < 3; i++) {
        int num = 0;
        for (int x = 0; x < 3; x++) {
            num += score[i][x];
        }
        cout << names[i] << "���ܷ֣�" << num << endl;
        num = 0;
    }
    ::system("pause");
    return 0;
}

//������������
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

//���������cpp�ļ���Ҫ�Ƚ���.hͷ�ļ�
int mainSw() {
    int a = 100;
    int b = 200;
    swap(a,b);
    ::system("pause");
    return 0;
}

//ָ�����

int mainPointer(){
    int a = 10;
    int * p;
    p = &a;//ָ��a�ĵ�ַ
    cout << &a << endl; //��ӡ����a�ĵ�ַ
    cout << p << endl;  //��ӡָ�����p
    //ͨ��*����ָ�����ָ����ڴ�
    cout << "*p = " << *p << endl;
    system("pause");
    return 0;
}
//��ͨ������ŵ�������,ָ�������ŵ��ǵ�ַ
//ָ���������ͨ��" * "������������ָ�����ָ����ڴ�ռ䣬������̳�Ϊ������
//�ܽ�1�� ���ǿ���ͨ�� & ���� ��ȡ�����ĵ�ַ
//�ܽ�2������ָ����Լ�¼��ַ
//�ܽ�3����ָ����������ã����Բ���ָ��ָ����ڴ�