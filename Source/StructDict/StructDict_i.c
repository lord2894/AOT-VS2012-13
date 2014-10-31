

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 31 12:28:22 2014
 */
/* Compiler settings for StructDict.idl:
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

MIDL_DEFINE_GUID(IID, IID_IDomain,0xFD4C1F31,0x2608,0x11D3,0xA7,0x8E,0x90,0x89,0xCA,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_ISignat,0x3F269911,0x246D,0x11D3,0xA7,0x8C,0x06,0x79,0x93,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_IField,0xFD4C1F35,0x2608,0x11D3,0xA7,0x8E,0x90,0x89,0xCA,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_ITextField,0xB3C7D666,0x2C57,0x11D3,0xA7,0xA1,0x80,0xF9,0xE5,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_ITempArticle,0xB3C7D664,0x2C57,0x11D3,0xA7,0xA1,0x80,0xF9,0xE5,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_IDictionary,0xFCD1516D,0x23C4,0x11D3,0xA7,0x8B,0x0E,0xEA,0x0E,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, LIBID_STRUCTDICTLib,0xFCD15161,0x23C4,0x11D3,0xA7,0x8B,0x0E,0xEA,0x0E,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_Dictionary,0xFCD1516E,0x23C4,0x11D3,0xA7,0x8B,0x0E,0xEA,0x0E,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_Signat,0x3F269912,0x246D,0x11D3,0xA7,0x8C,0x06,0x79,0x93,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_Domain,0xFD4C1F32,0x2608,0x11D3,0xA7,0x8E,0x90,0x89,0xCA,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_Field,0xFD4C1F36,0x2608,0x11D3,0xA7,0x8E,0x90,0x89,0xCA,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_TempArticle,0xB3C7D665,0x2C57,0x11D3,0xA7,0xA1,0x80,0xF9,0xE5,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_TextField,0xB3C7D667,0x2C57,0x11D3,0xA7,0xA1,0x80,0xF9,0xE5,0x00,0x00,0x00);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



