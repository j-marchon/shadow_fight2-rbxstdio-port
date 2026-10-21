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
    FUN_01bab630(&StringLiteral_828);
    FUN_01bab630(&StringLiteral_19730);
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
                               (StringLiteral_19730,CCKJFMILHLC,StringLiteral_828,(MethodInfo *)0x0)
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

