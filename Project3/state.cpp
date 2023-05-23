#pragma once
#include <string>
#include "StateMachine.h"


/*
	�Լ� �̸� : StateMachine::run()
	���	  : STATE_END ���°� �� ������ event-action ���̺� ���ǵ� ��Ģ�� ����ڿ� ���� �߻��Ǵ� �̺�Ʈ�� ���� state machine�� ���۽�Ŵ
	���� ���� : ����
	��ȯ��    : ����
*/
void StateMachine::run()
{
	int i, j;
	Event curEvent;		// ���� �̺�Ʈ

	curState = STATE_INPUTTING_OPERAND1;				// ���� �ʱ�ȭ
	while (curState != STATE_END)		// EVENT_QUIT�� �Էµ� ������ �ݺ� ������
	{
		curEvent = getNextEvent();		// ���� �̺�Ʈ�� �Է¹���

		for (i = 0; i < NUMBER_OF_TABLE_ENTRIES; i++)   // ���̺� ���ǵ� ����ü ��(transition ����)�� ���� ����
		{
			if (curState == table[i].curState)			// ���� ���¿� ��ġ�ϴ��� �˻�
			{
				if (curEvent == table[i].event)			// �Էµ� ���� �̺�Ʈ�� ��ġ�ϴ��� �˻�
				{
					// �ش� transition�� �߻��� �� �����ؾ� �� action �Լ����� �����Ŵ
					for (j = 0; j < table[i].number_of_actions; j++)
						(this->*table[i].action[j])();

					curState = table[i].nextState;		// ���̺� ���ǵ� ���� ���·� ���� ���¸� ������
					break;
				}
			}
		}
		cout << endl << endl;
	}
}



/*
	�Լ� �̸� : StateMachine::getNextEvent()
	���	  : ����ڷκ��� ���� �̺�Ʈ�� �Է¹���
	���� ���� : ����
	��ȯ��    : Event -> �Է¹��� �̺�Ʈ ��
*/
Event StateMachine::getNextEvent()
{
	Event selectedEvent;       // ��ȯ�� �̺�Ʈ
	int inputEvent;				// ����ڷκ��� �Է¹��� �̺�Ʈ

	// �Է� �ȳ� �޼��� ���
	cout << "[���� ���� : " << getCurrentStateString() << "]" << endl;
	cout << "1. input digit" << endl;
	cout << "2. input operator" << endl;
	cout << "3. input equal" << endl;
	cout << "4. Quit" << endl;
	cout << "Select an event # : ";

	// ����ڷκ��� �̺�Ʈ �Է¹���
	cin >> inputEvent;

	// �Է� ���� ���� ��ȯ�� �̺�Ʈ ���� ������
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
	�Լ� �̸� : StateMachine::displayInputValue()
	���	  : �Էµ� ���� ��µǾ����ϴ�. ���
	���� ���� : ����
	��ȯ��    : ����
*/
void StateMachine::displayInputValue()
{
	cout << "�Էµ� ���� ��µǾ����ϴ�." << endl;
}



/*
	�Լ� �̸� : StateMachine::overwriteOperator()
	���	  : �Էµ� �����ڰ� ���� �����ڸ� ��ü�߽��ϴ�. ���
	���� ���� : ����
	��ȯ��    : ����
*/
void StateMachine::overwriteOperator()
{
	cout << "�Էµ� �����ڰ� ���� �����ڸ� ��ü�߽��ϴ�." << endl;
}



/*
	�Լ� �̸� : StateMachine::eraseAllDisplayResult()
	���	  : �������� ��µǾ����ϴ�. ���
	���� ���� : ����
	��ȯ��    : ����
*/
void StateMachine::eraseAllDisplayResult()
{
	cout << "�������� ��µǾ����ϴ�." << endl;
}



/*
	�Լ� �̸� : StateMachine::eraseAllDisplayDigit()
	���	  : ���� �������� ����� �Էµ� ���� ��µǾ����ϴ�. ���
	���� ���� : ����
	��ȯ��    : ����
*/
void StateMachine::eraseAllDisplayDigit()
{
	cout << "���� �������� ����� �Էµ� ���� ��µǾ����ϴ�." << endl;
}


/*
	�Լ� �̸� : StateMachine::getCurrentStateString()
	���	  : ���� ���¿� �ش��ϴ� ��¿� ���ڿ��� �����ؼ� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ��¿� ���� ���ڿ�
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
