

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 31 12:40:02 2014
 */
/* Compiler settings for seman.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IComSemWord,0xBCE1821B,0xEC2B,0x4E22,0x87,0x7A,0x69,0xE9,0x60,0xBF,0x07,0xEE);


MIDL_DEFINE_GUID(IID, IID_IComSemNode,0xA6AE5BC7,0x9CDD,0x468E,0x8E,0x10,0xEA,0x37,0x35,0x0A,0x6C,0xEC);


MIDL_DEFINE_GUID(IID, IID_IComSemRelation,0x25C2205C,0x8D1F,0x45C1,0x97,0x7E,0xD7,0xCF,0x7B,0x48,0x6A,0x12);


MIDL_DEFINE_GUID(IID, IID_ISemStructure,0x6E6815E7,0x3F0B,0x4FA2,0x9B,0x56,0xFF,0x1C,0x1A,0xC5,0x13,0x6A);


MIDL_DEFINE_GUID(IID, LIBID_SEMANLib,0xBD87FBF9,0x4917,0x4C26,0xA8,0x5C,0x1B,0x4E,0x86,0xD3,0x90,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_SemStructure,0xDE070989,0xF926,0x404D,0xB5,0xEC,0x57,0x90,0xE2,0x8E,0x12,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_ComSemNode,0x2FA2ACDC,0x1A64,0x448F,0xBA,0xCE,0xEB,0x5A,0xE4,0x12,0x22,0x71);


MIDL_DEFINE_GUID(CLSID, CLSID_ComSemWord,0x2E3267A1,0xD488,0x4904,0x80,0x30,0x61,0x92,0x9C,0xB1,0xE5,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_ComSemRelation,0x576AB855,0xE069,0x4C26,0x84,0x4B,0x72,0xF9,0xD0,0xDF,0x2B,0xA9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



