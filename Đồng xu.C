Bạn có số lượng xu không giới hạn với các giá trị 1,2,3,……n (từ 1 tới n). Bạn muốn chọn một số bộ tiền có tổng giá trị S. Nó được phép có nhiều đồng tiền có cùng giá trị trong tập hợp. Số lượng đồng xu tối thiểu cần thiết để có được tổng S là bao nhiêu?

Gợi ý : S = 31, 32, 33, 34, n = 5 => Cần 7 đồng

S = 35, n => Cần 7 đồng
CÓ FILE LỜI GIẢI CHO AI CẦN
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
long long n,s;
scanf("%lld %lld",&n,&s);
if(s%n==0){
printf("%lld",s/n);
}
else{
printf("%lld",s/n+1);
}
return 0;
}






