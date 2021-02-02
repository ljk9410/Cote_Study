#include <stdio.h>

// 파일 입출력
// 파일을 대상으로 데이터를 입력하고 출력하기 위한 작업

int     main()
{
    FILE    *fp; // FILE 이라는 구조체를 통해 파일과 프로그램 사이에 stream을 생성
    int     ch;
    char    str[5];

    // 파일 출력
    fp = fopen("test.txt", "wt"); // "test.txt" 파일이 없다면 생성, "wt": 출력전용 + 텍스트파일 모드
    if (fp == NULL)
        return (-1); // 비정상적 종료를 위한 조건문
    fputs("abcdefghijklmnopqrstuvwxyz", fp); // 파일에 'A' 문자를 출력
    fclose(fp); // stream 종료를 통해 자원낭비 최소화

    // 파일 입력
    fp = fopen("test.txt", "rt"); // "test.txt" 파일을 "rt": 입력전용 + 텍스트파일 모드
    ch = fgetc(fp);
    printf("%c \n", ch);
    fclose(fp);

    // 파일안의 문자열 입력 및 콘솔로의 출력
    fp = fopen("test.txt", "rt");
    fgets(str, sizeof(str), fp);
    printf("%s \n", str);
    fgets(str, sizeof(str), fp);
    printf("%s \n", str);
    fclose(fp);
    return (0);
}