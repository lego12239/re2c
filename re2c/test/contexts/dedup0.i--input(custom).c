/* Generated by re2c */

{
	YYCTYPE yych;
	long yyctx0, yyctx2;
	YYBACKUPCTX ();
	if (YYLESSTHAN (3)) YYFILL(3);
	yych = YYPEEK ();
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
	{}
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	yyctx0 = YYDIST();
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':	goto yy7;
	case 'c':	goto yy10;
	default:	goto yy3;
	}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	yyctx2 = YYDIST();
	switch (yych) {
	case 'z':	goto yy13;
	default:	goto yy6;
	}
yy6:
	YYRESTORE ();
	goto yy3;
yy7:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy9;
	}
yy9:
	YYRESTORECTX (yyctx0);
	{}
yy10:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy12;
	}
yy12:
	YYRESTORECTX (yyctx0);
	{}
yy13:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'z':	goto yy13;
	default:	goto yy15;
	}
yy15:
	YYRESTORECTX (yyctx2);
	{}
}
