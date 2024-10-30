#include <iostream>
#include <cstdio>  // printf를 사용하기 위해 포함합니다.

int main() {
    int age = 25;
    const char* name = "홍길동";
    float height = 175.5;

    // printf를 사용하여 출력
    printf("이름: %s\n", name);
    printf("나이: %d세\n", age);
    printf("키: %.1fcm\n", height);

    printf("123123124: %.1fcm\n", height);

    return 0;
}