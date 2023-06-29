/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main(){
    char firstName[] = "Aomsin";
    char lastName[] = "AomMoney";
    char address[] = "TC, RMUTL, Chiang Mai, Thailand";
    
    char firstName1[] = "ABC";
    char lastName1[] ="DEF";
    printf("Output: %s %s %s\n", firstName, lastName, address);
    printf("Output: %s %s %s",firstName1, lastName1,address);
}