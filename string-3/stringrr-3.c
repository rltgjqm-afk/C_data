#define page 5 //기호상수 5하는 숫자를 page 라고 부른다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//str~~문자열 함수 포함//strcmp 사용
int main()
{
    int i, index;
    char dic[page][2][30] = { //3차원 5면 ->2행 -> 20열
       {"book", "책"}, //0면->0행 book->0열 b 1열 o 2열 o 3열 k, 1행 책->0열 책
       {"boy", "소년"}, //1면-> 0행 boy, 1행 소년
       {"computer", "컴퓨터"}, //2면-> 0행 computer, 1행 컴퓨터
       {"apple", "사과"}, //3면->0행 apple, 1행 사과
       {"rain", "비"}, }; //4면 -> 0행 rain, 1행 비
   
    char word[30];
    printf("단어를 입력하시오:");
    scanf("%s", word);//29글자이내 글자 입력, & 쓰지 않는 이유:문자배열이 이룸만 쓰는 경우
    //는 그자체가 주소를 의미함
    
    for (i = 0; i < page; i++) //0부터4까지 5번 반복
    {
        if (strcmp(dic[i][0], word) == 0) //같은 단어가 있냐
            //각 면마다 0행의 영어 단어와 비교
            //strcmp: 문자열 비교, 같은 것이 있으면 0발생
        {
            printf("%s: %s\n", word, dic[i][1]);
            //해당하는 면의 1행을 출력(1행은 한글로 번역글자
            // 정상적 종료      
            return 0;
        }
    }
    printf("사전에서 발견되지 않았습니다.\n");
    //5번 반복문을 수행을 해도 찾지못할경우
}