#include <windows.h>
#include <stdio.h>

#define byte unsigned char

BYTE Table[] = {	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x01, 0xFF,
					0x02, 0x03, 0x04, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B,
					0x0C, 0xFF, 0x0D, 0x0E, 0xFF, 0x0F, 0x10, 0xFF, 0x11,
					0xFF, 0x12, 0xFF, 0x13, 0xFF, 0x14, 0x15, 0x16, 0x17,
					0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06,
					0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0xFF, 0x0D, 0x0E,
					0xFF, 0x0F, 0x10, 0xFF, 0x11, 0xFF, 0x12, 0xFF, 0x13,
					0xFF, 0x14, 0x15, 0x16, 0x17, 0x18, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
					0xFF, 0xFF, 0xFF, 0xFF };

BYTE Table2[] = {	0x09, 0x04, 0x07, 0x0F, 0x0D, 0x0A, 0x03, 0x0B, 0x01, 0x02, 0x0C, 0x08, 0x06, 0x0E, 0x05, 0x00, 
					0x09, 0x0B, 0x05, 0x04, 0x08, 0x0F, 0x01, 0x0E, 0x07, 0x00, 0x03, 0x02, 0x0A, 0x06, 0x0D, 0x0C, 
					0x0C, 0x0E, 0x01, 0x04, 0x09, 0x0F, 0x0A, 0x0B, 0x0D, 0x06, 0x00, 0x08, 0x07, 0x02, 0x05, 0x03, 
					0x0B, 0x02, 0x05, 0x0E, 0x0D, 0x03, 0x09, 0x00, 0x01, 0x0F, 0x07, 0x0C, 0x0A, 0x06, 0x04, 0x08, 
					0x06, 0x02, 0x04, 0x05, 0x0B, 0x08, 0x0C, 0x0E, 0x0D, 0x0F, 0x07, 0x01, 0x0A, 0x00, 0x03, 0x09, 
					0x05, 0x04, 0x0E, 0x0C, 0x07, 0x06, 0x0D, 0x0A, 0x0F, 0x02, 0x09, 0x01, 0x00, 0x0B, 0x08, 0x03, 
					0x0C, 0x07, 0x08, 0x0F, 0x0B, 0x00, 0x05, 0x09, 0x0D, 0x0A, 0x06, 0x0E, 0x02, 0x04, 0x03, 0x01, 
					0x03, 0x0A, 0x0E, 0x08, 0x01, 0x0B, 0x05, 0x04, 0x02, 0x0F, 0x0D, 0x0C, 0x06, 0x07, 0x09, 0x00, 
					0x0C, 0x0D, 0x01, 0x0F, 0x08, 0x0E, 0x05, 0x0B, 0x03, 0x0A, 0x09, 0x00, 0x07, 0x02, 0x04, 0x06, 
					0x0D, 0x0A, 0x07, 0x0E, 0x01, 0x06, 0x0B, 0x08, 0x0F, 0x0C, 0x05, 0x02, 0x03, 0x00, 0x04, 0x09, 
					0x03, 0x0E, 0x07, 0x05, 0x0B, 0x0F, 0x08, 0x0C, 0x01, 0x0A, 0x04, 0x0D, 0x00, 0x06, 0x09, 0x02, 
					0x0B, 0x06, 0x09, 0x04, 0x01, 0x08, 0x0A, 0x0D, 0x07, 0x0E, 0x00, 0x0C, 0x0F, 0x02, 0x03, 0x05, 
					0x0C, 0x07, 0x08, 0x0D, 0x03, 0x0B, 0x00, 0x0E, 0x06, 0x0F, 0x09, 0x04, 0x0A, 0x01, 0x05, 0x02, 
					0x0C, 0x06, 0x0D, 0x09, 0x0B, 0x00, 0x01, 0x02, 0x0F, 0x07, 0x03, 0x04, 0x0A, 0x0E, 0x08, 0x05, 
					0x03, 0x06, 0x01, 0x05, 0x0B, 0x0C, 0x08, 0x00, 0x0F, 0x0E, 0x09, 0x04, 0x07, 0x0A, 0x0D, 0x02, 
					0x0A, 0x07, 0x0B, 0x0F, 0x02, 0x08, 0x00, 0x0D, 0x0E, 0x0C, 0x01, 0x06, 0x09, 0x03, 0x05, 0x04, 
					0x0A, 0x0B, 0x0D, 0x04, 0x03, 0x08, 0x05, 0x09, 0x01, 0x00, 0x0F, 0x0C, 0x07, 0x0E, 0x02, 0x06, 
					0x0B, 0x04, 0x0D, 0x0F, 0x01, 0x06, 0x03, 0x0E, 0x07, 0x0A, 0x0C, 0x08, 0x09, 0x02, 0x05, 0x00, 
					0x09, 0x06, 0x07, 0x00, 0x01, 0x0A, 0x0D, 0x02, 0x03, 0x0E, 0x0F, 0x0C, 0x05, 0x0B, 0x04, 0x08, 
					0x0D, 0x0E, 0x05, 0x06, 0x01, 0x09, 0x08, 0x0C, 0x02, 0x0F, 0x03, 0x07, 0x0B, 0x04, 0x00, 0x0A, 
					0x09, 0x0F, 0x04, 0x00, 0x01, 0x06, 0x0A, 0x0E, 0x02, 0x03, 0x07, 0x0D, 0x05, 0x0B, 0x08, 0x0C, 
					0x03, 0x0E, 0x01, 0x0A, 0x02, 0x0C, 0x08, 0x04, 0x0B, 0x07, 0x0D, 0x00, 0x0F, 0x06, 0x09, 0x05, 
					0x07, 0x02, 0x0C, 0x06, 0x0A, 0x08, 0x0B, 0x00, 0x0F, 0x04, 0x03, 0x0E, 0x09, 0x01, 0x0D, 0x05, 
					0x0C, 0x04, 0x05, 0x09, 0x0A, 0x02, 0x08, 0x0D, 0x03, 0x0F, 0x01, 0x0E, 0x06, 0x07, 0x0B, 0x00, 
					0x0A, 0x08, 0x0E, 0x0D, 0x09, 0x0F, 0x03, 0x00, 0x04, 0x06, 0x01, 0x0C, 0x07, 0x0B, 0x02, 0x05, 
					0x03, 0x0C, 0x04, 0x0A, 0x02, 0x0F, 0x0D, 0x0E, 0x07, 0x00, 0x05, 0x08, 0x01, 0x06, 0x0B, 0x09, 
					0x0A, 0x0C, 0x01, 0x00, 0x09, 0x0E, 0x0D, 0x0B, 0x03, 0x07, 0x0F, 0x08, 0x05, 0x02, 0x04, 0x06, 
					0x0E, 0x0A, 0x01, 0x08, 0x07, 0x06, 0x05, 0x0C, 0x02, 0x0F, 0x00, 0x0D, 0x03, 0x0B, 0x04, 0x09, 
					0x03, 0x08, 0x0E, 0x00, 0x07, 0x09, 0x0F, 0x0C, 0x01, 0x06, 0x0D, 0x02, 0x05, 0x0A, 0x0B, 0x04, 
					0x03, 0x0A, 0x0C, 0x04, 0x0D, 0x0B, 0x09, 0x0E, 0x0F, 0x06, 0x01, 0x07, 0x02, 0x00, 0x05, 0x08 };

void ExpandKey(char *Key, char *ExpandedKey)
{
	/*
		.text:0041D220                 sub     esp, 8
		.text:0041D223                 push    ebx
		.text:0041D224                 push    ebp
		.text:0041D225                 push    esi
		.text:0041D226                 push    edi
		.text:0041D227                 mov     ebp, edx
		.text:0041D229                 mov     [esp+18h+var_8], ecx
		.text:0041D22D                 mov     esi, 21h
		.text:0041D232                 xor     edi, edi
		.text:0041D234 
		.text:0041D234 loc_41D234:                             ; CODE XREF: sub_41D220+5Fj

	*/

	int esi, ebx, eax, edx, ecx, var_4;
		
	esi = 0x21;

	for(int i = 0; i < 26; i++)
	{
		/*
			.text:0041D234                 lea     eax, [esi+7B5h]
			.text:0041D23A                 xor     edx, edx
			.text:0041D23C                 mov     ecx, 34h
			.text:0041D241                 div     ecx             ; divide eax by ecx
			.text:0041D243                 mov     ebx, edx
			.text:0041D245                 xor     edx, edx
		*/
		eax = esi + 0x7B5;
		edx = 0;
		ebx = eax % 0x34;

		/*		
			.text:0041D247                 lea     eax, [ebx+7B5h]
			.text:0041D24D                 div     ecx
			.text:0041D24F                 mov     eax, [esp+18h+var_8]
			.text:0041D253                 mov     esi, edx
			.text:0041D255                 xor     edx, edx
			
		*/

		//    eax             ecx
		esi = (ebx + 0x7B5) % 0x34;

		/*		
			.text:0041D257                 mov     dl, [edi+eax]
			.text:0041D25A                 mov     cl, ds:byte_432CB8[edx]
			.text:0041D260                 mov     byte ptr [esp+18h+var_4], cl
			.text:0041D264                 mov     ecx, 5
			.text:0041D269                 mov     eax, [esp+18h+var_4]
			.text:0041D26D                 and     eax, 0FFh
			.text:0041D272                 cdq
			.text:0041D273                 idiv    ecx
		*/
		edx = Key[i];
		ecx = Table[edx];

		var_4 = (byte)ecx;
		eax = var_4 & 0xFF;
		
		if((signed int)eax < 0) edx = ~0; else edx = 0; // cdq

		//	   ecx
		edx = eax % 5;
		eax /= 5;

		/*
			.text:0041D275                 inc     edi
			.text:0041D276                 cmp     edi, 1Ah
			.text:0041D279                 mov     [ebx+ebp], al
			.text:0041D27C                 mov     [esi+ebp], dl
			.text:0041D27F                 jb      short loc_41D234
		*/
		ExpandedKey[ebx] = (byte)eax;
		ExpandedKey[esi] = (byte)edx;
	}
	
	/*
		.text:0041D281                 pop     edi
		.text:0041D282                 pop     esi
		.text:0041D283                 pop     ebp
		.text:0041D284                 pop     ebx
		.text:0041D285                 add     esp, 8
		.text:0041D288                 retn
	*/
	return;
}

int sub_41D1E0(unsigned int u1, unsigned int u2, unsigned int *u3, unsigned int *u4, unsigned int u5)
{
	/*
		.text:0041D1E0                 push    ebp
		.text:0041D1E1                 push    esi
		.text:0041D1E2                 push    edi
		.text:0041D1E3                 push    ebx
	*/
	
	unsigned int ebx, edx, ebp;
	unsigned __int64 eax;

	/*
		.text:0041D1E4                 mov     ebx, edx
		.text:0041D1E6                 mov     eax, ecx
		.text:0041D1E8                 dec     eax
		.text:0041D1E9                 mov     ebp, 4
		.text:0041D1EE                 mul     ebp
	*/

	ebx = u2;
	eax = u1 - 1;
//	eax = 4 * eax; No need to adjust for dword

	u3 += eax;
	u4 += eax;
	
	/*
		.text:0041D1F0                 mov     esi, [esp+arg_0] ; esi = u3
		.text:0041D1F4                 mov     edi, [esp+arg_4] ; edi = u4
		.text:0041D1F8                 mov     ebp, [esp+arg_8] ; ebp = u5;
		.text:0041D1FC                 add     esi, eax
		.text:0041D1FE                 add     edi, eax
		.text:0041D200
		.text:0041D200 loc_41D200:                             ; CODE XREF: sub_41D1E0+34j
	*/

	ebp = u5;

	for(int i = u1; i; i--)
	{
		/*
			.text:0041D200                 mov     eax, [esi]
			.text:0041D202                 mul     ebx
			.text:0041D204                 add     eax, ebp
			.text:0041D206                 adc     edx, 0
			.text:0041D209                 mov     [edi], eax
		*/	
		
		eax = *u3;
		eax *= ebx;
		edx = (DWORD)(eax >> 32); // adc
		eax += ebp;
		*u4 = (DWORD)(eax & 0x00000000FFFFFFFF);
		
		/*
			.text:0041D20B                 mov     ebp, edx
			.text:0041D20D                 sub     esi, 4
			.text:0041D210                 sub     edi, 4
			.text:0041D213                 dec     ecx
			.text:0041D214                 jnz     short loc_41D200
		*/
		
		ebp = edx;
		
		u3--;
		u4--;
	}

	/*
		.text:0041D216                 mov     eax, ebp
	*/
	return ebp;

	/*
		.text:0041D218                 pop     ebx
		.text:0041D219                 pop     edi
		.text:0041D21A                 pop     esi
		.text:0041D21B                 pop     ebp
		.text:0041D21C                 retn    0Ch
	*/

}

void sub_41D3F0(unsigned int *vars)
{
	unsigned int ebp, esi, ecx, ebx;
	int edx, eax;
	unsigned int var_4, var_8;
	byte var_c;
	
	/*
	.text:0041D3F0                 sub     esp, 0Ch
	.text:0041D3F3                 push    ebx
	.text:0041D3F4                 push    ebp
	.text:0041D3F5                 push    esi
	.text:0041D3F6                 mov     ebp, 1Dh
	.text:0041D3FB                 push    edi
	.text:0041D3FC                 mov     edi, ecx
	.text:0041D3FE                 mov     [esp+1Ch+var_8], ebp
	.text:0041D402                 mov     eax, 1D0h
	*/

	ebp = 0x1D;
	var_8 = ebp;
	eax = 0x1D0;
	
	do
	{
		/*
		.text:0041D407 
		.text:0041D407 loc_41D407:                             ; CODE XREF: sub_41D3F0+143j
		.text:0041D407                 mov     esi, ebp
		.text:0041D409                 mov     ecx, ebp
		.text:0041D40B                 and     esi, 7
		.text:0041D40E                 mov     edx, 3
		.text:0041D413                 shr     ecx, 3
		.text:0041D416                 shl     esi, 2
		.text:0041D419                 mov     [esp+1Ch+var_4], ecx
		.text:0041D41D                 sub     edx, ecx
		*/
		esi = ebp;
		ecx = ebp;

		esi &= 7;
		edx = 3;
		ecx >>= 3;
		esi <<= 2;

		var_4 = ecx;
		edx -= ecx;

		/*
		.text:0041D41F                 mov     ebx, 0Fh
		.text:0041D424                 mov     ecx, esi
		.text:0041D426                 mov     edx, [edi+edx*4]
		.text:0041D429                 shl     ebx, cl
		.text:0041D42B                 and     edx, ebx
		.text:0041D42D                 shr     edx, cl
		.text:0041D42F                 cmp     eax, 1D0h
		.text:0041D434                 mov     byte ptr [esp+1Ch+var_C], dl
		.text:0041D438                 mov     edx, 1Dh
		.text:0041D43D                 jge     short loc_41D490
		*/

		ebx = 0x0F;
		ecx = esi;
		edx = vars[edx];
		ebx <<= (byte)ecx;
		
		unsigned int uedx = (unsigned int)edx;

		uedx &= ebx;
		uedx >>= (byte)ecx;

		var_c = (byte)uedx;
		edx = 0x1D;

		if(eax < 0x1D0)
		{
			do
			{
				/*
				.text:0041D43F                 mov     ebx, edx
				.text:0041D441                 mov     ecx, edx
				.text:0041D443                 shr     ebx, 3
				.text:0041D446                 mov     ebp, 3
				.text:0041D44B                 and     ecx, 7
				.text:0041D44E                 sub     ebp, ebx
				.text:0041D450                 mov     ebx, 0Fh
				.text:0041D455                 shl     ecx, 2
				.text:0041D458                 mov     ebp, [edi+ebp*4]
				.text:0041D45B                 shl     ebx, cl
				.text:0041D45D                 and     ebp, ebx
				.text:0041D45F                 xor     ebx, ebx
				.text:0041D461                 shr     ebp, cl
				.text:0041D463                 mov     ecx, [esp+1Ch+var_C]
				.text:0041D467                 and     ecx, 0FFh
				.text:0041D46D                 mov     bl, ds:byte_432AD8[ecx+eax]
				.text:0041D474                 and     ebp, 0FFh
				.text:0041D47A                 xor     ebp, ebx
				.text:0041D47C                 dec     edx
				.text:0041D47D                 mov     cl, ds:byte_432AD8[eax+ebp]
				.text:0041D484                 mov     ebp, [esp+1Ch+var_8]
				.text:0041D488                 cmp     edx, ebp
				.text:0041D48A                 mov     byte ptr [esp+1Ch+var_C], cl
				.text:0041D48E                 jg      short loc_41D43F
				*/

				ebx = edx;
				ecx = edx;
				ebx >>= 3;
				ebp = 3;
				ecx &= 7;
				ebp -= ebx;
				ebx = 0x0F;
				ecx <<= 2;
				ebp = vars[ebp];
				ebx <<= (byte)ecx;
				ebp &= ebx;
				ebx = 0;
				ebp >>= (byte)ecx;
				ecx = var_c;
				ecx &= 0xFF;
				ebx = Table2[ecx + eax]; // !!!!
				ebp &= 0xFF;
				ebp ^= ebx;
				edx--;
				ecx = Table2[eax + ebp];
				ebp = var_8;
				var_c = (byte)ecx;
			}
			while(edx > ebp);
		}

		/*
		.text:0041D490 
		.text:0041D490 loc_41D490:                             ; CODE XREF: sub_41D3F0+4Dj
		.text:0041D490                 lea     edx, [ebp-1]
		.text:0041D493                 test    edx, edx
		.text:0041D495                 mov     [esp+1Ch+var_8], edx
		.text:0041D499                 jl      short loc_41D4EA
		*/
		
		edx = ebp - 1;
		var_8 = edx;
		
		if(edx >= 0)
		{
			while(edx >= 0)
			{
				/*
				.text:0041D49B 
				.text:0041D49B loc_41D49B:                             ; CODE XREF: sub_41D3F0+F4j
				.text:0041D49B                 mov     ebx, edx
				.text:0041D49D                 mov     ecx, edx
				.text:0041D49F                 shr     ebx, 3
				.text:0041D4A2                 mov     ebp, 3
				.text:0041D4A7                 and     ecx, 7
				.text:0041D4AA                 sub     ebp, ebx
				.text:0041D4AC                 mov     ebx, 0Fh
				.text:0041D4B1                 shl     ecx, 2
				.text:0041D4B4                 mov     ebp, [edi+ebp*4]
				*/
			
				ebx = edx;
				ecx = edx;
				ebx >>= 3;
				ebp = 3;
				ecx &= 7;
				ebp -= ebx;
				ebx = 0x0F;
				ecx <<= 2;
				ebp = vars[ebp];

				/*
				.text:0041D4B7                 shl     ebx, cl
				.text:0041D4B9                 and     ebp, ebx
				.text:0041D4BB                 xor     ebx, ebx
				.text:0041D4BD                 shr     ebp, cl
				.text:0041D4BF                 mov     ecx, [esp+1Ch+var_C]
				.text:0041D4C3                 and     ecx, 0FFh
				.text:0041D4C9                 mov     bl, ds:byte_432AD8[ecx+eax]
				.text:0041D4D0                 and     ebp, 0FFh
				.text:0041D4D6                 xor     ebp, ebx
				.text:0041D4D8                 dec     edx
				.text:0041D4D9                 mov     cl, ds:byte_432AD8[eax+ebp]
				.text:0041D4E0                 mov     byte ptr [esp+1Ch+var_C], cl
				.text:0041D4E4                 jns     short loc_41D49B
				*/

				ebx <<= (byte)ecx;
				ebp &= ebx;
				ebx = 0;
				ebp >>= (byte)ecx;
				ecx = var_c;
				ecx &= 0xFF;
				ebx = Table2[eax + ecx];
				ebp &= 0xFF;
				ebp ^= ebx;
				edx--;
				ecx = Table2[eax + ebp];
				var_c = (byte)ecx;	
			}

			// .text:0041D4E6                 mov     edx, [esp+1Ch+var_8]
			edx = var_8;
		}


		/*
		.text:0041D4EA 
		.text:0041D4EA loc_41D4EA:                             ; CODE XREF: sub_41D3F0+A9j
		.text:0041D4EA                 mov     ecx, [esp+1Ch+var_4]
		.text:0041D4EE                 mov     ebp, 3
		.text:0041D4F3                 sub     ebp, ecx
		.text:0041D4F5                 mov     ecx, [esp+1Ch+var_C]
		.text:0041D4F9                 and     ecx, 0FFh
		.text:0041D4FF                 mov     bl, ds:byte_432AD8[ecx+eax]
		.text:0041D506                 mov     ecx, esi
		.text:0041D508                 and     ebx, 0Fh
		.text:0041D50B                 shl     ebx, cl
		*/

		ecx = var_4;
		ebp = 3;
		ebp -= ecx;
		ecx = var_c; 
		// ecx &= 0xFF; // var_c is already byte
		ebx = Table2[ecx + eax];
		ecx = esi;
		ebx &= 0x0F;
		ebx <<= (byte)ecx;
		
		/*
		.text:0041D50D                 mov     ecx, 0Fh
		.text:0041D512                 mov     [esp+1Ch+var_4], ecx
		.text:0041D516                 mov     ecx, esi
		.text:0041D518                 mov     esi, [esp+1Ch+var_4]
		.text:0041D51C                 shl     esi, cl
		.text:0041D51E                 mov     ecx, [edi+ebp*4]
		.text:0041D521                 not     esi
		.text:0041D523                 and     esi, ecx
		.text:0041D525                 or      ebx, esi
		.text:0041D527                 sub     eax, 10h
		.text:0041D52A                 mov     [edi+ebp*4], ebx
		.text:0041D52D                 mov     ebp, edx
		.text:0041D52F                 mov     [esp+1Ch+var_8], ebp
		.text:0041D533                 jns     loc_41D407      ; Jump if high order bit of result is 0 (if !SF)
		*/

		ecx = 0x0F;
		var_4 = ecx;
		ecx = esi;
		esi = var_4;
		esi <<= (byte)ecx;
		ecx = vars[ebp];
		esi = ~esi;
		esi &= ecx;
		ebx |= esi;
		eax -= 0x10;
		vars[ebp] = ebx;
		ebp = edx;
		var_8 = ebp;
	}
	while(eax >= 0);

	/*
	.text:0041D539                 pop     edi
	.text:0041D53A                 pop     esi
	.text:0041D53B                 pop     ebp
	.text:0041D53C                 pop     ebx
	.text:0041D53D                 add     esp, 0Ch
	*/

	return;
}


void sub_41D350(unsigned int *vars)
{
	unsigned int eax, ebx, ecx, edx, ebp, esp, edi;
	int esi;
	unsigned int VarsCopy[4], *HashArray;

	/*
	.text:0041D350                 sub     esp, 14h
	.text:0041D353                 mov     [esp+14h+var_14], ecx
	.text:0041D357                 mov     eax, [ecx]
	.text:0041D359                 mov     [esp+14h+var_10], eax
	.text:0041D35D                 push    ebx
	.text:0041D35E                 mov     edx, [ecx+4]
	.text:0041D361                 push    ebp
	.text:0041D362                 push    esi
	.text:0041D363                 push    edi
	.text:0041D364                 mov     eax, [ecx+8]
	.text:0041D367                 xor     esi, esi
	.text:0041D369                 mov     [esp+24h+var_C], edx
	.text:0041D36D                 mov     [esp+24h+var_8], eax
	.text:0041D371                 mov     ecx, [ecx+0Ch]
	.text:0041D374                 xor     edi, edi
	.text:0041D376                 mov     [esp+24h+var_4], ecx
	*/

	HashArray = vars;

	memcpy(VarsCopy, vars, sizeof(int) * 4);

	esi = 0;
	
	for(edi = 0; edi < 0x78; edi++)
	{
		/*
		.text:0041D37A 
		.text:0041D37A loc_41D37A:                             ; CODE XREF: sub_41D350+8Ej
		.text:0041D37A                 mov     ebx, edi
		.text:0041D37C                 mov     edx, 3
		.text:0041D381                 shr     ebx, 5
		.text:0041D384                 sub     edx, ebx
		.text:0041D386                 mov     ebx, esi
		.text:0041D388                 shr     ebx, 5
		.text:0041D38B                 shl     ebx, 2
		.text:0041D38E                 lea     ebp, [esp+24h+var_4]
		*/

		ebx = edi;
		edx = 3;
		ebx >>= 5;
		edx -= ebx;
		ebx = esi;
		ebx >>= 5;
		ebx <<= 2;
		ebp = (unsigned int)&VarsCopy[3];

		/*
		.text:0041D392                 mov     ecx, esi
		.text:0041D394                 sub     ebp, ebx
		.text:0041D396                 and     ecx, 1Fh
		.text:0041D399                 mov     ebx, 1
		.text:0041D39E                 mov     eax, edi
		.text:0041D3A0                 mov     ebp, [ebp+0]
		.text:0041D3A3                 and     eax, 1Fh
		.text:0041D3A6                 shl     ebx, cl
		.text:0041D3A8                 add     esi, 0Bh
		.text:0041D3AB                 and     ebp, ebx
		.text:0041D3AD                 mov     ebx, 1
		.text:0041D3B2                 shr     ebp, cl
		.text:0041D3B4                 mov     ecx, eax
		.text:0041D3B6                 mov     eax, [esp+24h+var_14]
		*/

		ecx = esi;
		ebp -= ebx;
		ecx &= 0x1F;
		ebx = 1;
		eax = edi;
		ebp = *(int*)ebp;
		eax &= 0x1F;
		ebx <<= (byte)ecx;
		esi += 0x0B;
		ebp &= ebx;
		ebx = 1;
		ebp >>= (byte)ecx;
		ecx = eax;
		eax = (unsigned int)HashArray;


		/*
		.text:0041D3BA                 shl     ebx, cl
		.text:0041D3BC                 and     ebp, 1
		.text:0041D3BF                 shl     ebp, cl
		.text:0041D3C1                 mov     ecx, [eax+edx*4]
		.text:0041D3C4                 not     ebx
		.text:0041D3C6                 and     ebx, ecx
		.text:0041D3C8                 or      ebp, ebx
		.text:0041D3CA                 cmp     esi, 78h
		.text:0041D3CD                 mov     [eax+edx*4], ebp
		*/

		ebx <<= (byte)ecx;
		ebp &= 1;
		ebp <<= (byte)ecx;
		ecx = *((unsigned int*)eax + edx);
		ebx = ~ebx;
		ebx &= ecx;
		ebp |= ebx;
		*((unsigned int*)eax + edx) = ebp;
	
		/*
		.text:0041D3D0                 jb      short loc_41D3DA
		.text:0041D3D2                 sub     esi, 78h
		.text:0041D3D5                 jns     short loc_41D3DA
		.text:0041D3D7                 add     esi, 0Bh
		.text:0041D3DA 
		.text:0041D3DA loc_41D3DA:                             ; CODE XREF: sub_41D350+80j
		.text:0041D3DA                                         ; sub_41D350+85j
		.text:0041D3DA                 inc     edi
		.text:0041D3DB                 cmp     edi, 78h
		.text:0041D3DE                 jb      short loc_41D37A
		*/
	
		if(esi >= 0x78)
		{
			esi -= 0x78;

			if(esi < 0)
			{
				esi += 0x0B;
			}
		}
	}

	/*|
	.text:0041D3E0                 pop     edi
	.text:0041D3E1                 pop     esi
	.text:0041D3E2                 pop     ebp
	.text:0041D3E3                 pop     ebx
	.text:0041D3E4                 add     esp, 14h
	.text:0041D3E7                 retn
	*/

	return;
}

void DecodeCDKey(char *Key, int *Unk1, byte *Unk2, int *Unk3)
{
	/*
		.text:0041D290                 sub     esp, 44h
		.text:0041D293                 test    ecx, ecx
		.text:0041D295                 push    ebx
		.text:0041D296                 push    ebp
		.text:0041D297                 mov     ebp, edx
		.text:0041D299                 jz      Return          ; Return if CDKey is NULL
		.text:0041D29F                 mov     ebx, [esp+4Ch+Unknown2]
		.text:0041D2A3                 test    ebx, ebx
		.text:0041D2A5                 jz      Return          ; Return if Unk2 is NULL
	*/
	
	if(!Key || !Unk2)
	{
		return;
	}

	/*
		.text:0041D2AB                 push    esi
		.text:0041D2AC                 push    edi
		.text:0041D2AD                 lea     edx, [esp+54h+Unknown] ; Unknown
		.text:0041D2B1                 call    sub_41D220      ; Looks like it gets something from the key. Perhaps a checksum?
		.text:0041D2B1                                         ; ecx == key, edx == LPDWORD
	*/

	char ExpandedKey[0x35];
	ExpandedKey[0] = 0;
	ExpandKey(Key, ExpandedKey+1);

		/*
		.text:0041D2B6                 xor     eax, eax
		.text:0041D2B8                 mov     esi, 34h
		.text:0041D2BD                 mov     [esp+54h+var_40], eax
		.text:0041D2C1                 lea     edi, [esp+53h]
		.text:0041D2C5                 mov     [esp+54h+var_3C], eax
		.text:0041D2C9                 mov     [esp+54h+var_44], 0
		.text:0041D2D1                 mov     [esp+54h+var_38], eax
		.text:0041D2D5                 sub     edi, esi
	*/	
	/*
		.text:0041D2D7 
		.text:0041D2D7 loc_41D2D7:                             ; CODE XREF: DecodeCDKey+69j
	*/
	/*
		.text:0041D2D7                 xor     ecx, ecx
		.text:0041D2D9                 lea     edx, [esp+54h+var_44]
		.text:0041D2DD                 mov     cl, [edi+esi]
		.text:0041D2E0                 lea     eax, [esp+54h+var_44]
		.text:0041D2E4                 push    ecx
		.text:0041D2E5                 push    edx
		.text:0041D2E6                 push    eax
		.text:0041D2E7                 mov     edx, 5
		.text:0041D2EC                 mov     ecx, 4
		.text:0041D2F1                 call    sub_41D1E0
		.text:0041D2F6                 dec     esi
		.text:0041D2F7                 test    esi, esi
		.text:0041D2F9                 jg      short loc_41D2D7
	*/

	unsigned int vars[4] = {0};
    for(int i = 0x34; i > 0; i--)
	{
		sub_41D1E0(4, 5, vars, vars, ExpandedKey[i]);
	}

	/*
	.text:0041D2FB                 lea     ecx, [esp+54h+var_44]
	.text:0041D2FF                 call    sub_41D3F0
	*/
	sub_41D3F0(vars);
	/*
	.text:0041D304                 lea     ecx, [esp+54h+var_44]
	.text:0041D308                 call    sub_41D350
	*/
	sub_41D350(vars);

	/*
	.text:0041D30D                 mov     eax, [esp+54h+var_44]
	.text:0041D311                 mov     ecx, eax
	.text:0041D313                 and     eax, 3FFh
	.text:0041D318                 shr     ecx, 0Ah
	.text:0041D31B                 mov     [ebp+0], ecx
	*/
	
	unsigned int ecx, eax, edx;

	eax = vars[0];
	ecx = eax;
	eax &= 0x3FF;
	ecx >>= 0x0A;
	*Unk1 = ecx;

	/*
	.text:0041D31E                 mov     ecx, [esp+54h+var_40]
	.text:0041D322                 mov     edx, ecx
	.text:0041D324                 pop     edi
	.text:0041D325                 shl     eax, 10h
	.text:0041D328                 shr     edx, 10h
	.text:0041D32B                 or      eax, edx
	.text:0041D32D                 mov     edx, [esp+50h+Unknown3]
	.text:0041D331                 pop     esi
	.text:0041D332                 mov     [edx], eax
	*/

	ecx = vars[1];
	edx = ecx;
	eax <<= 0x10;
	edx >>= 0x10;
	eax |= edx;
	*Unk3 = eax;

	/*
	.text:0041D334                 mov     eax, [esp+4Ch+var_3C]
	.text:0041D338                 mov     [ebx], cx
	.text:0041D33B                 mov     ecx, [esp+4Ch+var_38]
	.text:0041D33F                 mov     [ebx+2], eax
	.text:0041D342                 mov     [ebx+6], ecx
	.text:0041D345
	*/

	eax = vars[2];
	*(short *)Unk2 = (short)ecx;
	ecx = vars[3];
	
	*(unsigned int*)(Unk2 + 2) = eax;
	*(unsigned int*)(Unk2 + 6) = ecx;
	
	/*
	.text:0041D345 Return:                                 ; CODE XREF: DecodeCDKey+9j
	.text:0041D345                                         ; DecodeCDKey+15j
	.text:0041D345                 pop     ebp
	.text:0041D346                 pop     ebx
	.text:0041D347                 add     esp, 44h
	.text:0041D34A                 retn    8
	*/
	return;
}

int main(int argc, char **argv)
{
	char TheKey[] = "XXXXXXXXXXXXXXXXXXXXXXXXXX";

	int u1, u3;
	byte u2[10];
	DecodeCDKey(TheKey, &u1, u2, &u3);
	
	printf("Output:\t\t%8.8X\t", u1);

	for(int i=0; i < 10; i++)
	{
		printf("%2.2X", u2[i]);
	}

	printf("\t%8.8X\n", u3);

	printf("Expected:	XXXXXXXX	XXXXXXXXXXXXXXXXXXXX	XXXXXXXX");

	getchar();
	return 0;
}
