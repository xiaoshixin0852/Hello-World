#include<stdio.h>
//1. quickSort 函数的核心逻辑
void quickSort(long long a[],long long n)
 {
//初始化阶段

long long temp;
long long left=0,right=n-1;
long long s=a[0];

//定义了左右指针 left 和 right，分别指向数组的两端。
//选择数组的第一个元素 a[0] 作为枢轴（s）。

//分区过程
if(n>1)
{
while(left!=right)
{
    while(a[left]<=s && left<right)
        left++;
    while(a[right]>=s && left<right)
        right--;
    temp=a[right];
    a[right]=a[left];
    a[left]=temp;
}

//外层循环：当 left 和 right 指针尚未相遇时，不断执行交换逻辑。
//两个 while 循环：
//a[left]<=s && left<right：从左向右扫描，找到第一个比 s 大的元素。
//a[right]>=s && left<right：从右向左扫描，找到第一个比 s 小的元素。
//找到后，交换 a[left] 和 a[right]。

//调整枢轴的位置

if(a[0]>a[left])
{
    a[0]=a[left];
    a[left]=s;
}
//如果最终分区点（a[left]）比枢轴 s 小，则将 s 放到分区点的位置，从而完成一次分区操作。

//递归调用

quickSort(a,left);
quickSort(a+left,n-left);

//对左子数组（a[0] 到 a[left-1]）递归调用 quickSort。
//对右子数组（a[left] 到 a[n-1]）递归调用 quickSort。
 }
 else return;
 }
//2. main 函数

int main()
{
    long long n;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    quickSort(a,n);
    for(int i=0;i<n;i++)
        printf("%lld ",a[i]);
    return 0;
}

//接收用户输入的数组长度 n 和数组元素。
//调用 quickSort 对数组进行排序。
//输出排序后的数组。

// 3. 程序正确性分析

// 这段代码实现了标准的快速排序算法，且逻辑上是正确的：
// 	1.	枢轴选择：使用数组的第一个元素作为枢轴。
// 	2.	分区过程：左右指针通过交换保证了比枢轴小的在左侧，比枢轴大的在右侧。
// 	3.	递归终止条件：当子数组长度 n <= 1 时，直接返回，不再继续递归。
// 	4.	性能：
// 	•	时间复杂度：
// 	•	平均情况：O(n log n)。
// 	•	最坏情况：O(n^2)（当数组已排序或接近排序时）。
// 	•	空间复杂度：O(log n)，由于递归栈的开销。

// 4. 需要注意的细节

// 	•	分区的 if 检查：

// if(a[0]>a[left])
// {
//     a[0]=a[left];
//     a[left]=s;
// }

// 	•	这一步是为了在特殊情况下（例如，数组元素全相等）避免不必要的移动。

// 	•	递归调用范围：
// 	•	左子数组：[a[0] 到 a[left-1]]，大小为 left。
// 	•	右子数组：[a[left] 到 a[n-1]]，大小为 n-left。

// 5. 代码改进（优化潜力）

// 虽然功能正确，但以下是一些可以改进的地方：
// 	1.	枢轴选择：
// 	•	当前选择数组的第一个元素作为枢轴，在数组已排序或接近排序时性能较差。
// 	•	改进方法：使用“三数取中法”或随机选择法。
// 	2.	尾递归优化：
// 	•	由于右侧的递归调用会占用更多的栈空间，可以通过将较小的子数组递归，较大的子数组使用循环来优化递归深度。

// 示例优化：

// void quickSort(long long a[], long long n)
// {
//     while (n > 1)
//     {
//         long long temp, left = 0, right = n - 1, s = a[0];
//         while (left != right)
//         {
//             while (a[left] <= s && left < right) left++;
//             while (a[right] >= s && left < right) right--;
//             temp = a[right];
//             a[right] = a[left];
//             a[left] = temp;
//         }
//         if (a[0] > a[left]) { a[0] = a[left]; a[left] = s; }

//         if (left < n - left) {
//             quickSort(a, left);
//             a += left;
//             n -= left;
//         } else {
//             quickSort(a + left, n - left);
//             n = left;
//         }
//     }
// }

// 这样可以显著减少递归深度，从而提高性能。