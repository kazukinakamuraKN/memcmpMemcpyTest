/*
 * test.c
 *
 *  Created on: 2018/09/01
 *      Author: hp
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char a [] = "abcdefgh";
	char b [] = "123";
	char *p;
	p = "xyz";
	char*p2;
	p2 = "123";

	if(!(memcmp(b,p2,3)))
	{
		printf("おなじ値だから0が返って、!でelseがtrueになってprintfを通るはず\n");
		printf("ok通った\n");
	}

	strcpy(a,b);
	printf("aのメモリにbを\\0ごとコピー %s\n",a);
	printf("\\0があるとそこで読み込みがおわるため、後ろの文字は表示されない");

	strcpy(a,p);
	printf("aのメモリにポインタの文字列をコピー%s\n",a);

	strcpy(a,"aaa");
	printf("aのメモリに文字列リテラルをコピー%s\n",a);


}
