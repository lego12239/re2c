/* Generated by re2c */
#line 1 "error13.re"
#define YYMAXFILL 3


#line 7 "<stdout>"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch(yych) {
	case 'A':	goto yy2;
	default:	goto yy4;
	}
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych) {
	case 'B':	goto yy5;
	default:	goto yy3;
	}
yy3:
#line 6 "error13.re"
	{ return 0; }
#line 26 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	goto yy3;
yy5:
	yych = *++YYCURSOR;
	switch(yych) {
	case 'C':	goto yy7;
	case 'D':	goto yy9;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	++YYCURSOR;
#line 4 "error13.re"
	{ return 1; }
#line 44 "<stdout>"
yy9:
	++YYCURSOR;
#line 5 "error13.re"
	{ return 2; }
#line 49 "<stdout>"
}
#line 7 "error13.re"

