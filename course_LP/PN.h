
#include "stdafx.h"
//#define EXPRESSIONS		'v'	// ������ ��� ���� ��������� 
#define MAX_PARAMETRES	10		// ������������ ����� ����������
#define ADD				'+'		// c�������
#define SUB				'-'		// ���������
#define MUL				'*'		// ���������
#define DIV				'/'		// �������
#define	LEFTHESIS		'('		// (
#define	RIGHTESIS		')'		// )
#define EQUALS			'='		// ��� ������ �������
#define	SEMICOLON		';'		// ������� ��� ����� ������;
#define CALL_FUNCTION	'@'		// ����� �������
#define	COMMA			','		// ,

namespace PN
{
	void seachingExpressions(LT::LexTable& lextable, IT::IdTable& idtable);
	int polishNotation(int lextable_pos, LT::LexTable& lextable, IT::IdTable& idtable);
}