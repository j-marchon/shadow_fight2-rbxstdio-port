// TypeDefIndex 2453
// Namespace: 
// public class MDFGJKBMECA.OJOAPHBHAFL
// Fields:
//   private Dictionary<string, XmlDocument> CANNFEEOFEA; // 0x10
//   private Dictionary<string, string> INCJHPNJFFA; // 0x18
//   private string IFMAFGGMIFO; // 0x20
//   private const int AIMOOKJKOMP = 15;
//   private bool HKLFCAHLDFC; // 0x28

// ===== public void AGHAGAMDNPE()  [RVA 0x336AF8C]
// MDFGJKBMECA.OJOAPHBHAFL$$AGHAGAMDNPE @ RVA 0x336AF8C

void MDFGJKBMECA_OJOAPHBHAFL__AGHAGAMDNPE(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567ae3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    FUN_01bab630(&StringLiteral_16898/*"cache clear"*/);
    DAT_04567ae3 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_16898/*"cache clear"*/,(MethodInfo *)0x0);
  MDFGJKBMECA_OJOAPHBHAFL__KIJILFAEKEL(__this,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).INCJHPNJFFA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool PCKCNMKFFHE(string LFGKEPCBPKF, XmlDocument IGICIHPHELM)  [RVA 0x336B248]
// MDFGJKBMECA.OJOAPHBHAFL$$PCKCNMKFFHE @ RVA 0x336B248

bool MDFGJKBMECA_OJOAPHBHAFL__PCKCNMKFFHE
               (MDFGJKBMECA_OJOAPHBHAFL_o *__this,System_String_o *LFGKEPCBPKF,
               System_Xml_XmlDocument_o *IGICIHPHELM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  GCFHEEKPCPJ_o *__this_01;
  undefined1 auVar6 [16];
  System_String_o *local_38;
  
  if ((DAT_04567ae4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4090);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4091);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4092);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4093);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_04567ae4 = 1;
  }
  local_38 = (System_String_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).INCJHPNJFFA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LFGKEPCBPKF,(Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    if (!bVar1) {
      return false;
    }
    if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IGICIHPHELM != (System_Xml_XmlDocument_o *)0x0) {
      __this_01 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
      auVar6 = (*(IGICIHPHELM->klass->vtable)._43_get_OuterXml.methodPtr)
                         (IGICIHPHELM,(IGICIHPHELM->klass->vtable)._43_get_OuterXml.method);
      pSVar5 = local_38;
      pSVar2 = MDFGJKBMECA_OJOAPHBHAFL__DPHMDPHEIKO(__this,auVar6._8_8_);
      if (__this_01 != (GCFHEEKPCPJ_o *)0x0) {
        bVar1 = GCFHEEKPCPJ__PCKCNMKFFHE(__this_01,auVar6._0_8_,pSVar5,pSVar2,5,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4090,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4091,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4092,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4093,
                     (MethodInfo *)0x0);
          pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,LFGKEPCBPKF,pSVar2,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          return false;
        }
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3368C48]
// MDFGJKBMECA.OJOAPHBHAFL$$.ctor @ RVA 0x3368C48

void MDFGJKBMECA_OJOAPHBHAFL___ctor(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_XmlDocument>_TypeInfo);
    DAT_04567ae5 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_XmlDocument>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_XmlDocument>__ctor__);
  (__this->fields).CANNFEEOFEA =
       (System_Collections_Generic_Dictionary_string__XmlDocument__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).INCJHPNJFFA;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public XmlDocument BGPCDOCFCEH(string CCKJFMILHLC)  [RVA 0x336ACBC]
// MDFGJKBMECA.OJOAPHBHAFL$$BGPCDOCFCEH @ RVA 0x336ACBC

System_Xml_XmlDocument_o *
MDFGJKBMECA_OJOAPHBHAFL__BGPCDOCFCEH
          (MDFGJKBMECA_OJOAPHBHAFL_o *__this,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  GCFHEEKPCPJ_o *__this_00;
  undefined1 auVar5 [16];
  System_Xml_XmlDocument_o *local_28;
  
  if ((DAT_04567ae6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_TryGetValue__);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    FUN_01bab630(&StringLiteral_828/*"' is hacked"*/);
    FUN_01bab630(&StringLiteral_19730/*"model '"*/);
    DAT_04567ae6 = 1;
  }
  local_28 = (System_Xml_XmlDocument_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).CANNFEEOFEA;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar4 = Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_TryGetValue__;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)CCKJFMILHLC,(Il2CppObject **)&local_28,
                       (MethodInfo_2334730 *)
                       Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_TryGetValue__
                      );
    if (bVar1) {
      bVar1 = MDFGJKBMECA_OJOAPHBHAFL__PCKCNMKFFHE(__this,CCKJFMILHLC,local_28,pMVar4);
      if (bVar1) {
        return local_28;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).CANNFEEOFEA;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_0346af28;
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (pSVar2,(Il2CppObject *)CCKJFMILHLC,
                 Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Remove__);
    }
    local_28 = GIAMPEGMNHE__IBJOMPOLPCC(CCKJFMILHLC,1,true,true,false,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).CANNFEEOFEA
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar4 = Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Add__;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)CCKJFMILHLC,(Il2CppObject *)local_28,
                 (MethodInfo_2332F24 *)
                 Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Add__);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).INCJHPNJFFA;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar2,(Il2CppObject *)CCKJFMILHLC,
                           Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__
                          );
        if (bVar1) {
          bVar1 = MDFGJKBMECA_OJOAPHBHAFL__PCKCNMKFFHE(__this,CCKJFMILHLC,local_28,pMVar4);
          if (bVar1) {
            return local_28;
          }
          if ((__this->fields).HKLFCAHLDFC == false) {
            (__this->fields).HKLFCAHLDFC = true;
            pSVar3 = System_String__Concat
                               (StringLiteral_19730/*"model '"*/,CCKJFMILHLC,StringLiteral_828/*"' is hacked"*/,(MethodInfo *)0x0)
            ;
            if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
            }
            EOOEOHKLOFJ__GBCPKPECOKH(pSVar3,(MethodInfo *)0x0);
          }
        }
        else if (local_28 != (System_Xml_XmlDocument_o *)0x0) {
          if (((MGAGKCEDNNN_TypeInfo->_2).cctor_finished != 0) ||
             (thunk_FUN_01ba7564(), local_28 != (System_Xml_XmlDocument_o *)0x0)) {
            __this_00 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
            auVar5 = (*(local_28->klass->vtable)._43_get_OuterXml.methodPtr)
                               (local_28,(local_28->klass->vtable)._43_get_OuterXml.method);
            pSVar3 = MDFGJKBMECA_OJOAPHBHAFL__DPHMDPHEIKO(__this,auVar5._8_8_);
            if (__this_00 != (GCFHEEKPCPJ_o *)0x0) {
              pSVar3 = GCFHEEKPCPJ__IDDPLJLECPA(__this_00,auVar5._0_8_,pSVar3,(MethodInfo *)0x0);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).INCJHPNJFFA;
              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary<object,_object>__Add
                          (pSVar2,(Il2CppObject *)CCKJFMILHLC,(Il2CppObject *)pSVar3,
                           Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                return local_28;
              }
            }
          }
          goto LAB_0346af28;
        }
        return (System_Xml_XmlDocument_o *)0x0;
      }
    }
  }
LAB_0346af28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string DPHMDPHEIKO()  [RVA 0x336B494]
// MDFGJKBMECA.OJOAPHBHAFL$$DPHMDPHEIKO @ RVA 0x336B494

System_String_o *
MDFGJKBMECA_OJOAPHBHAFL__DPHMDPHEIKO(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this_00;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  
  if ((DAT_04567ae7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04567ae7 = 1;
  }
  ppSVar3 = &(__this->fields).IFMAFGGMIFO;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = LIIFLGALGNK__FBLGOHOOMJG(0xf,(MethodInfo *)0x0);
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (MDFGJKBMECA_OJOAPHBHAFL_o *)EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
  pSVar2 = MDFGJKBMECA_OJOAPHBHAFL__MDCGMNHJPFN(__this_00,method_00);
  pSVar2 = System_String__Concat((System_String_o *)__this_00,pSVar2,*ppSVar3,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private string MDCGMNHJPFN()  [RVA 0x336B554]
// MDFGJKBMECA.OJOAPHBHAFL$$MDCGMNHJPFN @ RVA 0x336B554

System_String_o *
MDFGJKBMECA_OJOAPHBHAFL__MDCGMNHJPFN(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567ae8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_41);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4094);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567ae8 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4094,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_41,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void KIJILFAEKEL()  [RVA 0x336A638]
// MDFGJKBMECA.OJOAPHBHAFL$$KIJILFAEKEL @ RVA 0x336A638

void MDFGJKBMECA_OJOAPHBHAFL__KIJILFAEKEL(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Clear__);
    DAT_04567ae9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).CANNFEEOFEA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_XmlDocument>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

