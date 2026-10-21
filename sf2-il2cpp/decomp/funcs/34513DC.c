// HKNJPBPNGIC$$AJJLBBCJAAL @ RVA 0x34513DC

System_String_o *
HKNJPBPNGIC__AJJLBBCJAAL(HKNJPBPNGIC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_DBNEEHGBCJD__string__o **ppSVar9;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o *pSVar13;
  System_Func_DBNEEHGBCJD__string__o *selector;
  
  if ((DAT_045682ad & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4507);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4508);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4509);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4510);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4511);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4512);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4513);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4514);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4515);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4516);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<DBNEEHGBCJD,_string>__);
    FUN_01bab630(&System_Func<DBNEEHGBCJD,_string>_TypeInfo);
    FUN_01bab630(&Method_HKNJPBPNGIC_<>c_GFBIJFEFNFF__);
    FUN_01bab630(&Method_HKNJPBPNGIC_<>c_ODLMLJCPDMH__);
    FUN_01bab630(&HKNJPBPNGIC_<>c_TypeInfo);
    DAT_045682ad = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_0355197c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4507,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4508,(MethodInfo *)0x0)
    ;
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4509,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4510,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0355197c;
    pIVar10 = pIVar4->klass;
    uVar2._0_1_ = (pIVar10->_2).rank;
    uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar10->vtable + (*piVar12 + 10);
          goto LAB_035517f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,10);
LAB_035517f8:
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    if ((HKNJPBPNGIC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HKNJPBPNGIC_<>c_TypeInfo);
    }
    selector = HKNJPBPNGIC_<>c_TypeInfo->static_fields->__9__4_0;
    if (selector != (System_Func_DBNEEHGBCJD__string__o *)0x0) goto LAB_03551934;
    if ((HKNJPBPNGIC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HKNJPBPNGIC_<>c_TypeInfo);
    }
    selector = (System_Func_DBNEEHGBCJD__string__o *)
               thunk_FUN_01bda818(System_Func<DBNEEHGBCJD,_string>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar9 = &HKNJPBPNGIC_<>c_TypeInfo->static_fields->__9__4_0;
    *ppSVar9 = selector;
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0355197c;
    pIVar10 = pIVar4->klass;
    pSVar13 = OPAEPDIIOEB->m_Items[0];
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar10->vtable + (*piVar12 + 9);
          goto LAB_03551668;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,9);
LAB_03551668:
    uVar11 = (*pVVar5->methodPtr)(pIVar4,pSVar13,1,1,pVVar5->method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if ((uVar11 & 1) != 0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4515,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 035516d0 to 036516f7 has its CatchHandler @ 03551d18 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4516,
                 (MethodInfo *)0x0);
      pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      return pSVar13;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4511,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0355172c to 03651757 has its CatchHandler @ 03551d14 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4512,(MethodInfo *)0x0)
    ;
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4513,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4514,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03551794 to 0365179b has its CatchHandler @ 03551c44 */
                    /* try { // try from 035517a0 to 036517a7 has its CatchHandler @ 03551c50 */
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pIVar10 = pIVar4->klass;
    uVar3._0_1_ = (pIVar10->_2).rank;
    uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
                    /* try { // try from 035517ac to 036517c3 has its CatchHandler @ 03551c4c */
    uVar11 = (ulong)uVar3;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 035517c4 to 03651977 has its CatchHandler @ 03550f98 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar10->vtable + (*piVar12 + 10);
          goto LAB_0355189c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,10);
LAB_0355189c:
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    if ((HKNJPBPNGIC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HKNJPBPNGIC_<>c_TypeInfo);
    }
    selector = HKNJPBPNGIC_<>c_TypeInfo->static_fields->__9__4_1;
    if (selector != (System_Func_DBNEEHGBCJD__string__o *)0x0) goto LAB_03551934;
    if ((HKNJPBPNGIC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HKNJPBPNGIC_<>c_TypeInfo);
    }
    selector = (System_Func_DBNEEHGBCJD__string__o *)
               thunk_FUN_01bda818(System_Func<DBNEEHGBCJD,_string>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar9 = &HKNJPBPNGIC_<>c_TypeInfo->static_fields->__9__4_1;
    *ppSVar9 = selector;
  }
  thunk_FUN_01c20e04(ppSVar9,selector);
LAB_03551934:
  values = System_Linq_Enumerable__Select<object,_object>
                     (source,(System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<DBNEEHGBCJD,_string>__);
  pSVar8 = System_String__Join(pSVar8,(System_Collections_Generic_IEnumerable_string__o *)values,
                               (MethodInfo *)0x0);
                    /* try { // try from 03551978 to 0365199f has its CatchHandler @ 03551c40 */
  pSVar13 = System_String__Concat(pSVar13,pSVar8,(MethodInfo *)0x0);
  return pSVar13;
}

