// GGLDGAAPKCF$$JHBPKMKKKJI @ RVA 0x35D11E4

void GGLDGAAPKCF__JHBPKMKKKJI(GGLDGAAPKCF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Func_int__string__o **ppSVar9;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *value;
  Core_Network_ServerProvider_o *__this_00;
  System_Action_bool__string__object__o *KCPFFLHCCIN;
  System_Action_o *pSVar10;
  GCPFDLNAFDF_c *pGVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_int__o *source_00;
  System_Func_int__string__o *selector;
  
  if ((DAT_04568fe6 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_722);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_723);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_724);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_725);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<int,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&System_Func<int,_string>_TypeInfo);
    FUN_01bab630(&Method_GGLDGAAPKCF_JMNCGJLMAIM__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_GGLDGAAPKCF_<>c_JKELCOKFAKD__);
    FUN_01bab630(&GGLDGAAPKCF_<>c_TypeInfo);
    DAT_04568fe6 = 1;
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<int>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).KNKAAIDGBJL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
  if (bVar2) {
    pSVar10 = (__this->fields).JDABHAFPPOL;
    if (pSVar10 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036d12fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar10->fields).super.super.invoke_impl)
                ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method);
      return;
    }
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 != (GCPFDLNAFDF_o *)0x0) {
    pGVar11 = pGVar3->klass;
    uVar1._0_1_ = (pGVar11->_2).rank;
    uVar1._1_1_ = (pGVar11->_2).minimumAlignment;
                    /* try { // try from 036d1334 to 037d13fb has its CatchHandler @ 036d1334
                       catch() { ... } // from try @ 036d1334 with catch @ 036d1334
                       catch() { ... } // from try @ 036d1420 with catch @ 036d1334
                       catch() { ... } // from try @ 036d1480 with catch @ 036d1334
                       catch() { ... } // from try @ 036d14b4 with catch @ 036d1334 */
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pGVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar4 = pGVar11->vtable + (*piVar13 + 7);
          goto LAB_036d1394;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,HFHIKPAKJFG_TypeInfo,7);
LAB_036d1394:
    lVar5 = (*pVVar4->methodPtr)(pGVar3,pVVar4->method);
    if (lVar5 != 0) {
      pSVar14 = *(System_String_o **)(lVar5 + 0x10);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_722,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_723,(MethodInfo *)0x0
                );
                    /* try { // try from 036d13fc to 037d1403 has its CatchHandler @ 036d1464 */
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 036d1414 to 037d141f has its CatchHandler @ 036d1460 */
      pSVar8 = System_String__Concat(pSVar14,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 036d1420 to 037d147b has its CatchHandler @ 036d1334 */
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_724,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d1414 with catch @ 036d1460
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d13fc with catch @ 036d1464
                        */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_725,(MethodInfo *)0x0
                );
      pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 036d147c to 037d147f has its CatchHandler @ 036d14a4 */
                    /* try { // try from 036d1480 to 037d14ab has its CatchHandler @ 036d1334 */
      source_00 = (__this->fields).KNKAAIDGBJL;
      if ((GGLDGAAPKCF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGLDGAAPKCF_<>c_TypeInfo);
      }
                    /* catch() { ... } // from try @ 036d147c with catch @ 036d14a4 */
      selector = GGLDGAAPKCF_<>c_TypeInfo->static_fields->__9__31_0;
      if (selector == (System_Func_int__string__o *)0x0) {
                    /* try { // try from 036d14ac to 037d14b3 has its CatchHandler @ 036d14c8 */
        if ((GGLDGAAPKCF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036d14b4 to 037d14bf has its CatchHandler @ 036d1334 */
          thunk_FUN_01ba7564(GGLDGAAPKCF_<>c_TypeInfo);
        }
                    /* try { // try from 036d14c0 to 037d14c7 has its CatchHandler @ 036d14c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d14ac with catch @ 036d14c8
                       catch(type#2 @ 00000000) { ... } // from try @ 036d14c0 with catch @ 036d14c8
                        */
        selector = (System_Func_int__string__o *)
                   thunk_FUN_01bda818(System_Func<int,_string>_TypeInfo);
        System_Func<int,_object>___ctor();
        ppSVar9 = &GGLDGAAPKCF_<>c_TypeInfo->static_fields->__9__31_0;
        *ppSVar9 = selector;
        thunk_FUN_01c20e04(ppSVar9,selector);
      }
      source = System_Linq_Enumerable__Select<int,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (System_Func_TSource__TResult__o *)selector,
                          Method_System_Linq_Enumerable_Select<int,_string>__);
      value = (System_String_array *)
              System_Linq_Enumerable__ToArray<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         Method_System_Linq_Enumerable_ToArray<string>__);
      pSVar14 = System_String__Join(pSVar14,value,(MethodInfo *)0x0);
      __this_00 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
      KCPFFLHCCIN = (System_Action_bool__string__object__o *)
                    thunk_FUN_01bda818(System_Action<bool,_string,_object>_TypeInfo);
      System_Action<bool,_object,_object>___ctor();
      if (__this_00 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__ConfirmLedger
                  (__this_00,pSVar8,KCPFFLHCCIN,pSVar14,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

