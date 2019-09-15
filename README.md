# Ft_printf - recreating printf functionality ⚙️

Because I'm bored of ft_putstr :sunglasses: Actually, no. I was just not allowed to use printf in my school projects, so I recoded my own. This project covers implementation of a C laguage feature – variadic functions. It also includes practice detailed management of the printing options via dispatch tables (which I unfortunately did not implement in this project when I was a beginner - I know, shame on me 😳).
</br></br>

## Ft_printf argument prototype & features I handle:

 Argument prototype: ```%[flags][width/margin][.precision][hh|h|l|ll|j|z]type```, where:
* **flags**:		`+ || - ||`</pre>`   `</pre>`|| # || 0`;
* **width/margin**:
  - min amount of displayed digits, does not cut digits if less, fill with spaces on the left side;
  - if `*` added it's necessary to pass one more parameter with a number of spaces before the actual parameter;
* **.precision**:
  - for `diouxX` min amount of digits, fill with 0 is necessary;
  - for `eEf` amount of digits after dot;
  - for `gG` amount of all digits, if bigger displays number;
  - for `sS` max amount of characters;
  - if `*` added is necessary to pass one more parameter with a number of spaces before the actual parameter;
* **[hh|h|l|ll|j|z|q]**:	default values' modification:
  - `hh`:	for `idouxX` - char;
  - `h`:	for `idouxX` - short int;
  - `l`:	for `idouxX` - long int, for feE - double;
  - `ll`:	for `idouxX` - long long int;
  - `j`:	for `idouxX` - intmax_t;
  - `z`:	for `idouxX` - size_t;
  - `q`:	for `CS` - prints Unicode
</br></br>

## How to run ft_printf?
Copy and paste to your terminal following text:
```
git clone https://github.com/psprawka/Ft_printf.git 42SV_ft_printf
cd 42SV_ft_printf
make
```
This will create a static library - `libftprintf.a` - which you just need to include to the project that you need ft_printf in. 🔧
</br></br>

## My grade for ft_printf project:
<p float="left">
  <img src="imgs/grade.png" width="30%"/>
</p>

