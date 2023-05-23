#pragma once
#include <string>
#include "StateMachine.h"


/*
	함수 이름 : StateMachine::run()
	기능	  : STATE_END 상태가 될 때까지 event-action 테이블에 정의된 규칙과 사용자에 의해 발생되는 이벤트에 따라 state machine을 동작시킴
	전달 인자 : 없음
	반환값    : 없음
*/
void StateMachine::run()
{
	int i, j;
	Event curEvent;		// 현재 이벤트

	curState = STATE_INPUTTING_OPERAND1;				// 상태 초기화
	while (curState != STATE_END)		// EVENT_QUIT이 입력될 때까지 반복 수행함
	{
		curEvent = getNextEvent();		// 다음 이벤트를 입력받음

		for (i = 0; i < NUMBER_OF_TABLE_ENTRIES; i++)   // 테이블에 정의된 전각체 행(transition 내용)에 대해 비교함
		{
			if (curState == table[i].curState)			// 현재 상태와 일치하는지 검사
			{
				if (curEvent == table[i].event)			// 입력된 현재 이벤트와 일치하는지 검사
				{
					// 해당 transition이 발생할 때 수행해야 할 action 함수들을 실행시킴
					for (j = 0; j < table[i].number_of_actions; j++)
						(this->*table[i].action[j])();

					curState = table[i].nextState;		// 테이블에 정의된 다음 상태로 현재 상태를 변경함
					break;
				}
			}
		}
		cout << endl << endl;
	}
}



/*
	함수 이름 : StateMachine::getNextEvent()
	기능	  : 사용자로부터 다음 이벤트를 입력받음
	전달 인자 : 없음
	반환값    : Event -> 입력받은 이벤트 값
*/
Event StateMachine::getNextEvent()
{
	Event selectedEvent;       // 반환할 이벤트
	int inputEvent;				// 사용자로부터 입력받은 이벤트

	// 입력 안내 메세지 출력
	cout << "[현재 상태 : " << getCurrentStateString() << "]" << endl;
	cout << "1. input digit" << endl;
	cout << "2. input operator" << endl;
	cout << "3. input equal" << endl;
	cout << "4. Quit" << endl;
	cout << "Select an event # : ";

	// 사용자로부터 이벤트 입력받음
	cin >> inputEvent;

	// 입력 값에 따라 반환할 이벤트 값을 결정함
	switch (inputEvent)
	{
	case 1:
		selectedEvent = EVENT_DIGIT;
		break;
	case 2:
		selectedEvent = EVENT_OPERATOR;
		break;
	case 3:
		selectedEvent = EVENT_EQUAL;
		break;
	case 4:
	default:
		selectedEvent = EVENT_QUIT;
		curState = STATE_END;
	}

	return selectedEvent;
}



/*
	함수 이름 : StateMachine::displayInputValue()
	기능	  : 입력된 값이 출력되었습니다. 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void StateMachine::displayInputValue()
{
	cout << "입력된 값이 출력되었습니다." << endl;
}



/*
	함수 이름 : StateMachine::overwriteOperator()
	기능	  : 입력된 연산자가 이전 연산자를 대체했습니다. 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void StateMachine::overwriteOperator()
{
	cout << "입력된 연산자가 이전 연산자를 대체했습니다." << endl;
}



/*
	함수 이름 : StateMachine::eraseAllDisplayResult()
	기능	  : 연산결과가 출력되었습니다. 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void StateMachine::eraseAllDisplayResult()
{
	cout << "연산결과가 출력되었습니다." << endl;
}



/*
	함수 이름 : StateMachine::eraseAllDisplayDigit()
	기능	  : 이전 연산결과를 지우고 입력된 값이 출력되었습니다. 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void StateMachine::eraseAllDisplayDigit()
{
	cout << "이전 연산결과를 지우고 입력된 값이 출력되었습니다." << endl;
}


/*
	함수 이름 : StateMachine::getCurrentStateString()
	기능	  : 현재 상태에 해당하는 출력용 문자열을 생성해서 반환함
	전달 인자 : 없음
	반환값    : string -> 출력용 상태 문자열
*/
string StateMachine::getCurrentStateString()
{
	string returnedString;

	switch (curState)
	{
	case STATE_INPUTTING_OPERAND1:
		returnedString = "STATE_INPUTTING_OPERAND1";
		break;
	case STATE_OPERATRO_INTPUTTED:
		returnedString = "STATE_OPERATRO_INTPUTTED";
		break;
	case STATE_INPUTTING_OPERAND2:
		returnedString = "STATE_INPUTTING_OPERAND2";
		break;
	case STATE_SHOWING_RESULT:
		returnedString = "STATE_SHOWING_RESULT";
		break;
	case STATE_END:
		returnedString = "STATE_END";
	}

	return returnedString;
}
