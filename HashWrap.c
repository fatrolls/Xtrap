/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int __cdecl SHA1Digest_Buf(int a1, int a2, int a3);
// int __cdecl SHA1_Final(_DWORD, _DWORD); weak
// int __cdecl SHA1_Update(_DWORD, _DWORD, _DWORD); weak
// int __cdecl SHA1_Init(_DWORD); weak


//----- (00000000) --------------------------------------------------------
int __cdecl SHA1Digest_Buf(int a1, int a2, int a3)
{
  int v5; // eax
  char v7[96]; // [esp+8h] [ebp-60h] BYREF

  SHA1_Init(v7);
  do
  {
    if ( a2 < 4096 )
    {
      v5 = a2;
      a2 = 0;
    }
    else
    {
      v5 = 4096;
      a2 -= 4096;
    }
    SHA1_Update(v7, a1, v5);
    a1 += 4096;
  }
  while ( a2 );
  SHA1_Final(a3, v7);
  return 1;
}
// 70: using guessed type int __cdecl SHA1_Final(_DWORD, _DWORD);
// 74: using guessed type int __cdecl SHA1_Update(_DWORD, _DWORD, _DWORD);
// 78: using guessed type int __cdecl SHA1_Init(_DWORD);

// nfuncs=4 queued=1 decompiled=1 lumina nreq=0 worse=0 better=0
// ALL OK, 1 function(s) have been successfully decompiled