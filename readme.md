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

conversion: stars--> % flags widt h precision d<--ends
d - conversion specifier for ints
# precision
d, i, o, u, x, X	The precision specifies the minimum number of digits to be printed. If the number of digits in the argument is less than precision, the output value is padded on the left with zeros. The value is not truncated when the number of digits exceeds precision.

Roses are red,   
Violets are blue.
Sugar is sweet
So are you

%[flags][min field width][precision][length]conversion specifier
  -----  ---------------  ---------  ------ -------------------
   \             #,*        .#, .*     /             \
    \                                 /               \
   #,0,-,+, ,',I                 hh,h,l,ll,j,z,L    c,d,u,x,X,e,f,g,s,p,%
   -------------                 ---------------    -----------------------
   # | Alternate,                 hh | char,           c | unsigned char,
   0 | zero pad,                   h | short,          d | signed int,
   - | left align,                 l | long,           u | unsigned int,
   + | explicit + - sign,         ll | long long,      x | unsigned hex int,
     | space for + sign,           j | [u]intmax_t,    X | unsigned HEX int,
   ' | locale thousands grouping,  z | size_t,         e | [-]d.ddde±dd double,
   I | Use locale's alt digits     t | ptrdiff_t,      E | [-]d.dddE±dd double,
                                   L | long double,  ---------=====
   if no precision   => 6 decimal places            /  f | [-]d.ddd double,
   if precision = 0  => 0 decimal places      _____/   g | e|f as appropriate,
   if precision = #  => # decimal places               G | E|F as appropriate,
   if flag = #       => always show decimal point      s | string,
                                             ..............------
                                            /          p | pointer,
   if precision      => max field width    /           % | %