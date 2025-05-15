int* pnum, num1 = 200, num2 = 300;
pnum = &num1;
(*pnum) += 40;
pnum = &num2;
(*pnum) += 50;
printf("num1=%d num2=%\n", num1, num2);




num1 num2 Ãâ·Â?????