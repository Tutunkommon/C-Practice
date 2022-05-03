    long main (int y = 2022, int m = 5, int d = 3)
    {
	y+=8000;
	if(m<3) { y--; m+=12; }
	return (y*365) +(y/4) -(y/100) +(y/400) -1200820
              +(m*153+3)/5-92
              +d-1
	;
    }