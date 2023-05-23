#pragma once
#include <iostream>

#define NUMBER_OF_TABLE_ENTRIES 100     // event-action table의 현재 entry 갯수
#define MAX_NUMBER_OF_ACTIONS   3       // transition 시 실행되는 최대 action 갯수

using namespace std;


// State 열거형 정의
typedef enum {
    STATE_INPUTTING_OPERAND1,
    STATE_OPERATRO_INTPUTTED,
    STATE_INPUTTING_OPERAND2,
    STATE_SHOWING_RESULT,
    STATE_END
} State;


// Event 열거형 정의
typedef enum {
    EVENT_DIGIT,
    EVENT_OPERATOR,
    EVENT_EQUAL,
    EVENT_QUIT
} Event;


// 음료 자동판매기를 위한 StateMachine 클래스 정의
class StateMachine
{
private:
    State curState;     // 현재 상태

    // event-action table structure 정의
    typedef struct {
        State curState;             // 현재 상태
        Event event;                // 사용자로부터 발생된 이벤트
        int number_of_actions;                                      // 해당 transition에 실행되는 action 함수의 갯수
        void (StateMachine::* action[MAX_NUMBER_OF_ACTIONS])();   // action 함수 포인터의 배열  
        State nextState;            // transition 후에 변경될 다음 상태
    } EventActionTable;

    // vending machine에서 사용할 event-action table 초기화
    EventActionTable table[NUMBER_OF_TABLE_ENTRIES]{
        {STATE_INPUTTING_OPERAND1,	EVENT_DIGIT,	           1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND1},
        {STATE_INPUTTING_OPERAND1,	EVENT_OPERATOR,	           1,  {&StateMachine::displayInputValue},       STATE_OPERATRO_INTPUTTED},
        {STATE_OPERATRO_INTPUTTED,	EVENT_OPERATOR,            1,  {&StateMachine::overwriteOperator},       STATE_OPERATRO_INTPUTTED},
        {STATE_OPERATRO_INTPUTTED,	EVENT_DIGIT,	           1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND2},
        {STATE_INPUTTING_OPERAND2,	EVENT_DIGIT,               1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND2},
        {STATE_INPUTTING_OPERAND2,	EVENT_EQUAL,               1,  {&StateMachine::eraseAllDisplayResult},   STATE_SHOWING_RESULT},
        {STATE_SHOWING_RESULT,      EVENT_DIGIT,               1,  {&StateMachine::eraseAllDisplayDigit},    STATE_INPUTTING_OPERAND1}
    };

    void displayInputValue();     // 입력된 값이 출력되었습니다. 출력
    void overwriteOperator();     // 입력된 연산자가 이전 연산자를 대체했습니다. 출력
    void eraseAllDisplayResult(); // 연산결과가 출력되었습니다. 출력
    void eraseAllDisplayDigit();  // 이전 연산결과를 지우고 입력된 값이 출력되었습니다. 출력

    Event getNextEvent();       // 사용자로부터 다음 이벤트를 입력받음

    string getCurrentStateString();     // 현재 상태에 해당하는 문자열을 생성해서 반환함


public:
    void run();               // state machine 실행 
};






