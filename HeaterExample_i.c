

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for HeaterExample.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IHeaterExampleOperation,0xcc526f4e,0xe068,0x4eff,0xa5,0x59,0xf7,0xac,0x6a,0x06,0xcc,0xe0);


MIDL_DEFINE_GUID(IID, IID_IPortsArray,0xf21f264b,0x40f6,0x4f36,0xb9,0x5b,0x0a,0x1d,0x2f,0xd8,0x33,0xe9);


MIDL_DEFINE_GUID(IID, IID_IMaterialPort,0x58b6a235,0xe3cc,0x415f,0xac,0x11,0xbc,0x51,0x9c,0xa4,0x54,0xa5);


MIDL_DEFINE_GUID(IID, IID_IParametersArray,0x454939a2,0x1064,0x4d89,0xa5,0x47,0x34,0x38,0x92,0x27,0xf7,0xa5);


MIDL_DEFINE_GUID(IID, LIBID_HeaterExampleLib,0xa488d911,0x5b85,0x497a,0x80,0xa4,0x2a,0x08,0x51,0x46,0xbd,0xc6);


MIDL_DEFINE_GUID(CLSID, CLSID_HeaterExampleOperation,0xfd8bf0be,0x74a9,0x45c2,0xad,0x39,0xd0,0x66,0xc7,0x4b,0x98,0xed);


MIDL_DEFINE_GUID(CLSID, CLSID_PortsArray,0xc5d168d3,0x0b5b,0x4a87,0xb9,0x98,0xac,0x05,0x55,0x5c,0x31,0x0d);


MIDL_DEFINE_GUID(CLSID, CLSID_MaterialPort,0xe78b3378,0x5eb6,0x41d2,0xbc,0x95,0x37,0x50,0xfa,0xe5,0x51,0x10);


MIDL_DEFINE_GUID(CLSID, CLSID_ParametersArray,0xbfcb1265,0xb5dc,0x497d,0xb4,0xce,0xd7,0x00,0xf8,0xc5,0x8e,0x29);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



