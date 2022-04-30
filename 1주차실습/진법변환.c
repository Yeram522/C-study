#include<stdio.h>

//int main() {
//	int num;
//	printf("정수를 입력해주세요\n");
//	scanf_s("%d", &num);
//
//	printf("10진수 : %d\n", num); // 서식문자 : %d
//	printf("8진수 : %o\n", num); // 서식문자 : %o 
//	printf("16진수(소문자) : %x\n", num); // 서식문자 : %x
//	printf("16진수(대문자) : %X\n", num); // 서식문자 : %X
//
//	printf("8진수(표기) : %#o\n", num); // 서식문자 : %#o
//	printf("16진수(표기) : %#x\n", num); // 서식문자 : %#x
//
//	printf("8진수(8자리까지 0으로 채움) : %0.8o\n", num); // 서식문자 : %0.8o
//	printf("16진수(8자리까지 0으로 채움) : %0.8x\n", num); // 서식문자 : %0.8x
//}


//PTT 예제
int main(void)
{
	int x = 3;
	int y = -3;
	printf("x = %08X\n", x); // 8자리의 16진수로 출력한다.
	printf("y = %08X\n", y); // 8자리의 16진수로 출력한다.
	printf("x+y = %08X\n", x + y); // 8자리의 16진수로 출력한다.
	return 0;
}

