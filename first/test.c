// 全局变量声明
string x;
int a, b, c;
float m, n;
char y;

// 全局结构定义
struct node
{
    int q;
    int l;
} temp;
// 全局数组声明
int a1[10];
// 多维数组
int a2[10][10];

// 测试函数定义
int fibo(int a)
{
    // 测试if_then_else语句和逻辑运算表达式
    if (a == 1 || a == 2)
        return 1;
    else
        // 测试return语句和函数调用
        return fibo(a - 1) + fibo(a - 2);
}

/* 这是一个块注释
   用于测试块注释 */

int main()
{
    int a, b, c;

    float m, n;
    char y;
    string x;
    int i;
    // 测试赋值
    a1[1] = 100;
    a2[0][0] = 1000;
    a = 1;
    b = 0x1234abcd;
    c = 0123;
    m = 2.0;
    n = 1e5 + 10;

    // 算术运算
    a = b + c;
    // 测试加等、减等、乘等、除等、模等
    a -= c;
    a %= c;
    // 测试自增、自减
    a++;
    --b;
    // 测试while循环
    while (a < 100)
    {
        // 测试字符常量、字符串常量
        y = 'k';
        x = "I am a string\n";
        continue;
    }

    // 测试switch
    switch (a)
    {
    case 1:
        m = 100;
        break;
    default:
        m = 0;
        break;
    }
    // 测试for循环
    for (i = 0; i < 100; i++)
    {
        // 测试if_then语句 和 逻辑运算表达式
        if ((i <= 50 || i >= 60) && !(i == 90) && i != 95)
        // 测试结构体操作
        {
            temp.q = 0;
            continue;
        }
        if (i >= 98)
            break;
    }
}