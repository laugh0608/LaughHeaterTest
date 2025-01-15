

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "HeaterExample_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _HeaterExample_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } HeaterExample_MIDL_TYPE_FORMAT_STRING;

typedef struct _HeaterExample_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } HeaterExample_MIDL_PROC_FORMAT_STRING;

typedef struct _HeaterExample_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } HeaterExample_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const HeaterExample_MIDL_TYPE_FORMAT_STRING HeaterExample__MIDL_TypeFormatString;
extern const HeaterExample_MIDL_PROC_FORMAT_STRING HeaterExample__MIDL_ProcFormatString;
extern const HeaterExample_MIDL_EXPR_FORMAT_STRING HeaterExample__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IHeaterExampleOperation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHeaterExampleOperation_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPortsArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPortsArray_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMaterialPort_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMaterialPort_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IParametersArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IParametersArray_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const HeaterExample_MIDL_PROC_FORMAT_STRING HeaterExample__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const HeaterExample_MIDL_TYPE_FORMAT_STRING HeaterExample__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IHeaterExampleOperation, ver. 0.0,
   GUID={0xcc526f4e,0xe068,0x4eff,{0xa5,0x59,0xf7,0xac,0x6a,0x06,0xcc,0xe0}} */

#pragma code_seg(".orpc")
static const unsigned short IHeaterExampleOperation_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IPortsArray, ver. 0.0,
   GUID={0xf21f264b,0x40f6,0x4f36,{0xb9,0x5b,0x0a,0x1d,0x2f,0xd8,0x33,0xe9}} */

#pragma code_seg(".orpc")
static const unsigned short IPortsArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IMaterialPort, ver. 0.0,
   GUID={0x58b6a235,0xe3cc,0x415f,{0xac,0x11,0xbc,0x51,0x9c,0xa4,0x54,0xa5}} */

#pragma code_seg(".orpc")
static const unsigned short IMaterialPort_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IParametersArray, ver. 0.0,
   GUID={0x454939a2,0x1064,0x4d89,{0xa5,0x47,0x34,0x38,0x92,0x27,0xf7,0xa5}} */

#pragma code_seg(".orpc")
static const unsigned short IParametersArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IHeaterExampleOperation, ver. 0.0,
   GUID={0xcc526f4e,0xe068,0x4eff,{0xa5,0x59,0xf7,0xac,0x6a,0x06,0xcc,0xe0}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IHeaterExampleOperation_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IHeaterExampleOperation_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IHeaterExampleOperation_FormatStringOffsetTable[-3],
    HeaterExample__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IHeaterExampleOperation_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IHeaterExampleOperation_ProxyInfo =
    {
    &Object_StubDesc,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IHeaterExampleOperation_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IHeaterExampleOperation_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IHeaterExampleOperation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IHeaterExampleOperation_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IHeaterExampleOperation_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IHeaterExampleOperationProxyVtbl = 
{
    0,
    &IID_IHeaterExampleOperation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IHeaterExampleOperation_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IHeaterExampleOperationStubVtbl =
{
    &IID_IHeaterExampleOperation,
    &IHeaterExampleOperation_ServerInfo,
    7,
    &IHeaterExampleOperation_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPortsArray, ver. 0.0,
   GUID={0xf21f264b,0x40f6,0x4f36,{0xb9,0x5b,0x0a,0x1d,0x2f,0xd8,0x33,0xe9}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IPortsArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IPortsArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IPortsArray_FormatStringOffsetTable[-3],
    HeaterExample__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IPortsArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IPortsArray_ProxyInfo =
    {
    &Object_StubDesc,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IPortsArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IPortsArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IPortsArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IPortsArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IPortsArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IPortsArrayProxyVtbl = 
{
    0,
    &IID_IPortsArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPortsArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IPortsArrayStubVtbl =
{
    &IID_IPortsArray,
    &IPortsArray_ServerInfo,
    7,
    &IPortsArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMaterialPort, ver. 0.0,
   GUID={0x58b6a235,0xe3cc,0x415f,{0xac,0x11,0xbc,0x51,0x9c,0xa4,0x54,0xa5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IMaterialPort_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IMaterialPort_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IMaterialPort_FormatStringOffsetTable[-3],
    HeaterExample__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IMaterialPort_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IMaterialPort_ProxyInfo =
    {
    &Object_StubDesc,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IMaterialPort_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IMaterialPort_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IMaterialPort_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IMaterialPort_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IMaterialPort_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IMaterialPortProxyVtbl = 
{
    0,
    &IID_IMaterialPort,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMaterialPort_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMaterialPortStubVtbl =
{
    &IID_IMaterialPort,
    &IMaterialPort_ServerInfo,
    7,
    &IMaterialPort_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IParametersArray, ver. 0.0,
   GUID={0x454939a2,0x1064,0x4d89,{0xa5,0x47,0x34,0x38,0x92,0x27,0xf7,0xa5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IParametersArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IParametersArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IParametersArray_FormatStringOffsetTable[-3],
    HeaterExample__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IParametersArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IParametersArray_ProxyInfo =
    {
    &Object_StubDesc,
    HeaterExample__MIDL_ProcFormatString.Format,
    &IParametersArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IParametersArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IParametersArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    HeaterExample__MIDL_ProcFormatString.Format,
    (unsigned short *) &IParametersArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IParametersArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IParametersArrayProxyVtbl = 
{
    0,
    &IID_IParametersArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IParametersArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IParametersArrayStubVtbl =
{
    &IID_IParametersArray,
    &IParametersArray_ServerInfo,
    7,
    &IParametersArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    HeaterExample__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _HeaterExample_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMaterialPortProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPortsArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHeaterExampleOperationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IParametersArrayProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _HeaterExample_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMaterialPortStubVtbl,
    ( CInterfaceStubVtbl *) &_IPortsArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IHeaterExampleOperationStubVtbl,
    ( CInterfaceStubVtbl *) &_IParametersArrayStubVtbl,
    0
};

PCInterfaceName const _HeaterExample_InterfaceNamesList[] = 
{
    "IMaterialPort",
    "IPortsArray",
    "IHeaterExampleOperation",
    "IParametersArray",
    0
};

const IID *  const _HeaterExample_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _HeaterExample_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _HeaterExample, pIID, n)

int __stdcall _HeaterExample_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _HeaterExample, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _HeaterExample, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _HeaterExample, 4, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo HeaterExample_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _HeaterExample_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _HeaterExample_StubVtblList,
    (const PCInterfaceName * ) & _HeaterExample_InterfaceNamesList,
    (const IID ** ) & _HeaterExample_BaseIIDList,
    & _HeaterExample_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

