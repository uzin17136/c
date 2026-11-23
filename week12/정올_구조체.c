#include <stdio.h>

int main() {
    //Person 구조체를 생성
    //멤버변수 이름, 나이를 저장할 변수를 선언
    struct Person{
        char name[30];
        int age;
    };

    //scanf -> 구조체 멤버 변수에 저장(접근????)
    struct Person p;
    //구조체제어변수,멤버변수
    scanf("%s", p.name); //%s는 입력길이 제한X
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.",
           p.name, p.age);
}