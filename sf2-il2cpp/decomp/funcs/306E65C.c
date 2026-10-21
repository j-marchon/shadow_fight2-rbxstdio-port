// EEGDOGKBLNG$$MPLCEKAPDHJ @ RVA 0x306E65C

/* WARNING: Removing unreachable block (ram,0x0316e8c8) */

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__MPLCEKAPDHJ
          (EEGDOGKBLNG_o *__this,System_String_o *BHDLLGCLMBD,System_String_array *OKBIKHHKOEN,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  KAMBBJFPLGM_o *pKVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_04565f62 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    DAT_04565f62 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  pKVar8 = (__this->fields).MLAAJICBOAD;
  if (pKVar8 == (KAMBBJFPLGM_o *)0x0) {
    return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  }
  __this_01 = (pKVar8->fields).LEJBLHJFJHP;
  if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__)
  ;
  if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar9 = pSVar5->klass;
    uVar1._0_1_ = (pSVar9->_2).rank;
    uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar9->vtable + *piVar11;
          goto LAB_0316e794;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0316e794:
    uVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if ((uVar10 & 1) == 0) {
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
      }
      pSVar9 = pSVar5->klass;
      uVar3._0_1_ = (pSVar9->_2).rank;
      uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar3;
      if (uVar10 == 0) goto LAB_0316e874;
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar9 = pSVar5->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
          pVVar6 = pSVar9->vtable + *piVar11;
          goto LAB_0316e7f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0316e7f0:
    lVar7 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = PCOEHCPGBBG__EBJIONLKNEE
                      (*(System_String_o **)(lVar7 + 0x18),BHDLLGCLMBD,OKBIKHHKOEN,(MethodInfo *)0x0
                      );
    if (bVar4) {
      CAOJHCDPDBH__GKONJMIPMEH<object,_int>
                ((System_Collections_Generic_Dictionary_T__U__o *)__this_00,
                 *(Il2CppObject **)(lVar7 + 0x18),*(int32_t *)(lVar7 + 0x20),
                 Method_CAOJHCDPDBH_GKONJMIPMEH<string,_int>__);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar6 = pSVar9->vtable + *piVar11;
      goto LAB_0316e890;
    }
  }
LAB_0316e874:
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0316e890:
  (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
  return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
}

