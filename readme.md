# How to cook a printf

%[parameter][flags][width][.precision][length]type
/ / Manage the flags #0-+ and space
/ / Manage conversions: csp 
/ / diouxX with the  flags: hh, h, l and ll.
/ / f with the  flags: l and L.
/ / %%
/ / Manage the minimum field-width
/ / Manage the precision

# Ints:

(1)How to organise flags storage?
    - (a)create struct in header, (b)use #DEFINEs
(c) use ternanry operations to compare values
read format
if %% -> print %, count++
if %d -> parse int, print, count++
if format only -> printf format count++ for each symbol

Start parsing format string 
Each conversion specification is introduced by the character %, and ends with a
conversion specifier.In between zero  or more  flags, an optional minimum field width, an optional precision and an optional length modifier.

conversion: stars--> % flags width precision d<--ends
d - conversion specifier for ints

Roses are red,   
Violets are blue.


