/* Generated by re2c */
#line 1 "config5.re"
// ignored
#line 7 "config5.re"
// code

#line 8 "<stdout>"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych) {
	case 'a':	goto yy2;
	default:	goto yy4;
	}
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych) {
	case 'b':	goto yy5;
	default:	goto yy3;
	}
yy3:
#line 11 "config5.re"
	{ return 0; }
#line 27 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	goto yy3;
yy5:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch(yych) {
	case 'b':	goto yy5;
	case 'c':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	switch(yych) {
	case 'c':	goto yy9;
	default:	goto yy7;
	}
yy9:
	yych = *++YYCURSOR;
	switch(yych) {
	case 'c':	goto yy10;
	default:	goto yy7;
	}
yy10:
	++YYCURSOR;
#line 10 "config5.re"
	{ return 1; }
#line 59 "<stdout>"
}
#line 13 "config5.re"

// ignored
#line 20 "config5.re"
// max
#define YYMAXFILL 3
#line 26 "config5.re"
// eof
