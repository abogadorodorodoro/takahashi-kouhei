#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("long double型の最大値：%Le\n", LDBL_MAX);
    printf("long double型の最小値：%Le\n", LDBL_MIN);
    printf("long double型の精度の桁数：%d\n", LDBL_DIG);
    printf("double型の最大値：%g\n", DBL_MAX);
    printf("double型の最小値：%g\n", DBL_MIN);
    printf("double型の精度の桁数：%d\n", DBL_DIG);
    printf("float型の最大値：%g\n", FLT_MAX);
    printf("float型の最小値：%g\n", FLT_MIN);
    printf("float型の精度の桁数：%g\n", FLT_DIG);
    printf("char型の符号なし最大値：%g\n", UCHAR_MAX);
    printf("char型の最大値：%g\n", CHAR_MAX);
    printf("char型の最小値：%g\n", CHAR_MIN);
    printf("short型の符号なし最大値：%d\n", USHRT_MAX);
    printf("short型の型の最大値：%d\n", SHRT_MAX);
    printf("short型の型の最小値：%d\n", SHRT_MIN);
    printf("int型の符号なし最大値：%d\n", UINT_MAX);
    printf("int型の最大値：%d\n", INT_MAX);
    printf("int型の最小値：%d\n", INT_MIN);
    printf("long型の符号なし最大値：%ld\n", ULONG_MAX);
    printf("long型の最大値：%ld\n", LONG_MAX);
    printf("long型の最小値：%ld\n", LONG_MIN);
    printf("long long int型の符号なし最大値：%d\n", ULLONG_MAX);
    printf("long long int型の最大値：%d\n", LLONG_MAX);
    printf("long long int型の最小値：%d\n", LLONG_MIN);

    return 0;
}