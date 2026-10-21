// KDPDBGNOFEN$$LKKAIFOFGMN @ RVA 0x34AF158

void KDPDBGNOFEN__LKKAIFOFGMN
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  int32_t CEOLOKFCKIG;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  System_String_o *__this_00;
  System_String_array *__this_01;
  KEFHDOHHHML_o *FDLJCNLNCOC;
  System_String_array *NONPLOOOOAG;
  MethodInfo *method_00;
  System_Collections_Hashtable_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_02;
  System_Collections_Hashtable_o *pSVar9;
  
  if ((DAT_0456854d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_18075);
    FUN_01bab630(&StringLiteral_8624);
    FUN_01bab630(&StringLiteral_8625);
    FUN_01bab630(&StringLiteral_11559);
    DAT_0456854d = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
LAB_035af354:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11559,BBBLOLJAMJP,(MethodInfo *)0x0);
    uVar3 = StringLiteral_18075;
    if ((JPLEIGKMFDA != (Sfs2X_Core_BaseEvent_o *)0x0) &&
       (pSVar9 = (JPLEIGKMFDA->fields).arguments, pSVar9 != (System_Collections_Hashtable_o *)0x0))
    {
      pSVar6 = pSVar9->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
            pVVar4 = &(pSVar6->vtable)._0_Equals + *piVar8;
            goto LAB_035af280;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_Collections_IDictionary_TypeInfo,0);
LAB_035af280:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar9,uVar3,pVVar4->method);
      if (plVar5 != (long *)0x0) {
        __this_00 = (System_String_o *)
                    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (__this_00 != (System_String_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          __this_01 = System_String__Split(__this_00,0x5f,0,(MethodInfo *)0x0);
          if (__this_01 != (System_String_array *)0x0) {
            __this_02 = (__this->fields).DDBFMMHDCBK;
            if ((int)__this_01->max_length < 2) {
              CEOLOKFCKIG = -0x65;
              NONPLOOOOAG = StringLiteral_8624;
            }
            else {
              CEOLOKFCKIG = System_Int32__Parse(__this_01->m_Items[0],(MethodInfo *)0x0);
              iVar1 = (int)__this_01->max_length;
              if ((iVar1 == 1) || (iVar1 == 0)) goto LAB_035af354;
              method_00 = (MethodInfo *)0x0;
              __this_01 = (System_String_array *)
                          System_String__Format
                                    (StringLiteral_8625,(Il2CppObject *)__this_01->m_Items[0],
                                     (Il2CppObject *)__this_01->m_Items[1],(MethodInfo *)0x0);
              NONPLOOOOAG = __this_01;
            }
            FDLJCNLNCOC = KDPDBGNOFEN__NEDONAJNFHE
                                    ((KDPDBGNOFEN_o *)__this_01,CEOLOKFCKIG,
                                     (System_String_o *)NONPLOOOOAG,method_00);
            if (__this_02 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
              JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                        ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_02,6,(Il2CppObject *)FDLJCNLNCOC
                         ,Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

