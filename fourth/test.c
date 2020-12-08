int sum(int a)
{
    if(a == 1) return 1;
	return sum(a - 1) + a;
}

int main()
{
    int m, n, i;
    m = read();
    i = 1;
    while (i <= m)
    {
        n = sum(i);
        write(n);
        i = i + 1;
    }
    return 0;
}