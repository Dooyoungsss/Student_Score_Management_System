#include <iostream>
#include <string>
#include <vector> #C++에서의 1차원 배열
#include <algorithm>
#include <fstream> # C++에서 파일 입출력
#include <locale> # C++에서 로케일 설정

using namespace std;

// 학생 정보를 담을 구조체 정의
struct Student {
    int id; // 학생 ID
    string name; // 학생 이름
    int kor, eng, math; // 국어, 영어, 수학 점수
    int sum; // 총점
    double average; // 평균
    int rank; // 석차
};

// 학생 정보를 저장할 벡터(Vector) 1차원 배열
vector<Student> students;  //Global 변수

// 각 기능별 함수 선언
void addStudent(); // 학생 정보 추가
void printAllStudents(); // 전체 학생 정보 출력
void calculateRanks(); // 석차 계산
void saveDataToFile(); // 파일에 데이터 저장
void loadDataFromFile(); // 파일에서 데이터 불러오기

int main(){

    return 0;
}