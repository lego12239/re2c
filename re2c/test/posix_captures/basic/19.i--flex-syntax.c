/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt3 = yyt4 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = yyt3 = yyt4 = yyt5 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 3;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[3] = yyt2;
		yypmatch[4] = yyt4;
		yypmatch[5] = yyt5;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt3;
		{}
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		yyt2 = yyt3 = NULL;
		yyt5 = YYCURSOR;
		goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy5;
	default:
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = YYCURSOR;
		goto yy6;
	default:
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:
		yyt3 = yyt2;
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy8;
	default:
		yyt3 = yyt4;
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy9;
	default:
		yyt3 = yyt4;
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = yyt2;
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = YYCURSOR;
		goto yy12;
	default:
		yyt3 = yyt2;
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:
		yyt4 = yyt5 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]