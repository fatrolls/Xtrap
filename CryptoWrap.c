/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int __cdecl UniperEncFunc_Buf(unsigned __int8 *, int, unsigned __int8 *, int); // idb
int __cdecl UniperDecFunc_Buf(unsigned __int8 *, int, unsigned __int8 *, int); // idb
// int __cdecl UniperEncFunc(unsigned __int8 *, int, unsigned __int8 *, int, int); idb
// int __cdecl UniperDecFunc(unsigned __int8 *, int, unsigned __int8 *, int, int); idb


//----- (00000000) --------------------------------------------------------
int __cdecl UniperEncFunc_Buf(unsigned __int8 *a1, int a2, unsigned __int8 *a3, int a4)
{
  int v6; // eax

  do
  {
    if ( a2 < 4096 )
    {
      v6 = a2;
      a2 = 0;
    }
    else
    {
      v6 = 4096;
      a2 -= 4096;
    }
    if ( !UniperEncFunc(a1, v6, a3, a4, 3) )
      return 0;
    a1 += 4096;
  }
  while ( a2 );
  return 1;
}

//----- (00000060) --------------------------------------------------------
int __cdecl UniperDecFunc_Buf(unsigned __int8 *a1, int a2, unsigned __int8 *a3, int a4)
{
  int v6; // eax

  do
  {
    if ( a2 < 4096 )
    {
      v6 = a2;
      a2 = 0;
    }
    else
    {
      v6 = 4096;
      a2 -= 4096;
    }
    if ( !UniperDecFunc(a1, v6, a3, a4, 3) )
      return 0;
    a1 += 4096;
  }
  while ( a2 );
  return 1;
}

// nfuncs=4 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled