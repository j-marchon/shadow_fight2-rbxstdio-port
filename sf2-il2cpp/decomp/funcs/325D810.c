// AAPGCAPGBLG$$JPHDMGDNDHH @ RVA 0x325D810

void AAPGCAPGBLG__JPHDMGDNDHH(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Predicate_CCLKPGBIBOP__o **ppSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *format;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  System_Predicate_CCLKPGBIBOP__o *match;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045671a6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_1);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_625);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_<>c_HCDOMBEIBBD__);
    FUN_01bab630(&AAPGCAPGBLG_<>c_TypeInfo);
    DAT_045671a6 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).AOCCHDFNLMC;
  if ((AAPGCAPGBLG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AAPGCAPGBLG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = AAPGCAPGBLG_<>c_TypeInfo->static_fields->__9__16_0;
  if (match == (System_Predicate_CCLKPGBIBOP__o *)0x0) {
    if ((AAPGCAPGBLG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AAPGCAPGBLG_<>c_TypeInfo,method);
    }
    match = (System_Predicate_CCLKPGBIBOP__o *)
            thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    in_x3 = (MethodInfo *)0x0;
    System_Predicate<object>___ctor();
    ppSVar3 = &AAPGCAPGBLG_<>c_TypeInfo->static_fields->__9__16_0;
    *ppSVar3 = match;
    thunk_FUN_01c20e04(ppSVar3,match);
  }
  if ((__this_01 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List<object>__FindAll
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (System_Predicate_T__o *)match,
                             Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,__this_00,Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__
            );
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__)
      ;
      return;
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_625,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_1,(MethodInfo *)0x0);
    format = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar6 = pIVar1[1].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items,pIVar6);
    pIVar6 = pIVar1[3].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[1] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items + 1,pIVar6);
    pIVar6 = pIVar1[4].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    break;
    if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[2] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items + 2,pIVar6);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
    AAPGCAPGBLG__JIIBNJFDICI(__this,(System_String_o *)pIVar1[1].klass,true,in_x3);
  }
  uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(uVar5,0);
}

