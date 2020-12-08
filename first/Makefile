result: lex.l def.h parser.y
	bison -d parser.y
	flex lex.l
	gcc parser.tab.c lex.yy.c tree.c -o parser