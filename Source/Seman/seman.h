

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __seman_h__
#define __seman_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComSemWord_FWD_DEFINED__
#define __IComSemWord_FWD_DEFINED__
typedef interface IComSemWord IComSemWord;

#endif 	/* __IComSemWord_FWD_DEFINED__ */


#ifndef __IComSemNode_FWD_DEFINED__
#define __IComSemNode_FWD_DEFINED__
typedef interface IComSemNode IComSemNode;

#endif 	/* __IComSemNode_FWD_DEFINED__ */


#ifndef __IComSemRelation_FWD_DEFINED__
#define __IComSemRelation_FWD_DEFINED__
typedef interface IComSemRelation IComSemRelation;

#endif 	/* __IComSemRelation_FWD_DEFINED__ */


#ifndef __ISemStructure_FWD_DEFINED__
#define __ISemStructure_FWD_DEFINED__
typedef interface ISemStructure ISemStructure;

#endif 	/* __ISemStructure_FWD_DEFINED__ */


#ifndef __SemStructure_FWD_DEFINED__
#define __SemStructure_FWD_DEFINED__

#ifdef __cplusplus
typedef class SemStructure SemStructure;
#else
typedef struct SemStructure SemStructure;
#endif /* __cplusplus */

#endif 	/* __SemStructure_FWD_DEFINED__ */


#ifndef __ComSemNode_FWD_DEFINED__
#define __ComSemNode_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComSemNode ComSemNode;
#else
typedef struct ComSemNode ComSemNode;
#endif /* __cplusplus */

#endif 	/* __ComSemNode_FWD_DEFINED__ */


#ifndef __ComSemWord_FWD_DEFINED__
#define __ComSemWord_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComSemWord ComSemWord;
#else
typedef struct ComSemWord ComSemWord;
#endif /* __cplusplus */

#endif 	/* __ComSemWord_FWD_DEFINED__ */


#ifndef __ComSemRelation_FWD_DEFINED__
#define __ComSemRelation_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComSemRelation ComSemRelation;
#else
typedef struct ComSemRelation ComSemRelation;
#endif /* __cplusplus */

#endif 	/* __ComSemRelation_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_seman_0000_0000 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_seman_0000_0000_0001
    {
        idlNoneRoss	= 1,
        idlRoss	= 2,
        idlLocRoss	= 3,
        idlCollocRoss	= 4,
        idlTimeRoss	= 5,
        idlOborRoss	= 6,
        idlAoss	= 7,
        idlEngCollocRoss	= 8,
        idlEngObor	= 9,
        idlFinRoss	= 10,
        idlCompRoss	= 11,
        idlOmniRoss	= 12
    } 	idlDictTypeEnum;



extern RPC_IF_HANDLE __MIDL_itf_seman_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_seman_0000_0000_v0_0_s_ifspec;

#ifndef __IComSemWord_INTERFACE_DEFINED__
#define __IComSemWord_INTERFACE_DEFINED__

/* interface IComSemWord */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IComSemWord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCE1821B-EC2B-4E22-877A-69E960BF07EE")
    IComSemWord : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WordStr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lemma( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SyntaxWordNo( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Poses( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grammems( 
            /* [retval][out] */ hyper *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComSemWordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComSemWord * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComSemWord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComSemWord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComSemWord * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComSemWord * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComSemWord * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComSemWord * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WordStr )( 
            IComSemWord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lemma )( 
            IComSemWord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyntaxWordNo )( 
            IComSemWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Poses )( 
            IComSemWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grammems )( 
            IComSemWord * This,
            /* [retval][out] */ hyper *pVal);
        
        END_INTERFACE
    } IComSemWordVtbl;

    interface IComSemWord
    {
        CONST_VTBL struct IComSemWordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComSemWord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComSemWord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComSemWord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComSemWord_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComSemWord_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComSemWord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComSemWord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComSemWord_get_WordStr(This,pVal)	\
    ( (This)->lpVtbl -> get_WordStr(This,pVal) ) 

#define IComSemWord_get_Lemma(This,pVal)	\
    ( (This)->lpVtbl -> get_Lemma(This,pVal) ) 

#define IComSemWord_get_SyntaxWordNo(This,pVal)	\
    ( (This)->lpVtbl -> get_SyntaxWordNo(This,pVal) ) 

#define IComSemWord_get_Poses(This,pVal)	\
    ( (This)->lpVtbl -> get_Poses(This,pVal) ) 

#define IComSemWord_get_Grammems(This,pVal)	\
    ( (This)->lpVtbl -> get_Grammems(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComSemWord_INTERFACE_DEFINED__ */


#ifndef __IComSemNode_INTERFACE_DEFINED__
#define __IComSemNode_INTERFACE_DEFINED__

/* interface IComSemNode */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IComSemNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6AE5BC7-9CDD-468E-8E10-EA37350A6CEC")
    IComSemNode : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DictType( 
            /* [retval][out] */ idlDictTypeEnum *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitNo( 
            /* [retval][out] */ WORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WordsCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Words( 
            /* [in] */ long pos,
            /* [retval][out] */ IComSemWord **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GramCodes( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grammems( 
            /* [retval][out] */ hyper *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClauseNo( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Poses( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelOperatorsCount( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelOperators( 
            /* [in] */ int Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Prep( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComSemNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComSemNode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComSemNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComSemNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComSemNode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComSemNode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComSemNode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComSemNode * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DictType )( 
            IComSemNode * This,
            /* [retval][out] */ idlDictTypeEnum *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitNo )( 
            IComSemNode * This,
            /* [retval][out] */ WORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WordsCount )( 
            IComSemNode * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Words )( 
            IComSemNode * This,
            /* [in] */ long pos,
            /* [retval][out] */ IComSemWord **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GramCodes )( 
            IComSemNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grammems )( 
            IComSemNode * This,
            /* [retval][out] */ hyper *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClauseNo )( 
            IComSemNode * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Poses )( 
            IComSemNode * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelOperatorsCount )( 
            IComSemNode * This,
            /* [retval][out] */ int *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelOperators )( 
            IComSemNode * This,
            /* [in] */ int Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Prep )( 
            IComSemNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IComSemNodeVtbl;

    interface IComSemNode
    {
        CONST_VTBL struct IComSemNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComSemNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComSemNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComSemNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComSemNode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComSemNode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComSemNode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComSemNode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComSemNode_get_DictType(This,pVal)	\
    ( (This)->lpVtbl -> get_DictType(This,pVal) ) 

#define IComSemNode_get_UnitNo(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitNo(This,pVal) ) 

#define IComSemNode_get_WordsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_WordsCount(This,pVal) ) 

#define IComSemNode_get_Words(This,pos,pVal)	\
    ( (This)->lpVtbl -> get_Words(This,pos,pVal) ) 

#define IComSemNode_get_GramCodes(This,pVal)	\
    ( (This)->lpVtbl -> get_GramCodes(This,pVal) ) 

#define IComSemNode_get_Grammems(This,pVal)	\
    ( (This)->lpVtbl -> get_Grammems(This,pVal) ) 

#define IComSemNode_get_ClauseNo(This,pVal)	\
    ( (This)->lpVtbl -> get_ClauseNo(This,pVal) ) 

#define IComSemNode_get_Poses(This,pVal)	\
    ( (This)->lpVtbl -> get_Poses(This,pVal) ) 

#define IComSemNode_get_RelOperatorsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_RelOperatorsCount(This,pVal) ) 

#define IComSemNode_get_RelOperators(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_RelOperators(This,Index,pVal) ) 

#define IComSemNode_get_Prep(This,pVal)	\
    ( (This)->lpVtbl -> get_Prep(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComSemNode_INTERFACE_DEFINED__ */


#ifndef __IComSemRelation_INTERFACE_DEFINED__
#define __IComSemRelation_INTERFACE_DEFINED__

/* interface IComSemRelation */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IComSemRelation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25C2205C-8D1F-45C1-977E-D7CF7B486A12")
    IComSemRelation : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceNodeNo( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetNodeNo( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WordRealization( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComSemRelationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComSemRelation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComSemRelation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComSemRelation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComSemRelation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComSemRelation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComSemRelation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComSemRelation * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceNodeNo )( 
            IComSemRelation * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetNodeNo )( 
            IComSemRelation * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IComSemRelation * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WordRealization )( 
            IComSemRelation * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IComSemRelationVtbl;

    interface IComSemRelation
    {
        CONST_VTBL struct IComSemRelationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComSemRelation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComSemRelation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComSemRelation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComSemRelation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComSemRelation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComSemRelation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComSemRelation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComSemRelation_get_SourceNodeNo(This,pVal)	\
    ( (This)->lpVtbl -> get_SourceNodeNo(This,pVal) ) 

#define IComSemRelation_get_TargetNodeNo(This,pVal)	\
    ( (This)->lpVtbl -> get_TargetNodeNo(This,pVal) ) 

#define IComSemRelation_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IComSemRelation_get_WordRealization(This,pVal)	\
    ( (This)->lpVtbl -> get_WordRealization(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComSemRelation_INTERFACE_DEFINED__ */


#ifndef __ISemStructure_INTERFACE_DEFINED__
#define __ISemStructure_INTERFACE_DEFINED__

/* interface ISemStructure */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISemStructure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6815E7-3F0B-4FA2-9B56-FF1C1AC5136A")
    ISemStructure : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitPresemanDicts( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitSemanDicts( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSyntaxTreeByText( 
            /* [in] */ BSTR text,
            /* [in] */ int ClauseVarNo,
            /* [retval][out] */ BSTR *Graph) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTime( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentTime( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindSituations( 
            /* [in] */ BSTR text,
            /* [in] */ long UserTreeVariantNo,
            /* [in] */ BSTR PO,
            /* [in] */ long PanicTreeVariantCount,
            /* [in] */ long UserClauseVariantsCombinationNo,
            /* [in] */ BSTR AllowableLexVars,
            /* [retval][out] */ BSTR *Graph) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateToEnglish( 
            /* [retval][out] */ BSTR *Graph) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BuildSentence( 
            /* [retval][out] */ BSTR *Sentence) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindSituationsForNextSentence( 
            /* [retval][out] */ BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeIndices( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NodesCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Nodes( 
            /* [in] */ long pos,
            /* [retval][out] */ IComSemNode **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelationsCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Relations( 
            /* [in] */ long pos,
            /* [retval][out] */ IComSemRelation **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModuleTimeStatistics( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShouldBuildTclGraph( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShouldBuildTclGraph( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SilentMode( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SilentMode( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SyntRusSentence( 
            /* [retval][out] */ BSTR *Sentence) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLemmasToReplace( 
            /* [in] */ BSTR LemmasToReplace) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveThisSentence( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearSavedSentences( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Answer( 
            /* [retval][out] */ BSTR *sAnswer) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DopRelationsCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DopRelations( 
            /* [in] */ long pos,
            /* [retval][out] */ IComSemRelation **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISemStructureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISemStructure * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISemStructure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISemStructure * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISemStructure * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISemStructure * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISemStructure * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISemStructure * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitPresemanDicts )( 
            ISemStructure * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitSemanDicts )( 
            ISemStructure * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSyntaxTreeByText )( 
            ISemStructure * This,
            /* [in] */ BSTR text,
            /* [in] */ int ClauseVarNo,
            /* [retval][out] */ BSTR *Graph);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )( 
            ISemStructure * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentTime )( 
            ISemStructure * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindSituations )( 
            ISemStructure * This,
            /* [in] */ BSTR text,
            /* [in] */ long UserTreeVariantNo,
            /* [in] */ BSTR PO,
            /* [in] */ long PanicTreeVariantCount,
            /* [in] */ long UserClauseVariantsCombinationNo,
            /* [in] */ BSTR AllowableLexVars,
            /* [retval][out] */ BSTR *Graph);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TranslateToEnglish )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *Graph);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BuildSentence )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *Sentence);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindSituationsForNextSentence )( 
            ISemStructure * This,
            /* [retval][out] */ BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeIndices )( 
            ISemStructure * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NodesCount )( 
            ISemStructure * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            ISemStructure * This,
            /* [in] */ long pos,
            /* [retval][out] */ IComSemNode **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelationsCount )( 
            ISemStructure * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Relations )( 
            ISemStructure * This,
            /* [in] */ long pos,
            /* [retval][out] */ IComSemRelation **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISemStructure * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleTimeStatistics )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldBuildTclGraph )( 
            ISemStructure * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShouldBuildTclGraph )( 
            ISemStructure * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SilentMode )( 
            ISemStructure * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SilentMode )( 
            ISemStructure * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SyntRusSentence )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *Sentence);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLemmasToReplace )( 
            ISemStructure * This,
            /* [in] */ BSTR LemmasToReplace);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveThisSentence )( 
            ISemStructure * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearSavedSentences )( 
            ISemStructure * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Answer )( 
            ISemStructure * This,
            /* [retval][out] */ BSTR *sAnswer);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DopRelationsCount )( 
            ISemStructure * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DopRelations )( 
            ISemStructure * This,
            /* [in] */ long pos,
            /* [retval][out] */ IComSemRelation **pVal);
        
        END_INTERFACE
    } ISemStructureVtbl;

    interface ISemStructure
    {
        CONST_VTBL struct ISemStructureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISemStructure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISemStructure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISemStructure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISemStructure_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISemStructure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISemStructure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISemStructure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISemStructure_InitPresemanDicts(This)	\
    ( (This)->lpVtbl -> InitPresemanDicts(This) ) 

#define ISemStructure_InitSemanDicts(This)	\
    ( (This)->lpVtbl -> InitSemanDicts(This) ) 

#define ISemStructure_GetSyntaxTreeByText(This,text,ClauseVarNo,Graph)	\
    ( (This)->lpVtbl -> GetSyntaxTreeByText(This,text,ClauseVarNo,Graph) ) 

#define ISemStructure_get_CurrentTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CurrentTime(This,pVal) ) 

#define ISemStructure_put_CurrentTime(This,newVal)	\
    ( (This)->lpVtbl -> put_CurrentTime(This,newVal) ) 

#define ISemStructure_FindSituations(This,text,UserTreeVariantNo,PO,PanicTreeVariantCount,UserClauseVariantsCombinationNo,AllowableLexVars,Graph)	\
    ( (This)->lpVtbl -> FindSituations(This,text,UserTreeVariantNo,PO,PanicTreeVariantCount,UserClauseVariantsCombinationNo,AllowableLexVars,Graph) ) 

#define ISemStructure_TranslateToEnglish(This,Graph)	\
    ( (This)->lpVtbl -> TranslateToEnglish(This,Graph) ) 

#define ISemStructure_BuildSentence(This,Sentence)	\
    ( (This)->lpVtbl -> BuildSentence(This,Sentence) ) 

#define ISemStructure_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISemStructure_FindSituationsForNextSentence(This,Result)	\
    ( (This)->lpVtbl -> FindSituationsForNextSentence(This,Result) ) 

#define ISemStructure_InitializeIndices(This)	\
    ( (This)->lpVtbl -> InitializeIndices(This) ) 

#define ISemStructure_get_NodesCount(This,pVal)	\
    ( (This)->lpVtbl -> get_NodesCount(This,pVal) ) 

#define ISemStructure_get_Nodes(This,pos,pVal)	\
    ( (This)->lpVtbl -> get_Nodes(This,pos,pVal) ) 

#define ISemStructure_get_RelationsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_RelationsCount(This,pVal) ) 

#define ISemStructure_get_Relations(This,pos,pVal)	\
    ( (This)->lpVtbl -> get_Relations(This,pos,pVal) ) 

#define ISemStructure_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISemStructure_get_ModuleTimeStatistics(This,pVal)	\
    ( (This)->lpVtbl -> get_ModuleTimeStatistics(This,pVal) ) 

#define ISemStructure_get_ShouldBuildTclGraph(This,pVal)	\
    ( (This)->lpVtbl -> get_ShouldBuildTclGraph(This,pVal) ) 

#define ISemStructure_put_ShouldBuildTclGraph(This,newVal)	\
    ( (This)->lpVtbl -> put_ShouldBuildTclGraph(This,newVal) ) 

#define ISemStructure_get_SilentMode(This,pVal)	\
    ( (This)->lpVtbl -> get_SilentMode(This,pVal) ) 

#define ISemStructure_put_SilentMode(This,newVal)	\
    ( (This)->lpVtbl -> put_SilentMode(This,newVal) ) 

#define ISemStructure_SyntRusSentence(This,Sentence)	\
    ( (This)->lpVtbl -> SyntRusSentence(This,Sentence) ) 

#define ISemStructure_SetLemmasToReplace(This,LemmasToReplace)	\
    ( (This)->lpVtbl -> SetLemmasToReplace(This,LemmasToReplace) ) 

#define ISemStructure_SaveThisSentence(This)	\
    ( (This)->lpVtbl -> SaveThisSentence(This) ) 

#define ISemStructure_ClearSavedSentences(This)	\
    ( (This)->lpVtbl -> ClearSavedSentences(This) ) 

#define ISemStructure_Answer(This,sAnswer)	\
    ( (This)->lpVtbl -> Answer(This,sAnswer) ) 

#define ISemStructure_get_DopRelationsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_DopRelationsCount(This,pVal) ) 

#define ISemStructure_get_DopRelations(This,pos,pVal)	\
    ( (This)->lpVtbl -> get_DopRelations(This,pos,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISemStructure_INTERFACE_DEFINED__ */



#ifndef __SEMANLib_LIBRARY_DEFINED__
#define __SEMANLib_LIBRARY_DEFINED__

/* library SEMANLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SEMANLib;

EXTERN_C const CLSID CLSID_SemStructure;

#ifdef __cplusplus

class DECLSPEC_UUID("DE070989-F926-404D-B5EC-5790E28E12F3")
SemStructure;
#endif

EXTERN_C const CLSID CLSID_ComSemNode;

#ifdef __cplusplus

class DECLSPEC_UUID("2FA2ACDC-1A64-448F-BACE-EB5AE4122271")
ComSemNode;
#endif

EXTERN_C const CLSID CLSID_ComSemWord;

#ifdef __cplusplus

class DECLSPEC_UUID("2E3267A1-D488-4904-8030-61929CB1E58C")
ComSemWord;
#endif

EXTERN_C const CLSID CLSID_ComSemRelation;

#ifdef __cplusplus

class DECLSPEC_UUID("576AB855-E069-4C26-844B-72F9D0DF2BA9")
ComSemRelation;
#endif
#endif /* __SEMANLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


