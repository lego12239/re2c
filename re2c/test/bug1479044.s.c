/* Generated by re2c */
#line 1 "bug1479044.s.re"
#define NULL ((char*) 0)
#define YYCTYPE char
#define YYCURSOR p
#define YYLIMIT p
#define YYMARKER q
#define YYFILL(n)

#include <stdio.h>

char *scan281(char *p)
{
	char *q;
start:

#line 18 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	if (yych <= 'f') {
		if (yych <= 'a') {
			if (yych <= '/') {
				if (yych <= 0x00) goto yy16;
				goto yy15;
			} else {
				if (yych <= '9') goto yy14;
				if (yych <= '`') goto yy15;
			}
		} else {
			if (yych <= 'c') {
				if (yych <= 'b') goto yy4;
				goto yy5;
			} else {
				if (yych <= 'd') goto yy6;
				if (yych <= 'e') goto yy7;
				goto yy8;
			}
		}
	} else {
		if (yych <= 'q') {
			if (yych <= 'l') {
				if (yych <= 'k') goto yy15;
				goto yy9;
			} else {
				if (yych == 'p') goto yy10;
				goto yy15;
			}
		} else {
			if (yych <= 'v') {
				if (yych <= 'r') goto yy13;
				if (yych <= 'u') goto yy15;
				goto yy11;
			} else {
				if (yych == 'x') goto yy12;
				goto yy15;
			}
		}
	}
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy172;
yy3:
#line 32 "bug1479044.s.re"
	{
		goto start;
	}
#line 72 "<stdout>"
yy4:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy170;
	goto yy3;
yy5:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy168;
	goto yy3;
yy6:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'n') {
		if (yych == 'h') goto yy154;
		goto yy3;
	} else {
		if (yych <= 'o') goto yy153;
		if (yych == 's') goto yy155;
		goto yy3;
	}
yy7:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy151;
	goto yy3;
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy149;
	goto yy3;
yy9:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy147;
	goto yy3;
yy10:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'p') {
		if (yych <= 'n') goto yy3;
		if (yych <= 'o') goto yy137;
		goto yy136;
	} else {
		if (yych == 'r') goto yy135;
		goto yy3;
	}
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'd') goto yy133;
	goto yy3;
yy12:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 's') goto yy108;
	goto yy3;
yy13:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'h') goto yy71;
	goto yy3;
yy14:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == '-') goto yy18;
	if (yych <= '/') goto yy3;
	if (yych <= '9') goto yy20;
	goto yy3;
yy15:
	yych = *++YYCURSOR;
	goto yy3;
yy16:
	++YYCURSOR;
#line 37 "bug1479044.s.re"
	{
		return NULL;
	}
#line 151 "<stdout>"
yy18:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy22;
yy19:
	YYCURSOR = YYMARKER;
	if (yyaccept <= 1) {
		if (yyaccept <= 0) {
			goto yy3;
		} else {
			goto yy63;
		}
	} else {
		if (yyaccept <= 2) {
			goto yy107;
		} else {
			goto yy132;
		}
	}
yy20:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '-') goto yy18;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy20;
	goto yy19;
yy22:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '-') goto yy24;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy22;
	goto yy19;
yy24:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych >= ':') goto yy19;
yy25:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '-') goto yy27;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy25;
	goto yy19;
yy27:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy19;
	if (yych >= ':') goto yy19;
yy28:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *YYCURSOR;
	if (yych == '.') goto yy30;
	if (yych <= '/') goto yy19;
	if (yych <= '9') goto yy28;
	goto yy19;
yy30:
	yych = *++YYCURSOR;
	if (yych == 'b') goto yy34;
	if (yych != 'd') goto yy33;
	yych = *++YYCURSOR;
	if (yych == 'h') goto yy69;
	goto yy33;
yy32:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy33:
	if (yych == 0x0A) goto yy19;
	if (yych == 'm') goto yy35;
	goto yy32;
yy34:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy64;
	goto yy33;
yy35:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'l') {
		if (yych == 0x0A) goto yy19;
		goto yy32;
	} else {
		if (yych <= 'm') goto yy35;
		if (yych != 'o') goto yy32;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'c') {
		if (yych == 0x0A) goto yy19;
		goto yy32;
	} else {
		if (yych <= 'd') goto yy38;
		if (yych == 'm') goto yy35;
		goto yy32;
	}
yy38:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'd') {
		if (yych == 0x0A) goto yy19;
		goto yy32;
	} else {
		if (yych <= 'e') goto yy39;
		if (yych == 'm') goto yy35;
		goto yy32;
	}
yy39:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 0x0A) goto yy19;
	if (yych != 'm') goto yy32;
yy40:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych >= '.') goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych >= 'm') goto yy40;
		} else {
			if (yych == 'o') goto yy46;
		}
	}
yy42:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy42;
	} else {
		if (yych <= '.') goto yy44;
		if (yych == 'm') goto yy40;
		goto yy42;
	}
yy44:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych == 'w') goto yy49;
			goto yy42;
		}
	}
yy46:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'd') {
			if (yych <= 'c') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'e') {
			if (yych <= 'd') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy42;
	} else {
		if (yych <= '.') goto yy44;
		if (yych == 'm') goto yy40;
		goto yy42;
	}
yy49:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'a') {
			if (yych <= '`') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych != 's') goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'h') {
			if (yych <= 'g') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'i') {
			if (yych <= 'h') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'l') goto yy42;
		if (yych <= 'm') goto yy40;
		if (yych >= 'o') goto yy42;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'g') {
			if (yych <= 'f') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych != 't') goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych != 'o') goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'l') goto yy42;
		if (yych <= 'm') goto yy40;
		if (yych >= 'o') goto yy42;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy42;
	} else {
		if (yych <= '.') goto yy59;
		if (yych == 'm') goto yy40;
		goto yy42;
	}
yy59:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'd') {
		if (yych <= 0x0A) {
			if (yych <= 0x09) goto yy42;
			goto yy19;
		} else {
			if (yych == '.') goto yy44;
			goto yy42;
		}
	} else {
		if (yych <= 'm') {
			if (yych <= 'e') goto yy60;
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych == 'w') goto yy49;
			goto yy42;
		}
	}
yy60:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'd') {
			if (yych <= 'c') goto yy42;
		} else {
			if (yych == 'm') goto yy40;
			goto yy42;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy42;
		goto yy44;
	} else {
		if (yych <= 'm') {
			if (yych <= 'l') goto yy42;
			goto yy40;
		} else {
			if (yych != 'u') goto yy42;
		}
	}
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych != 0x0A) goto yy42;
	} else {
		if (yych <= '.') goto yy44;
		if (yych == 'm') goto yy40;
		goto yy42;
	}
yy63:
#line 27 "bug1479044.s.re"
	{
		return "edu";
	}
#line 565 "<stdout>"
yy64:
	yych = *++YYCURSOR;
	if (yych != 't') goto yy33;
	yych = *++YYCURSOR;
	if (yych != 'h') goto yy33;
	yych = *++YYCURSOR;
	if (yych != 'e') goto yy33;
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy33;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy42;
	goto yy33;
yy69:
	yych = *++YYCURSOR;
	if (yych != 'c') goto yy33;
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy42;
	goto yy33;
yy71:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 0x0A) goto yy19;
	if (yych != '-') goto yy71;
yy73:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy71;
	} else {
		if (yych <= '-') goto yy73;
		if (yych <= '/') goto yy71;
		if (yych >= ':') goto yy71;
	}
yy75:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy71;
	} else {
		if (yych <= '-') goto yy77;
		if (yych <= '/') goto yy71;
		if (yych <= '9') goto yy75;
		goto yy71;
	}
yy77:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy71;
	} else {
		if (yych <= '-') goto yy73;
		if (yych <= '/') goto yy71;
		if (yych >= ':') goto yy71;
	}
yy78:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy71;
		goto yy77;
	} else {
		if (yych <= '.') goto yy80;
		if (yych <= '/') goto yy71;
		if (yych <= '9') goto yy78;
		goto yy71;
	}
yy80:
	yych = *++YYCURSOR;
	if (yych != '.') goto yy82;
yy81:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy82:
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy81;
	} else {
		if (yych <= '-') goto yy83;
		if (yych <= '.') goto yy85;
		goto yy81;
	}
yy83:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych <= '/') goto yy81;
		if (yych <= '9') goto yy87;
		goto yy81;
	}
yy85:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych == 'r') goto yy92;
		goto yy81;
	}
yy87:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
	} else {
		if (yych <= '.') goto yy85;
		if (yych <= '/') goto yy81;
		if (yych <= '9') goto yy87;
		goto yy81;
	}
yy89:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych <= '/') goto yy81;
		if (yych >= ':') goto yy81;
	}
yy90:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy89;
	} else {
		if (yych <= '.') goto yy85;
		if (yych <= '/') goto yy81;
		if (yych <= '9') goto yy90;
		goto yy81;
	}
yy92:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'e') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 's') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'n') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'e') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 't') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy81;
	} else {
		if (yych <= '-') goto yy83;
		if (yych >= '/') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x0A) {
			if (yych <= 0x09) goto yy81;
			goto yy19;
		} else {
			if (yych <= ',') goto yy81;
			if (yych <= '-') goto yy83;
			goto yy85;
		}
	} else {
		if (yych <= 'p') {
			if (yych <= 'o') goto yy81;
		} else {
			if (yych == 'r') goto yy92;
			goto yy81;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'i') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 't') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 't') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych == 0x0A) goto yy19;
		goto yy81;
	} else {
		if (yych <= '-') goto yy83;
		if (yych >= '/') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x0A) {
			if (yych <= 0x09) goto yy81;
			goto yy19;
		} else {
			if (yych <= ',') goto yy81;
			if (yych <= '-') goto yy83;
			goto yy85;
		}
	} else {
		if (yych <= 'e') {
			if (yych <= 'd') goto yy81;
		} else {
			if (yych == 'r') goto yy92;
			goto yy81;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'd') goto yy81;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		if (yych <= ',') goto yy81;
		goto yy83;
	} else {
		if (yych <= '.') goto yy85;
		if (yych != 'u') goto yy81;
	}
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych != 0x0A) goto yy81;
	} else {
		if (yych <= '-') goto yy83;
		if (yych <= '.') goto yy85;
		goto yy81;
	}
yy107:
#line 22 "bug1479044.s.re"
	{
		return "resnet";
	}
#line 911 "<stdout>"
yy108:
	yych = *++YYCURSOR;
	if (yych != 't') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 't') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'd') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy19;
yy114:
	yych = *++YYCURSOR;
	if (yych == '.') goto yy19;
	goto yy116;
yy115:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy116:
	if (yych <= '/') {
		if (yych <= ',') goto yy19;
		if (yych <= '-') goto yy115;
		if (yych >= '/') goto yy19;
	} else {
		if (yych <= '9') goto yy115;
		if (yych <= '`') goto yy19;
		if (yych <= 'k') goto yy115;
		goto yy19;
	}
	yych = *++YYCURSOR;
	if (yych == 0x0A) goto yy19;
yy118:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 0x0A) goto yy19;
	if (yych != '.') goto yy118;
yy120:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 'u') goto yy118;
	}
yy122:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 's') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 'w') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 'e') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 's') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 't') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 0x0A) goto yy19;
	if (yych != '.') goto yy118;
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych == 0x0A) goto yy19;
		if (yych <= '-') goto yy118;
		goto yy120;
	} else {
		if (yych <= 'n') {
			if (yych <= 'm') goto yy118;
		} else {
			if (yych == 'u') goto yy122;
			goto yy118;
		}
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 'e') goto yy118;
	}
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '-') {
		if (yych == 0x0A) goto yy19;
		goto yy118;
	} else {
		if (yych <= '.') goto yy120;
		if (yych != 't') goto yy118;
	}
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 0x0A) goto yy132;
	if (yych == '.') goto yy120;
	goto yy118;
yy132:
#line 17 "bug1479044.s.re"
	{
		return "dsl";
	}
#line 1066 "<stdout>"
yy133:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy135:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy142;
	goto yy19;
yy136:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy139;
	goto yy19;
yy137:
	yych = *++YYCURSOR;
	if (yych != 'o') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy139:
	yych = *++YYCURSOR;
	if (yych != 'd') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy142:
	yych = *++YYCURSOR;
	if (yych != 'm') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'i') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'u') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'm') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'C') goto yy114;
	goto yy19;
yy147:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy149:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy151:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy153:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy166;
	goto yy19;
yy154:
	yych = *++YYCURSOR;
	if (yych == 'c') goto yy165;
	goto yy19;
yy155:
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'g') goto yy158;
	if (yych != 'p') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy164;
	goto yy19;
yy158:
	yych = *++YYCURSOR;
	if (yych != 'w') goto yy19;
	yych = *++YYCURSOR;
	if (yych != '4') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'p') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'o') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'o') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy164:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy114;
	goto yy19;
yy165:
	yych = *++YYCURSOR;
	if (yych == 'p') goto yy71;
	goto yy19;
yy166:
	yych = *++YYCURSOR;
	if (yych != 'm') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 's') goto yy71;
	goto yy19;
yy168:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy170:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy114;
	goto yy19;
yy172:
	yych = *++YYCURSOR;
	if (yych != 's') goto yy19;
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy19;
	yych = *++YYCURSOR;
	if (yych == '.') goto yy19;
	if (yych != 'p') goto yy116;
	yych = *++YYCURSOR;
	if (yych != 'p') goto yy19;
	++YYCURSOR;
	if ((yych = *YYCURSOR) == 'p') goto yy114;
	goto yy19;
}
#line 40 "bug1479044.s.re"

}

int main(int argc, char **argv)
{
	int n = 0;
	char *largv[2];

	if (argc < 2)
	{
		argc = 2;
		argv = largv;
		argv[1] = "D-128-208-46-51.dhcp4.washington.edu";
	}
	while(++n < argc)
	{
		char *res = scan281(argv[n]);
		printf("%s\n", res ? res : "<NULL>");
	}
	return 0;
}
