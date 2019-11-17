/*
 * Beta-Cat Controll @ HSIC
 * @name	inc_std.h
 * C locale STD library. include ALL C locale STD library HERE.
*/
#ifndef _INC_STD_H_
#define _INC_STD_H_

//std C
#include "assert.h"
#include "ctype.h"
#include "errno.h"
//#include "fenv.h"
#include "float.h"
#include "inttypes.h"
#include "iso646.h"
#include "limits.h"
#include "locale.h"
#include "math.h"
#include "setjmp.h"
#include "signal.h"
#include "stdarg.h"
#include "stdbool.h"
#include "stddef.h"
#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "tgmath.h"
#include "time.h"
//#include "uchar.h"
#include "wchar.h"
#include "wctype.h"



#define BANNED(func) sorry_##func##_is_a_banned_function

#undef strcpy
#define strcpy(x,y) BANNED(strcpy)
#undef strcat
#define strcat(x,y) BANNED(strcat)
#undef strncpy
#define strncpy(x,y,n) BANNED(strncpy)
#undef strncat
#define strncat(x,y,n) BANNED(strncat)
 
#undef sprintf
#undef vsprintf
//#ifdef HAVE_VARIADIC_MACROS
#define sprintf(...) BANNED(sprintf)
#define vsprintf(...) BANNED(vsprintf)
//#else
//#define sprintf(buf,fmt,arg) BANNED(sprintf)
//#define vsprintf(buf,fmt,arg) BANNED(sprintf)
//#endif


#endif // ! _INC_STD_H_
