result: lex.l def.h parser.y
	bison -d parser.y
	flex lex.l
	gcc -o parser tree.c parser.tab.c lex.yy.c