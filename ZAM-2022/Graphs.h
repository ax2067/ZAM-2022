#pragma once
#include "FST.h"
#define N_GRAPHS 21


// графы переходов 
#define GRAPH_SEPARATORS 2,\
	FST::NODE(18,\
			FST::RELATION(';', 1), FST::RELATION('=', 1),\
			FST::RELATION(',', 1), FST::RELATION('[', 1),\
			FST::RELATION(']', 1), FST::RELATION('(', 1),\
			FST::RELATION(')', 1), FST::RELATION('*', 1),\
			FST::RELATION('+', 1), FST::RELATION('-', 1),\
			FST::RELATION('#', 1), FST::RELATION('/', 1),\
			FST::RELATION('<', 1), FST::RELATION('>', 1),\
			FST::RELATION('{', 1), FST::RELATION('}', 1),\
			FST::RELATION('&', 1), FST::RELATION('!', 1),\
	FST::NODE()


#define GRAPH_ID 2, \
	FST::NODE(26, FST::RELATION('a', 1),  FST::RELATION('b', 1), \
			FST::RELATION('c', 1),  FST::RELATION('d', 1), \
			FST::RELATION('e', 1),  FST::RELATION('f', 1), \
			FST::RELATION('g', 1),  FST::RELATION('h', 1), \
			FST::RELATION('i', 1),  FST::RELATION('j', 1), \
			FST::RELATION('k', 1),  FST::RELATION('l', 1), \
			FST::RELATION('m', 1),  FST::RELATION('n', 1), \
			FST::RELATION('o', 1),  FST::RELATION('p', 1), \
			FST::RELATION('q', 1),  FST::RELATION('r', 1), \
			FST::RELATION('s', 1),  FST::RELATION('t', 1), \
			FST::RELATION('u', 1),  FST::RELATION('v', 1), \
			FST::RELATION('w', 1),  FST::RELATION('x', 1), \
			FST::RELATION('y', 1),  FST::RELATION('z', 1)), \
	FST::NODE(26, FST::RELATION('a', 1),  FST::RELATION('b', 1), \
			FST::RELATION('c', 1),  FST::RELATION('d', 1), \
			FST::RELATION('e', 1),  FST::RELATION('f', 1), \
			FST::RELATION('g', 1),  FST::RELATION('h', 1), \
			FST::RELATION('i', 1),  FST::RELATION('j', 1), \
			FST::RELATION('k', 1),  FST::RELATION('l', 1), \
			FST::RELATION('m', 1),  FST::RELATION('n', 1), \
			FST::RELATION('o', 1),  FST::RELATION('p', 1), \
			FST::RELATION('q', 1),  FST::RELATION('r', 1), \
			FST::RELATION('s', 1),  FST::RELATION('t', 1), \
			FST::RELATION('u', 1),  FST::RELATION('v', 1), \
			FST::RELATION('w', 1),  FST::RELATION('x', 1), \
			FST::RELATION('y', 1),  FST::RELATION('z', 1))


#define GRAPH_STRING_LITERAL 3,\
	FST::NODE(1, FST::RELATION('\"', 1)),\
	FST::NODE(153, \
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1),\
			FST::RELATION('e', 1), FST::RELATION('f', 1), FST::RELATION('g', 1), FST::RELATION('h', 1),\
			FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1),\
			FST::RELATION('q', 1), FST::RELATION('r', 1), FST::RELATION('s', 1), FST::RELATION('t', 1),\
			FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1),\
			FST::RELATION('E', 1), FST::RELATION('F', 1), FST::RELATION('G', 1), FST::RELATION('H', 1),\
			FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1),\
			FST::RELATION('Q', 1), FST::RELATION('R', 1), FST::RELATION('S', 1), FST::RELATION('T', 1),\
			FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('0', 1), FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1),\
			FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1),\
			FST::RELATION('8', 1), FST::RELATION('9', 1),\
			FST::RELATION(' ', 1), FST::RELATION(',', 1), FST::RELATION('.', 1), FST::RELATION(';', 1),\
			FST::RELATION('-', 1), FST::RELATION('+', 1), FST::RELATION('*', 1), FST::RELATION('/', 1),\
			FST::RELATION('=', 1), FST::RELATION(':', 1), FST::RELATION(')', 1), FST::RELATION('(', 1),\
			FST::RELATION('}', 1), FST::RELATION('{', 1), FST::RELATION(']', 1), FST::RELATION('[', 1),\
			FST::RELATION('!', 1), FST::RELATION('?', 1), FST::RELATION('#', 1), FST::RELATION('&', 1),\
			FST::RELATION('>', 1), FST::RELATION('<', 1), FST::RELATION('[', 1), FST::RELATION(']', 1),\
			FST::RELATION('а', 1),\
			FST::RELATION('б', 1),\
			FST::RELATION('в', 1),\
			FST::RELATION('г', 1),\
			FST::RELATION('д', 1),\
			FST::RELATION('е', 1), \
			FST::RELATION('ё', 1),\
			FST::RELATION('ж', 1),\
			FST::RELATION('з', 1),\
			FST::RELATION('и', 1),\
			FST::RELATION('й', 1),\
			FST::RELATION('к', 1),\
			FST::RELATION('л', 1),\
			FST::RELATION('м', 1),\
			FST::RELATION('н', 1),\
			FST::RELATION('о', 1),\
			FST::RELATION('п', 1),\
			FST::RELATION('р', 1),\
			FST::RELATION('с', 1),\
			FST::RELATION('т', 1),\
			FST::RELATION('у', 1),\
			FST::RELATION('ф', 1),\
			FST::RELATION('х', 1),\
			FST::RELATION('ц', 1),\
			FST::RELATION('ч', 1),\
			FST::RELATION('ш', 1),\
			FST::RELATION('щ', 1),\
			FST::RELATION('ъ', 1),\
			FST::RELATION('ы', 1),\
			FST::RELATION('ь', 1),\
			FST::RELATION('э', 1),\
			FST::RELATION('ю', 1),\
			FST::RELATION('я', 1),\
			FST::RELATION('А', 1),\
			FST::RELATION('Б', 1), \
			FST::RELATION('В', 1), \
			FST::RELATION('Г', 1),\
			FST::RELATION('Д', 1),\
			FST::RELATION('Е', 1),\
			FST::RELATION('Ё', 1),\
			FST::RELATION('Ж', 1),\
			FST::RELATION('З', 1),\
			FST::RELATION('И', 1),\
			FST::RELATION('Й', 1),\
			FST::RELATION('К', 1),\
			FST::RELATION('Л', 1),\
			FST::RELATION('М', 1),\
			FST::RELATION('Н', 1),\
			FST::RELATION('О', 1),\
			FST::RELATION('П', 1),\
			FST::RELATION('Р', 1),\
			FST::RELATION('С', 1),\
			FST::RELATION('Т', 1),\
			FST::RELATION('У', 1),\
			FST::RELATION('Ф', 1),\
			FST::RELATION('Х', 1),\
			FST::RELATION('Ц', 1),\
			FST::RELATION('Ч', 1),\
			FST::RELATION('Ш', 1),\
			FST::RELATION('Щ', 1),\
			FST::RELATION('Ъ', 1),\
			FST::RELATION('Ы', 1),\
			FST::RELATION('Ь', 1),\
			FST::RELATION('Э', 1),\
			FST::RELATION('Ю', 1),\
			FST::RELATION('Я', 1),\
			FST::RELATION('\"', 2)),\
	FST::NODE()


#define GRAPH_INT_LITERAL 3, \
	FST::NODE(11, \
			FST::RELATION('-', 1),\
			FST::RELATION('0', 2), FST::RELATION('1', 2),\
			FST::RELATION('2', 2), FST::RELATION('3', 2),\
			FST::RELATION('4', 2), FST::RELATION('5', 2),\
			FST::RELATION('6', 2), FST::RELATION('7', 2),\
			FST::RELATION('8', 2), FST::RELATION('9', 2)),\
	FST::NODE(9,\
			FST::RELATION('1', 2),\
			FST::RELATION('2', 2), FST::RELATION('3', 2),\
			FST::RELATION('4', 2), FST::RELATION('5', 2),\
			FST::RELATION('6', 2), FST::RELATION('7', 2),\
			FST::RELATION('8', 2), FST::RELATION('9', 2)),\
	FST::NODE(10,\
			FST::RELATION('0', 2), FST::RELATION('1', 2),\
			FST::RELATION('2', 2), FST::RELATION('3', 2),\
			FST::RELATION('4', 2), FST::RELATION('5', 2),\
			FST::RELATION('6', 2), FST::RELATION('7', 2),\
			FST::RELATION('8', 2), FST::RELATION('9', 2))

#define GRAPH_BOOL_LITERAL 2, \
	FST::NODE(2, FST::RELATION('0', 1), FST::RELATION('1', 1)),\
	FST::NODE()

#define GRAPH_V_LITERAL 4, \
    FST::NODE(1, FST::RELATION('q', 1)),\
    FST::NODE(32, FST::RELATION('0', 2), FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), \
		FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2), FST::RELATION('8', 2),\
		FST::RELATION('9', 2), FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2),\
		FST::RELATION('D', 2), FST::RELATION('E', 2), FST::RELATION('F', 2),\
		FST::RELATION('0', 3), FST::RELATION('1', 3), FST::RELATION('2', 3), FST::RELATION('3', 3), \
		FST::RELATION('4', 3), FST::RELATION('5', 3), FST::RELATION('6', 3), FST::RELATION('7', 3), FST::RELATION('8', 3),\
		FST::RELATION('9', 3), FST::RELATION('A', 3), FST::RELATION('B', 3), FST::RELATION('C', 3),\
		FST::RELATION('D', 3), FST::RELATION('E', 3), FST::RELATION('F', 3)),\
    FST::NODE(32, FST::RELATION('0', 2), FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), \
		FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2), FST::RELATION('8', 2),\
		FST::RELATION('9', 2), FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2),\
		FST::RELATION('D', 2), FST::RELATION('E', 2), FST::RELATION('F', 2),\
		FST::RELATION('0', 3), FST::RELATION('1', 3), FST::RELATION('2', 3), FST::RELATION('3', 3), \
		FST::RELATION('4', 3), FST::RELATION('5', 3), FST::RELATION('6', 3), FST::RELATION('7', 3), FST::RELATION('8', 3),\
		FST::RELATION('9', 3), FST::RELATION('A', 3), FST::RELATION('B', 3), FST::RELATION('C', 3),\
		FST::RELATION('D', 3), FST::RELATION('E', 3), FST::RELATION('F', 3)),\
    FST::NODE()


#define GRAPH_MOD 2, \
	FST::NODE(1, FST::RELATION('%', 1)),\
	FST::NODE()


#define GRAPH_ISTRUE 7, \
	FST::NODE(1, FST::RELATION('i', 1)),\
	FST::NODE(1, FST::RELATION('s', 2)),\
	FST::NODE(1, FST::RELATION('t', 3)),\
	FST::NODE(1, FST::RELATION('r', 4)),\
	FST::NODE(1, FST::RELATION('u', 5)),\
	FST::NODE(1, FST::RELATION('e', 6)),\
	FST::NODE()


#define GRAPH_ISFALSE 8, \
	FST::NODE(1, FST::RELATION('i', 1)),\
	FST::NODE(1, FST::RELATION('s', 2)),\
	FST::NODE(1, FST::RELATION('f', 3)),\
	FST::NODE(1, FST::RELATION('a', 4)),\
	FST::NODE(1, FST::RELATION('l', 5)),\
	FST::NODE(1, FST::RELATION('s', 6)),\
	FST::NODE(1, FST::RELATION('e', 7)),\
	FST::NODE()


#define GRAPH_FUNCTION 9, \
	FST::NODE(1, FST::RELATION('f', 1)),\
    FST::NODE(1, FST::RELATION('u', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE(1, FST::RELATION('t', 5)),\
    FST::NODE(1, FST::RELATION('i', 6)),\
    FST::NODE(1, FST::RELATION('o', 7)),\
    FST::NODE(1, FST::RELATION('n', 8)),\
    FST::NODE()


#define GRAPH_CONDITION 11,\
	FST::NODE(1, FST::RELATION('c', 1)),\
	FST::NODE(1, FST::RELATION('o', 2)),\
	FST::NODE(1, FST::RELATION('n', 3)),\
	FST::NODE(1, FST::RELATION('d', 4)),\
	FST::NODE(1, FST::RELATION('i', 5)),\
	FST::NODE(1, FST::RELATION('t', 6)),\
	FST::NODE(1, FST::RELATION('i', 7)),\
	FST::NODE(1, FST::RELATION('o', 8)),\
	FST::NODE(1, FST::RELATION('n', 9)),\
	FST::NODE(1, FST::RELATION(':', 10)),\
	FST::NODE()


#define GRAPH_NUMBER 7,\
	FST::NODE(1, FST::RELATION('n', 1)),\
	FST::NODE(1, FST::RELATION('u', 2)),\
	FST::NODE(1, FST::RELATION('m', 3)),\
	FST::NODE(1, FST::RELATION('b', 4)),\
	FST::NODE(1, FST::RELATION('e', 5)),\
	FST::NODE(1, FST::RELATION('r', 6)),\
	FST::NODE()


#define GRAPH_STRING 7, \
	FST::NODE(1, FST::RELATION('s', 1)),\
	FST::NODE(1, FST::RELATION('t', 2)),\
	FST::NODE(1, FST::RELATION('r', 3)),\
	FST::NODE(1, FST::RELATION('i', 4)),\
	FST::NODE(1, FST::RELATION('n', 5)),\
	FST::NODE(1, FST::RELATION('g', 6)),\
	FST::NODE()


#define GRAPH_MAIN 5, \
	FST::NODE(1, FST::RELATION('m', 1)),\
	FST::NODE(1, FST::RELATION('a', 2)),\
	FST::NODE(1, FST::RELATION('i', 3)),\
	FST::NODE(1, FST::RELATION('n', 4)),\
	FST::NODE()

#define GRAPH_BOOL 5, \
	FST::NODE(1, FST::RELATION('b', 1)),\
	FST::NODE(1, FST::RELATION('o', 2)),\
	FST::NODE(1, FST::RELATION('o', 3)),\
	FST::NODE(1, FST::RELATION('l', 4)),\
	FST::NODE()

#define GRAPH_CYCLE 6, \
	FST::NODE(1, FST::RELATION('c', 1)),\
	FST::NODE(1, FST::RELATION('y', 2)),\
	FST::NODE(1, FST::RELATION('c', 3)),\
	FST::NODE(1, FST::RELATION('l', 4)),\
	FST::NODE(1, FST::RELATION('e', 5)),\
	FST::NODE()


#define GRAPH_WRITE 6, \
	FST::NODE(1, FST::RELATION('p', 1)),\
	FST::NODE(1, FST::RELATION('r', 2)),\
	FST::NODE(1, FST::RELATION('i', 3)),\
	FST::NODE(1, FST::RELATION('n', 4)),\
	FST::NODE(1, FST::RELATION('t', 5)),\
	FST::NODE()


#define GRAPH_NEWLINE 8, \
	FST::NODE(1, FST::RELATION('n', 1)),\
	FST::NODE(1, FST::RELATION('e', 2)),\
	FST::NODE(1, FST::RELATION('w', 3)),\
	FST::NODE(1, FST::RELATION('l', 4)),\
	FST::NODE(1, FST::RELATION('i', 5)),\
	FST::NODE(1, FST::RELATION('n', 6)),\
	FST::NODE(1, FST::RELATION('e', 7)),\
	FST::NODE()


#define GRAPH_RETURN 7, \
	FST::NODE(1, FST::RELATION('r', 1)),\
	FST::NODE(1, FST::RELATION('e', 2)),\
	FST::NODE(1, FST::RELATION('t', 3)),\
	FST::NODE(1, FST::RELATION('u', 4)),\
	FST::NODE(1, FST::RELATION('r', 5)),\
	FST::NODE(1, FST::RELATION('n', 6)),\
	FST::NODE()


#define GRAPH_SCRIPT 7, \
	FST::NODE(1, FST::RELATION('s', 1)),\
	FST::NODE(1, FST::RELATION('c', 2)),\
	FST::NODE(1, FST::RELATION('r', 3)),\
	FST::NODE(1, FST::RELATION('i', 4)),\
	FST::NODE(1, FST::RELATION('p', 5)),\
	FST::NODE(1, FST::RELATION('t', 6)),\
	FST::NODE()


#define GRAPH_NEW 4, \
	FST::NODE(1, FST::RELATION('n', 1)),\
	FST::NODE(1, FST::RELATION('e', 2)),\
	FST::NODE(1, FST::RELATION('w', 3)),\
	FST::NODE()