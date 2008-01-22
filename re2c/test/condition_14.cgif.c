/* Generated by re2c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192


enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

size_t fill(Scanner *s, size_t len)
{
	size_t got = ~0, cnt;

	if (!s->eof && s->lim - s->tok < len)
	{
		if (s->tok > s->buffer)
		{
			cnt = s->tok - s->buffer;
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			cnt = &s->buffer[BSIZE] - s->lim;
		}
		else
		{
			cnt = BSIZE;
		}
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	if (s->eof && s->cur + len > s->eof)
	{
		return ~0; /* not enough input data */
	}
	return got;
}

size_t init(Scanner *s)
{
	s->cur = s->tok = s->lim = s->buffer;
	s->eof = 0;
	s->cond = EStateNormal;
	s->state = -1;

	return fill(s, 0);
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	s->tok = s->cur;

	static void *yystable[] = {
		&&yyFillLabel0,
		&&yyFillLabel1,
		&&yyFillLabel2,
		&&yyFillLabel3,
	};

	if (s->state < 0) {
		goto yy0;
	}
	goto *yystable[s->state];
	for(;;)
	{
		s->tok = s->cur;

		{

			static void *yyctable[4] = {
				&&yyc_Normal,
				&&yyc_Comment,
				&&yyc_Skiptoeol,
				&&yyc_String,
			};
yy0:
			goto *yyctable[s->cond];
/* *********************************** */
yyc_Comment:

			s->state = 0;
			if ((s->lim - s->cur) < 2) if(fill(s, 2) == ~0) break;
yyFillLabel0:
			s->yych = *s->cur;
			if (s->yych != '*') goto yy4;
			++s->cur;
			if ((s->yych = *s->cur) == '/') goto yy5;
yy3:
			continue;
yy4:
			s->yych = *++s->cur;
			goto yy3;
yy5:
			++s->cur;
			s->cond = EStateNormal;
			continue;
/* *********************************** */
yyc_Normal:
			s->state = 1;
			if ((s->lim - s->cur) < 4) if(fill(s, 4) == ~0) break;
yyFillLabel1:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy13, &&yy15, &&yy15, &&yy15, &&yy15, &&yy12,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy11,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy9,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15,
					&&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15, &&yy15
				};
				goto *yytarget[s->yych];
			}
yy9:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy26;
yy10:
			fputc(s->cur[-1], stdout);
			continue;
yy11:
			s->yych = *++s->cur;
			if (s->yych == '*') goto yy24;
			if (s->yych == '/') goto yy22;
			goto yy10;
yy12:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '"') goto yy16;
			if (s->yych == '\\') goto yy18;
			goto yy10;
yy13:
			++s->cur;
			s->cond = EStateString;
			fputc(s->cur[-1], stdout);
			continue;
yy15:
			s->yych = *++s->cur;
			goto yy10;
yy16:
			s->yych = *++s->cur;
			if (s->yych == '\'') goto yy20;
yy17:
			s->cur = s->tok;
			goto yy10;
yy18:
			s->yych = *++s->cur;
			if (s->yych != '"') goto yy17;
			s->yych = *++s->cur;
			if (s->yych != '\'') goto yy17;
yy20:
			++s->cur;
			fputl("'\"'", 3, stdout);
			continue;
yy22:
			++s->cur;
			s->cond = EStateSkiptoeol;
			continue;
yy24:
			++s->cur;
			s->cond = EStateComment;
			continue;
yy26:
			s->yych = *++s->cur;
			{
				static void *yytarget[256] = {
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy41, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy39,
					&&yy27, &&yy29, &&yy17, &&yy17, &&yy17, &&yy43, &&yy17, &&yy37,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy31, &&yy35, &&yy33, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17,
					&&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17, &&yy17
				};
				goto *yytarget[s->yych];
			}
yy27:
			++s->cur;
			fputc('[', stdout);
			continue;
yy29:
			++s->cur;
			fputc(']', stdout);
			continue;
yy31:
			++s->cur;
			fputc('{', stdout);
			continue;
yy33:
			++s->cur;
			fputc('}', stdout);
			continue;
yy35:
			++s->cur;
			fputc('#', stdout);
			continue;
yy37:
			++s->cur;
			fputc('\\', stdout);
			continue;
yy39:
			++s->cur;
			fputc('^', stdout);
			continue;
yy41:
			++s->cur;
			fputc('|', stdout);
			continue;
yy43:
			++s->cur;
			fputc('~', stdout);
			continue;
/* *********************************** */
yyc_Skiptoeol:
			s->state = 2;
			if ((s->lim - s->cur) < 5) if(fill(s, 5) == ~0) break;
yyFillLabel2:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy51, &&yy53, &&yy53, &&yy50, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy47,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy49, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53,
					&&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53, &&yy53
				};
				goto *yytarget[s->yych];
			}
yy47:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy60;
yy48:
			continue;
yy49:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == 0x0A) goto yy58;
			if (s->yych == 0x0D) goto yy56;
			goto yy48;
yy50:
			s->yych = *++s->cur;
			if (s->yych == 0x0A) goto yy54;
			goto yy48;
yy51:
			++s->cur;
			s->cond = EStateNormal;
			fputc('\n', stdout);
			continue;
yy53:
			s->yych = *++s->cur;
			goto yy48;
yy54:
			++s->cur;
			s->cond = EStateNormal;
			fputc('\r', stdout);
			fputc('\n', stdout);
			continue;
yy56:
			s->yych = *++s->cur;
			if (s->yych == 0x0A) goto yy58;
yy57:
			s->cur = s->tok;
			goto yy48;
yy58:
			++s->cur;
			continue;
yy60:
			s->yych = *++s->cur;
			if (s->yych != '/') goto yy57;
			s->yych = *++s->cur;
			if (s->yych == 0x0A) goto yy63;
			if (s->yych != 0x0D) goto yy57;
			s->yych = *++s->cur;
			if (s->yych != 0x0A) goto yy57;
yy63:
			++s->cur;
			continue;
/* *********************************** */
yyc_String:
			s->state = 3;
			if ((s->lim - s->cur) < 2) if(fill(s, 2) == ~0) break;
yyFillLabel3:
			s->yych = *s->cur;
			if (s->yych == '"') goto yy69;
			if (s->yych != '\\') goto yy71;
			++s->cur;
			if ((s->yych = *s->cur) != 0x0A) goto yy72;
yy68:
			fputc(s->cur[-1], stdout);
			continue;
yy69:
			++s->cur;
			s->cond = EStateNormal;
			fputc(s->cur[-1], stdout);
			continue;
yy71:
			s->yych = *++s->cur;
			goto yy68;
yy72:
			++s->cur;
			fputl((const char*)s->cur-2, 2, stdout);
			continue;
		}

	}
}

int main(int argc, char **argv)
{
	Scanner in;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	if (init(&in) > 0)
	{
 		scan(&in);
 	}

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
