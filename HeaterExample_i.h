

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __HeaterExample_i_h__
#define __HeaterExample_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IHeaterExampleOperation_FWD_DEFINED__
#define __IHeaterExampleOperation_FWD_DEFINED__
typedef interface IHeaterExampleOperation IHeaterExampleOperation;

#endif 	/* __IHeaterExampleOperation_FWD_DEFINED__ */


#ifndef __IPortsArray_FWD_DEFINED__
#define __IPortsArray_FWD_DEFINED__
typedef interface IPortsArray IPortsArray;

#endif 	/* __IPortsArray_FWD_DEFINED__ */


#ifndef __IMaterialPort_FWD_DEFINED__
#define __IMaterialPort_FWD_DEFINED__
typedef interface IMaterialPort IMaterialPort;

#endif 	/* __IMaterialPort_FWD_DEFINED__ */


#ifndef __IParametersArray_FWD_DEFINED__
#define __IParametersArray_FWD_DEFINED__
typedef interface IParametersArray IParametersArray;

#endif 	/* __IParametersArray_FWD_DEFINED__ */


#ifndef __HeaterExampleOperation_FWD_DEFINED__
#define __HeaterExampleOperation_FWD_DEFINED__

#ifdef __cplusplus
typedef class HeaterExampleOperation HeaterExampleOperation;
#else
typedef struct HeaterExampleOperation HeaterExampleOperation;
#endif /* __cplusplus */

#endif 	/* __HeaterExampleOperation_FWD_DEFINED__ */


#ifndef __PortsArray_FWD_DEFINED__
#define __PortsArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class PortsArray PortsArray;
#else
typedef struct PortsArray PortsArray;
#endif /* __cplusplus */

#endif 	/* __PortsArray_FWD_DEFINED__ */


#ifndef __MaterialPort_FWD_DEFINED__
#define __MaterialPort_FWD_DEFINED__

#ifdef __cplusplus
typedef class MaterialPort MaterialPort;
#else
typedef struct MaterialPort MaterialPort;
#endif /* __cplusplus */

#endif 	/* __MaterialPort_FWD_DEFINED__ */


#ifndef __ParametersArray_FWD_DEFINED__
#define __ParametersArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class ParametersArray ParametersArray;
#else
typedef struct ParametersArray ParametersArray;
#endif /* __cplusplus */

#endif 	/* __ParametersArray_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IHeaterExampleOperation_INTERFACE_DEFINED__
#define __IHeaterExampleOperation_INTERFACE_DEFINED__

/* interface IHeaterExampleOperation */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHeaterExampleOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cc526f4e-e068-4eff-a559-f7ac6a06cce0")
    IHeaterExampleOperation : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IHeaterExampleOperationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHeaterExampleOperation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHeaterExampleOperation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHeaterExampleOperation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHeaterExampleOperation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHeaterExampleOperation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHeaterExampleOperation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHeaterExampleOperation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IHeaterExampleOperationVtbl;

    interface IHeaterExampleOperation
    {
        CONST_VTBL struct IHeaterExampleOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaterExampleOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHeaterExampleOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHeaterExampleOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHeaterExampleOperation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHeaterExampleOperation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHeaterExampleOperation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHeaterExampleOperation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHeaterExampleOperation_INTERFACE_DEFINED__ */


#ifndef __IPortsArray_INTERFACE_DEFINED__
#define __IPortsArray_INTERFACE_DEFINED__

/* interface IPortsArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPortsArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f21f264b-40f6-4f36-b95b-0a1d2fd833e9")
    IPortsArray : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IPortsArrayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPortsArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPortsArray * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPortsArray * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPortsArray * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPortsArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPortsArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPortsArray * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IPortsArrayVtbl;

    interface IPortsArray
    {
        CONST_VTBL struct IPortsArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPortsArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortsArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPortsArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPortsArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPortsArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPortsArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPortsArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPortsArray_INTERFACE_DEFINED__ */


#ifndef __IMaterialPort_INTERFACE_DEFINED__
#define __IMaterialPort_INTERFACE_DEFINED__

/* interface IMaterialPort */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMaterialPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58b6a235-e3cc-415f-ac11-bc519ca454a5")
    IMaterialPort : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMaterialPortVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMaterialPort * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMaterialPort * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMaterialPort * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMaterialPort * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMaterialPort * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMaterialPort * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMaterialPort * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMaterialPortVtbl;

    interface IMaterialPort
    {
        CONST_VTBL struct IMaterialPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMaterialPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMaterialPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMaterialPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMaterialPort_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMaterialPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMaterialPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMaterialPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMaterialPort_INTERFACE_DEFINED__ */


#ifndef __IParametersArray_INTERFACE_DEFINED__
#define __IParametersArray_INTERFACE_DEFINED__

/* interface IParametersArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IParametersArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("454939a2-1064-4d89-a547-34389227f7a5")
    IParametersArray : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IParametersArrayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParametersArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParametersArray * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParametersArray * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IParametersArray * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IParametersArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IParametersArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IParametersArray * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IParametersArrayVtbl;

    interface IParametersArray
    {
        CONST_VTBL struct IParametersArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParametersArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParametersArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParametersArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParametersArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IParametersArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IParametersArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IParametersArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IParametersArray_INTERFACE_DEFINED__ */



#ifndef __HeaterExampleLib_LIBRARY_DEFINED__
#define __HeaterExampleLib_LIBRARY_DEFINED__

/* library HeaterExampleLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_HeaterExampleLib;

EXTERN_C const CLSID CLSID_HeaterExampleOperation;

#ifdef __cplusplus

class DECLSPEC_UUID("fd8bf0be-74a9-45c2-ad39-d066c74b98ed")
HeaterExampleOperation;
#endif

EXTERN_C const CLSID CLSID_PortsArray;

#ifdef __cplusplus

class DECLSPEC_UUID("c5d168d3-0b5b-4a87-b998-ac05555c310d")
PortsArray;
#endif

EXTERN_C const CLSID CLSID_MaterialPort;

#ifdef __cplusplus

class DECLSPEC_UUID("e78b3378-5eb6-41d2-bc95-3750fae55110")
MaterialPort;
#endif

EXTERN_C const CLSID CLSID_ParametersArray;

#ifdef __cplusplus

class DECLSPEC_UUID("bfcb1265-b5dc-497d-b4ce-d700f8c58e29")
ParametersArray;
#endif
#endif /* __HeaterExampleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


