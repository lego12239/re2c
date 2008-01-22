/* Generated by re2c */
#line 1 "calc_008.b.re"
/* re2c lesson 001_upn_calculator, calc_008, (c) M. Boerger 2006 - 2007 */
#line 31 "calc_008.b.re"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DEBUG(stmt) stmt

int  stack[4];
int  depth = 0;

int push_num(const char *t, const char *l, int radix)
{
	int num = 0;
	
	if (depth >= sizeof(stack))
	{
		return 3;
	}

	--t;
	while(++t < l)
	{
		num = num * radix + (*t - '0');
	}
	DEBUG(printf("Num: %d\n", num));

	stack[depth++] = num;
	return 0;
}

int stack_add()
{
	if (depth < 2) return 4;
	
	--depth;
	stack[depth-1] = stack[depth-1] + stack[depth];
	DEBUG(printf("+\n"));
	return 0;
}

int stack_sub()
{
	if (depth < 2) return 4;

	--depth;
	stack[depth-1] = stack[depth-1] - stack[depth];
	DEBUG(printf("+\n"));
	return 0;
}

int scan(char *p)
{
	char *t;
	int res = 0;
	
	while(!res)
	{
		t = p;

#line 65 "<stdout>"
		{
			unsigned char curr;
			static const unsigned char yybm[] = {
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0, 128,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				128,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				 64,  64,  64,  64,  64,  64,  64,  64, 
				 64,  64,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
			};

			curr = (unsigned char)*p;
			if (curr <= '*') {
				if (curr <= 0x09) {
					if (curr <= 0x00) goto scan11;
					if (curr <= 0x08) goto scan13;
				} else {
					if (curr != ' ') goto scan13;
				}
			} else {
				if (curr <= '-') {
					if (curr <= '+') goto scan7;
					if (curr <= ',') goto scan13;
					goto scan9;
				} else {
					if (curr <= '/') goto scan13;
					if (curr <= '0') goto scan4;
					if (curr <= '9') goto scan6;
					goto scan13;
				}
			}
			++p;
			curr = (unsigned char)*p;
			goto scan21;
scan3:
#line 103 "calc_008.b.re"
			{ continue; }
#line 129 "<stdout>"
scan4:
			++p;
			if ((curr = (unsigned char)*p) <= '/') goto scan5;
			if (curr <= '9') goto scan17;
scan5:
#line 105 "calc_008.b.re"
			{ res = push_num(t, p, 10); continue; }
#line 137 "<stdout>"
scan6:
			curr = (unsigned char)*++p;
			goto scan16;
scan7:
			++p;
#line 106 "calc_008.b.re"
			{ res = stack_add();		continue; }
#line 145 "<stdout>"
scan9:
			++p;
#line 107 "calc_008.b.re"
			{ res = stack_sub();		continue; }
#line 150 "<stdout>"
scan11:
			++p;
#line 108 "calc_008.b.re"
			{ res = depth == 1 ? 0 : 2;	break; }
#line 155 "<stdout>"
scan13:
			++p;
#line 109 "calc_008.b.re"
			{ res = 1; 					continue; }
#line 160 "<stdout>"
scan15:
			++p;
			curr = (unsigned char)*p;
scan16:
			if (yybm[0+curr] & 64) {
				goto scan15;
			}
			goto scan5;
scan17:
			++p;
			curr = (unsigned char)*p;
			if (curr <= '/') goto scan19;
			if (curr <= '9') goto scan17;
scan19:
#line 104 "calc_008.b.re"
			{ res = push_num(t, p, 8);	continue; }
#line 177 "<stdout>"
scan20:
			++p;
			curr = (unsigned char)*p;
scan21:
			if (yybm[0+curr] & 128) {
				goto scan20;
			}
			goto scan3;
		}
#line 110 "calc_008.b.re"

	}
	return res;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *inp;
		int res = 0, argp = 0, len;
		
		while(!res && ++argp < argc)
		{
			inp = strdup(argv[argp]);
			len = strlen(inp);
			if (inp[0] == '\"' && inp[len-1] == '\"')
			{
				inp[len - 1] = '\0';
				++inp;
			}
			res = scan(inp);
			free(inp);
		}
		switch(res)
		{
		case 0:
			printf("Result: %d\n", stack[0]);
			return 0;
		case 1:
			fprintf(stderr, "Illegal character in input.\n");
			return 1;
		case 2:
			fprintf(stderr, "Premature end of input.\n");
			return 2;
		case 3:
			fprintf(stderr, "Stack overflow.\n");
			return 3;
		case 4:
			fprintf(stderr, "Stack underflow.\n");
			return 4;
		}
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 0;
	}
}
