#include "LinesAndStringArray.h"
#include "FileBasic.h"

void RunLinesAndStringArray()
{
	char symbol = 'b';
	char lines[] = "Hello World!";
	char word[] = {'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
	cout << symbol << endl;//b
	cout << lines << endl;//Hello World!
	cout << word << endl;//Hello World!
	cout << strlen(lines) << endl;//12 symbols
	cout << strlen(word) << endl;//12 symbols
}