struct Node
{
    int a, b;
} node;

// 1 返回值类型不匹配
int f2(int a, int b)
{
    // 2 同一作用域名称重复
    // 2 函数参数与局部变量重复 V
    int a, b;
    int a;
    // 3 赋值号左边不是左值表达式
    a + b = 10;
    (a + b)++;
    ++a++;
    return 12.3;
}

// 4 break不在循环语句中
// 5 continue不再循环语句中
int f3()
{
    int a, b;
    if (a - 12.3)
        continue;
    break;
    while (a || f3())
    {
        while (1)
            break;
        continue;
    }
    for (a = 1; a > 0 && f3() > 0; a++)
        if (a + b == 0.0)
            break;
    return 1;
}

struct A
{
    int a;
    float b;
    char c;
};

float f4(float x)
{
    struct A m;
    int a;
    m = 12;
    // 6 对结构体变量进行自增、自减运算
    m++;
    m.b = 17;
    // 7 x不是结构体  对非结构变量使用成员选择运算符
    x.a = m.b;
    // 8 结构体成员不存在
    m.d = 100;
    // 9 缺少return
}

int main()
{
    int x, y, z, m, n;
    int a1[10], a2[10];
    char q, w, e;
    // 10 使用未定义的变量
    a = 100;
    // 11 使用未定义的函数
    test();
    // 12 对非函数名使用函数调用
    x();
    // 13 对函数名采用非函数调用形式访问
    x = f1;
    // 14 函数调用时，参数个数不匹配
    x = f2(y);
    // 15 函数调用时，实参与形参类型不匹配
    x = f2(y, q);
    // 16对非数组变量使用下标变量的形式访问
    x[1] = 100;
    // 17 数组变量的下标不是整型
    a1[q] = 100;

    // 18 非左值表达式自增自减
    2 ++;
    // 19 类型不匹配
    x = 10.21;
    continue;
    return 0;
}
