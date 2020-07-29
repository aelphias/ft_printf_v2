# How to cook a printf

%[parameter][flags][width][.precision][length]type
/*/ Parse the flags #0-+ and space
/*/ Parse the minimum field-width
/*/ Parse the precision
/ / Manage the flags #0-+ and space
/ / Manage conversions: c-unsigned char, s - str, p - pointer ?
/ / d & i - ints in decimal; ouxX with the  flags: hh, h, l and ll.
/ / f with the  flags: l and L.
/*/ %%
/ / Manage the minimum field-width
/ / Manage the precision


/*/Если width предшествует префикс 0, добавляется несколько ведущих нулей для достижения минимальной ширины. 



# ints:
(1)How to organise flags storage?
    - (a)create struct in header, (b)use #DEFINEs
(c) use ternanry operations to compare values
read format
if %% -> print %, count++
if flags: #0-+
if %d || %i -> parse int, print, count++
if format only -> printf format count++ for each symbol

Start parsing format string 
Each conversion specification is introduced by the character %, and ends with a
conversion specifier.In between zero  or more  flags, an optional minimum field width, an optional precision and an optional length modifier.

conversion: stars--> % flags width precision d<--ends
d - conversion specifier for ints
# precision
d, i, o, u, x, X	The precision specifies the minimum number of digits to be printed. If the number of digits in the argument is less than precision, the output value is padded on the left with zeros. The value is not truncated when the number of digits exceeds precision.

Roses are red,   
Violets are blue.
Sugar is sweet
So are you

