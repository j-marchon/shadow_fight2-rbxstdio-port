// MJBDKEOEJEC$$AJJLBBCJAAL @ RVA 0x3337C50

System_String_o *
MJBDKEOEJEC__AJJLBBCJAAL(MJBDKEOEJEC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  POEIJGLGEED_PGHHNOPEKLB_o *__this_00;
  System_Action_int__o *FFJLJJAGJAG;
  POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *pPVar6;
  POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_Fields *pPVar7;
  
  if ((DAT_04567957 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5916);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5917);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5918);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5919);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5920);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5921);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5922);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5923);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5924);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5925);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5926);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5927);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5928);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5929);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5930);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5931);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&Method_MJBDKEOEJEC_OOOEBBJKABH__);
    FUN_01bab630(&POEIJGLGEED_PGHHNOPEKLB_TypeInfo);
    DAT_04567957 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03438244;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5916,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5917,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                     (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
  __this_00 = (POEIJGLGEED_PGHHNOPEKLB_o *)thunk_FUN_01bda818(POEIJGLGEED_PGHHNOPEKLB_TypeInfo);
  POEIJGLGEED_PGHHNOPEKLB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (POEIJGLGEED_PGHHNOPEKLB_o *)0x0) goto LAB_03438244;
  pPVar6 = (__this_00->fields).PKPHIABHKFE;
  if (bVar1) {
LAB_03437eac:
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = BHEDGAKGKPO__BPHEBPIMCIL((MethodInfo *)0x0);
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5918,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5919,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    pSVar5 = (System_String_o *)0x0;
    if (bVar2) goto LAB_03437eac;
  }
  if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
  pPVar7 = &pPVar6->fields;
  pPVar7->JBDFLNMINKD = pSVar5;
  thunk_FUN_01c20e04(pPVar7);
  pPVar6 = (__this_00->fields).PKPHIABHKFE;
  if (bVar1) {
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).IBOODFDOFGP = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).CBADOHAADMD = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    bVar2 = true;
    (pPVar6->fields).OHELOABONEN = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).GDIJGCGHKIB = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (!bVar1) goto LAB_03438128;
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5920,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5921,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).IBOODFDOFGP = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5922,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5923,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).CBADOHAADMD = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5924,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5925,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).OHELOABONEN = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5926,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5927,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).GDIJGCGHKIB = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
LAB_03438128:
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5928,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5929,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
  }
  if (pPVar6 != (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) {
    (pPVar6->fields).NLFPMGBICIK = bVar2;
    FFJLJJAGJAG = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    POEIJGLGEED__BJDILAPJIGA(FFJLJJAGJAG,__this_00,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5930,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5931,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    return pSVar5;
  }
LAB_03438244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

