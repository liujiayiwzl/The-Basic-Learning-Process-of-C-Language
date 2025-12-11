#include <stdio.h>

int main()
{
    int sum = 0;                 // 1. 累加器，初始为 0
    for (int i = 1; i <= 100; i++) // 2. i 从 1 到 100（包含100），每次递增1
    {
        if (i % 2 == 0)          // 3. i % 2 == 0 检查 i 是否为偶数
        {
            sum += i;            // 4. 若为偶数，则将 i 加到 sum 上（等价于 sum = sum + i）
        }
    }
    printf("%d\n", sum);         // 5. 循环结束后输出累加结果
    return 0;                    // 6. 返回 0，表示程序正常结束
}
