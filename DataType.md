# Data Type and Format Specifier

|Type|Size (bytes)|Range|Format Specifier|
|---|---|---|---|
|`int`|at least 2, usually 4| (?) -32768 to +32767 (-2^15 to +2^15 -1)|`%d`,`%i`|
|`char`|1|-128 to 127|`%c`|
|`float`|4|3.2e-38 to 3.4e38|`%f`|
|`double`|8||`%lf`|
|`short int`|2 usually||`%hd`|
|`unsigned int`|at least 2, usually 4||`%u`|
|`long int`|at least 4, usually 8||`%ld`,`%li`|
|`long long int`|at least 8||`%lld`,`%lli`|
|`unsigned long int`|8||`%lu`|
|`unsigned long long int`|at least 8||`%llu`|
|`signed char`|1||`%c`|
|`unsigned char`|1||`%c`|
|`long double`|at least 10, usually 12 or 16||`%Lf`|

use `%g` instead of %f or %lf {note: seam told me but we don't know exactly how it works}