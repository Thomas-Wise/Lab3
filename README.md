Thomas Wise
Lab 03

2)
	I detected the overflow by using higher and higer values for n
	until it returned a negative value. This happened when n=256

4)
	The overflow happened when it started reporting the value as infinite.
	This happened when n=35

5)
	Happened when n=171

6)
	You should expect the value to always be 1, but instead, a lot of them
	are off by just a little bit because these fractions don't come out to
	be perfect decimals.

7)
	The numeric error occurs when it compares the added up 4.4 to regular 4.4.
	This error occurs because .2 isn't represented as an exact value in the
	binary representation, so even though it rounds it for us, the actual value
	stored is slightly less than 4.4.

8)
	Same problem as before, but now the value stored is slightly more than 4.4,
	so it stops when it's supposed to.