#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // 생성자

/*
    함수 이름 : ShowRecruitList::ShowRecruit()
    기능	  : 등록된 채용정보 조회
    전달 인자 : 로그인된 멤버 포인터
    반환값    : 해당 회사 회원의 등록된 채용정보 string
*/
string ShowRecruitList::ShowRecruit(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList() {} // 소멸자