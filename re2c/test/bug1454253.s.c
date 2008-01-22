/* Generated by re2c */
#line 1 "bug1454253.s.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET(n) return n

size_t scan(const char *s, int l, char *r)
{
	const char *p = s;
	const char *q;
	#define YYCTYPE         char
	#define YYCURSOR        p
	#define YYLIMIT         (s+l)
	#define YYMARKER        q
	#define YYFILL(n)

	while(1)
	{

#line 23 "<stdout>"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	if (yych <= 0x00) goto yy5;
	if (yych == '?') goto yy3;
	goto yy7;
yy2:
#line 40 "bug1454253.s.re"
	{
		*r++ = '0';
		*r++ = '\0';
		return p - s;
	}
#line 39 "<stdout>"
yy3:
	yych = *++YYCURSOR;
	if (yych <= '9') {
		if (yych == '!') goto yy12;
		if (yych >= '0') goto yy9;
	} else {
		if (yych <= 'Z') {
			if (yych >= 'A') goto yy9;
		} else {
			if (yych <= '`') goto yy4;
			if (yych <= 'z') goto yy9;
		}
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
#line 34 "bug1454253.s.re"
	{
		*r++ = '3';
		*r++ = '\0';
		return p - s;
	}
#line 64 "<stdout>"
yy7:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy2;
	if (yych == '?') goto yy2;
	goto yy7;
yy9:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '/') goto yy11;
		if (yych <= '9') goto yy9;
	} else {
		if (yych <= 'Z') goto yy9;
		if (yych <= '`') goto yy11;
		if (yych <= 'z') goto yy9;
	}
yy11:
#line 29 "bug1454253.s.re"
	{
		*r++ = '2';
		continue;
	}
#line 90 "<stdout>"
yy12:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '/') goto yy14;
		if (yych <= '9') goto yy12;
	} else {
		if (yych <= 'Z') goto yy12;
		if (yych <= '`') goto yy14;
		if (yych <= 'z') goto yy12;
	}
yy14:
#line 24 "bug1454253.s.re"
	{
		*r++ = '1';
		continue;
	}
#line 109 "<stdout>"
}
#line 45 "bug1454253.s.re"

	}
}

void _do_scan(const char * str, size_t str_len, size_t scn_len, const char * exp, size_t exp_len)
{
	char res[32], sp[32];
	size_t res_len, inp_len;

	inp_len = scan(str, str_len, res);
	res_len = strlen(res);
	
	memset(sp, ' ', sizeof(sp));
	sp[15 - str_len] = '\0';

	printf("[%s](%2d/%2d)%s: %8s(%d) %s %8s(%d)\n", str, inp_len, scn_len, sp, 
			res, res_len, 
			inp_len != scn_len || exp_len != res_len || strncmp(exp, res, exp_len) ? "!=" : "==", 
			exp, exp_len);
}

#define do_scan(str, scn_len, exp) _do_scan(str, sizeof(str) - 1, scn_len, exp, sizeof(exp) - 1)

main()
{
	do_scan("?1??",         2, "20");
	do_scan("#",            1, "0");
	do_scan("##",           2, "0");
	do_scan("##?",          2, "0");
	do_scan("##|",          3, "0");
	do_scan("?!|",          3, "10");
	do_scan("?!?1|",        5, "120");
	do_scan("?!?a+",        5, "120");
	do_scan("?2!1?2??",     4, "20");
	do_scan("?1?2!1?2??",   6, "220");
	do_scan("?1?2?!1?2??",  9, "22120");
	do_scan("?1?2?!1?2?!", 12, "221213");
	do_scan("?1?123?45??",  9, "2220");
	do_scan("?1?123?45?!", 12, "22213");
}
