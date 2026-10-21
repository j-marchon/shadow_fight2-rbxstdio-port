// MGNPHCAAEIO$$COHEKINOIOI @ RVA 0x340E1B8

void MGNPHCAAEIO__COHEKINOIOI(MethodInfo *method)

{
  bool bVar1;
  System_Predicate_JGIFDELCGOJ__o **ppSVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str0;
  System_Collections_Generic_List_JGIFDELCGOJ__o *pSVar8;
  System_Predicate_JGIFDELCGOJ__o *match;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568061 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2893);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2894);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2895);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2896);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2897);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2898);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2899);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2900);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Predicate<JGIFDELCGOJ>_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_<>c_KFLKJLCMENN__);
    FUN_01bab630(&MGNPHCAAEIO_<>c_TypeInfo);
    DAT_04568061 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  pSVar8 = MGNPHCAAEIO_TypeInfo->static_fields->HNPCJGMHLCM;
  if ((MGNPHCAAEIO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  match = MGNPHCAAEIO_<>c_TypeInfo->static_fields->__9__169_0;
  if (match == (System_Predicate_JGIFDELCGOJ__o *)0x0) {
    if ((MGNPHCAAEIO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = (System_Predicate_JGIFDELCGOJ__o *)
            thunk_FUN_01bda818(System_Predicate<JGIFDELCGOJ>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar2 = &MGNPHCAAEIO_<>c_TypeInfo->static_fields->__9__169_0;
    *ppSVar2 = match;
    thunk_FUN_01c20e04(ppSVar2,match);
  }
  if (pSVar8 == (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
LAB_0350e630:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar3 = System_Collections_Generic_List<object>__Find
                     ((System_Collections_Generic_List_object__o *)pSVar8,
                      (System_Predicate_T__o *)match,
                      Method_System_Collections_Generic_List<JGIFDELCGOJ>_Find__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = MGNPHCAAEIO_TypeInfo->static_fields->HNPCJGMHLCM;
    if (pSVar8 == (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) goto LAB_0350e630;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
               Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    pSVar4 = (System_String_o *)0x0;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__
                             ), pIVar3 = local_80.fields._current, bVar1) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((System_String_o *)local_80.fields._current[1].klass,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2893,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2894,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (pSVar4,pSVar7,(System_String_o *)pIVar3[1].klass,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2895,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2896,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (bVar1) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2899,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2900,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2897,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2898,
                 (MethodInfo *)0x0);
      str0 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(str0,pSVar4,(MethodInfo *)0x0);
    }
    pSVar4 = System_String__Concat(pSVar7,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  return;
}

