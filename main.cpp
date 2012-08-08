#define WIN32_LEAN_AND_MEAN 
#include <windows.h> 
#include <stdio.h>

const BYTE KeyTable[256] = { 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x02, 0x03, 0x04, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0xFF, 0x0D, 0x0E, 0xFF, 0x0F, 0x10, 0xFF, 
0x11, 0xFF, 0x12, 0xFF, 0x13, 0xFF, 0x14, 0x15, 0x16, 0x17, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0xFF, 0x0D, 0x0E, 0xFF, 0x0F, 0x10, 0xFF, 
0x11, 0xFF, 0x12, 0xFF, 0x13, 0xFF, 0x14, 0x15, 0x16, 0x17, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF 
}; 

const BYTE TranslateTable[480] = { 
0x09, 0x04, 0x07, 0x0F, 0x0D, 0x0A, 0x03, 0x0B, 0x01, 0x02, 0x0C, 0x08, 0x06, 0x0E, 0x05, 0x00, 
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
0x03, 0x0A, 0x0C, 0x04, 0x0D, 0x0B, 0x09, 0x0E, 0x0F, 0x06, 0x01, 0x07, 0x02, 0x00, 0x05, 0x08 
}; 

#define W3_KEYLEN 26 
#define W3_BUFLEN (W3_KEYLEN*2) 

void TableLookup(const char *key, BYTE *buf); 
DWORD Mult(DWORD Rounds, DWORD Mulx, DWORD* BufA, DWORD* BufB, DWORD DecodedByte); 
void DecodeKeyTablePass1(DWORD *KeyTable); 
void DecodeKeyTablePass2(DWORD *KeyTable); 

void DecodeWar3CDkey(const char *Cdkey, DWORD *ProdID, DWORD *Val1, BYTE *Val2) 
{ 
    BYTE Table[W3_BUFLEN]; 
    DWORD Values[4]; 

    char KeyBuf[W3_KEYLEN + 1]; 
    strncpy(KeyBuf, Cdkey, W3_KEYLEN); 
    ZeroMemory(Values, sizeof(Values)); 

    TableLookup(_strupr(KeyBuf), Table); 

    for(int i = W3_BUFLEN; i > 0; i--) 
        Mult(4, 5, Values, Values, Table[i - 1]); 


    DecodeKeyTablePass1(Values); 

	for(int i = 0; i < 4; i++)
		printf("%08X ", Values[i]);
	printf("\n");

    DecodeKeyTablePass2(Values); 

	for(int i = 0; i < 4; i++)
		printf("%08X ", Values[i]);
	printf("\n");


    *ProdID = Values[0] >> 0x0a; 
    *Val1 = ((Values[0] & 0x03FF) << 0x10) | (Values[1] >> 0x10); 

    *(WORD *)Val2 = (WORD)Values[1]; 
    *(DWORD *)(Val2 + 2) = Values[2]; 
    *(DWORD *)(Val2 + 6) = Values[3]; 
} 

void TableLookup(const char *key, BYTE *buf) 
{ 
    DWORD a, b = 0x21; 
    BYTE decode; 

    for(int i = 0; i < W3_KEYLEN; i++) 
    { 
        a = (b + 0x07B5) % W3_BUFLEN; 
        b = (a + 0x07B5) % W3_BUFLEN; 
        decode = KeyTable[key[i]]; 
        buf[a] = decode / 5; 
        buf[b] = decode % 5; 
    } 
} 


DWORD Mult(DWORD Rounds, DWORD Mulx, DWORD* BufA, DWORD* BufB, DWORD DecodedByte) 
{ 
    BufA += Rounds - 1; 
    BufB += Rounds - 1; 

    while(Rounds--) 
    { 
        ULONGLONG edxeax = UInt32x32To64(*BufA--, Mulx); 
        *BufB-- = DecodedByte + (DWORD)edxeax; 
        DecodedByte = (DWORD)(edxeax >> 32); 
    } 

    return DecodedByte; 
} 

void DecodeKeyTablePass1(DWORD *KeyTable) 
{ 
    unsigned int ebx, ecx, esi, ebp; 
    unsigned int var_C, var_4; 
    int var_8 = 29; 

    for(int i = 464; i >= 0; i -= 16) 
    { 
        esi = (var_8 & 7) << 2; 
        var_4 = var_8 >> 3; 
        var_C = (KeyTable[3 - var_4] & (0x0F << esi)) >> esi; 
        
        if(i < 464) 
        { 
            for(int j = 29; j > var_8; j--) 
            { 
                ecx = (j & 7) << 2; 
                ebp = (KeyTable[0x03 - (j >> 3)] & (0x0F << ecx)) >> ecx; 
                var_C = TranslateTable[ebp^TranslateTable[var_C + i] + i]; 
            } 
        } 
        
        for(int j = --var_8; j >= 0; j--) 
        { 
            ecx = (j & 7) << 2; 
            ebp = (KeyTable[0x03 - (j >> 3)] & (0x0F << ecx)) >> ecx; 
            var_C = TranslateTable[ebp^TranslateTable[var_C + i] + i]; 
        } 
    
        int index = 3 - var_4; 
        ebx = (TranslateTable[var_C + i] & 0x0F) << esi;     
        KeyTable[index] = ebx | ~(0x0F << esi) & KeyTable[index]; 
    } 
} 

void DecodeKeyTablePass2(DWORD *KeyTable) 
{ 
    DWORD eax, edx, ecx, edi, esi, ebp; 
    DWORD Copy[4]; 
    Copy[0] = KeyTable[0]; 
    Copy[1] = KeyTable[1]; 
    Copy[2] = KeyTable[2]; 
    Copy[3] = KeyTable[3]; 
    esi = 0; 

    for(edi = 0; edi < 120; edi++) 
    { 
        eax = edi & 0x1F; 
        ecx = esi & 0x1F; 
        edx = 3 - (edi >> 5); 
        ebp = *(DWORD *)((BYTE *)(Copy+3) - ((esi >> 5) << 2)); 

		printf("%02X ", ebp);

        ebp = (ebp & (1 << ecx)) >> ecx; 
        KeyTable[edx] = ((ebp & 1) << eax) | (~(1 << eax) & KeyTable[edx]); 
        esi += 0x0B; 
        if(esi >= 120) 
            esi -= 120; 
    } 
}

int main(int argc, char **argv)
{
	char TheKey[] = "XXXXXXXXXXXXXXXXXXXXXXXXXX";

	DWORD u1, u3;
	BYTE u2[10];
	//void DecodeWar3CDkey(const char *Cdkey, DWORD *ProdID, DWORD *Val1, BYTE *Val2) 
	DecodeWar3CDkey(TheKey, &u1, &u3, u2);
	
	printf("Output:\t\t%8.8X\t", u1);

	for(int i=0; i < 10; i++)
	{
		printf("%2.2X", u2[i]);
	}

	printf("\t%8.8X\n", u3);

	printf("Expected:	00000012	XXXXXXXXXXXXXXXXXXXX	XXXXXXXX");

	getchar();
	return 0;
}