#pragma once
#include <iostream>

#define NUMBER_OF_TABLE_ENTRIES 100     // event-action table�� ���� entry ����
#define MAX_NUMBER_OF_ACTIONS   3       // transition �� ����Ǵ� �ִ� action ����

using namespace std;


// State ������ ����
typedef enum {
    STATE_INPUTTING_OPERAND1,
    STATE_OPERATRO_INTPUTTED,
    STATE_INPUTTING_OPERAND2,
    STATE_SHOWING_RESULT,
    STATE_END
} State;


// Event ������ ����
typedef enum {
    EVENT_DIGIT,
    EVENT_OPERATOR,
    EVENT_EQUAL,
    EVENT_QUIT
} Event;


// ���� �ڵ��Ǹű⸦ ���� StateMachine Ŭ���� ����
class StateMachine
{
private:
    State curState;     // ���� ����

    // event-action table structure ����
    typedef struct {
        State curState;             // ���� ����
        Event event;                // ����ڷκ��� �߻��� �̺�Ʈ
        int number_of_actions;                                      // �ش� transition�� ����Ǵ� action �Լ��� ����
        void (StateMachine::* action[MAX_NUMBER_OF_ACTIONS])();   // action �Լ� �������� �迭  
        State nextState;            // transition �Ŀ� ����� ���� ����
    } EventActionTable;

    // vending machine���� ����� event-action table �ʱ�ȭ
    EventActionTable table[NUMBER_OF_TABLE_ENTRIES]{
        {STATE_INPUTTING_OPERAND1,	EVENT_DIGIT,	           1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND1},
        {STATE_INPUTTING_OPERAND1,	EVENT_OPERATOR,	           1,  {&StateMachine::displayInputValue},       STATE_OPERATRO_INTPUTTED},
        {STATE_OPERATRO_INTPUTTED,	EVENT_OPERATOR,            1,  {&StateMachine::overwriteOperator},       STATE_OPERATRO_INTPUTTED},
        {STATE_OPERATRO_INTPUTTED,	EVENT_DIGIT,	           1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND2},
        {STATE_INPUTTING_OPERAND2,	EVENT_DIGIT,               1,  {&StateMachine::displayInputValue},       STATE_INPUTTING_OPERAND2},
        {STATE_INPUTTING_OPERAND2,	EVENT_EQUAL,               1,  {&StateMachine::eraseAllDisplayResult},   STATE_SHOWING_RESULT},
        {STATE_SHOWING_RESULT,      EVENT_DIGIT,               1,  {&StateMachine::eraseAllDisplayDigit},    STATE_INPUTTING_OPERAND1}
    };

    void displayInputValue();     // �Էµ� ���� ��µǾ����ϴ�. ���
    void overwriteOperator();     // �Էµ� �����ڰ� ���� �����ڸ� ��ü�߽��ϴ�. ���
    void eraseAllDisplayResult(); // �������� ��µǾ����ϴ�. ���
    void eraseAllDisplayDigit();  // ���� �������� ����� �Էµ� ���� ��µǾ����ϴ�. ���

    Event getNextEvent();       // ����ڷκ��� ���� �̺�Ʈ�� �Է¹���

    string getCurrentStateString();     // ���� ���¿� �ش��ϴ� ���ڿ��� �����ؼ� ��ȯ��


public:
    void run();               // state machine ���� 
};






