//leetcode 7 整数反转，没有借助于栈和数组
// https://leetcode.cn/problems/reverse-integer/description/
int reverse(int x){
    int rev=0;
    while(x!=0){
        // if(rev<INT_MIN/10 || rev>INT_MAX/10){
        //     return 0;
        // }
        int d= x%10;
        x=x/10;
        rev=rev*10+d;
    }
    return rev;
}

//复杂度分析
//时间复杂度：O(log∣x∣)。翻转的次数即 x 十进制的位数。
//空间复杂度：O(1)。
