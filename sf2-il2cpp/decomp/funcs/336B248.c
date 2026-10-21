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

