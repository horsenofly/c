lens=strlen(s);
//printf("lens===%d",lens);
for(i=0;i<len-1;i+=2)
{
  sprintf(da,"0x%c%c",s[i],s[i+1]);
  nValude=0;
  sscanf(da,"%x",&nValude);
  sprintf(da2,"%c",nValude);
  strcat(da3,da2);
}
printf("data==%s\n",da3);

比如： s=“71717171”
则 data="qqqq"
