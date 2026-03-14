CHO AI CẦN THAM KHẢO🥰
Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100). Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
if(n%400==0||(n%4==0&&n%100!=0))
printf("YES\n");
else
printf("NO\n");
return 0;
}
