#include "Login.h"

/*
    함수 이름 : LoginUI::loginMember()
    기능	  : 로그인 하기, 멤버 배열을 돌면서 로그인 멤버 함수 호출
    전달 인자 : ID, PW, 멤버 포인터 배열, 현재까지 몇개의 멤버가 있는지 세는 수
    반환값    : 로그인 하는 멤버의 인덱스 반환
*/
Member* Login::loginMember(string ID, string PW, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember) {
    bool result = false;
    for (int i = 0; i < *nextCMember; i++) {
        
        result = Cmembers[i]->loginMember(ID, PW);
        // 로그인 성공시 해당 포인터
        if (result) {
            return Cmembers[i]; 
        }
        
    }
    for (int i = 0; i < *nextGMember; i++) {

        result = Gmembers[i]->loginMember(ID, PW);
        // 로그인 성공시 해당 포인터
        if (result) {
            return Gmembers[i];
        }

    }
    // 아무것도 통과하지 못하였다면 nullptr을 return
    return nullptr;


}
