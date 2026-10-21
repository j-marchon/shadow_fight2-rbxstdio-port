// BPAIEBPNHEM$$AJJLBBCJAAL @ RVA 0x30103C4

System_String_o *
BPAIEBPNHEM__AJJLBBCJAAL(BPAIEBPNHEM_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  NLPJLHOEAOE_o *__this_00;
  Il2CppClass *pIVar3;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *pSVar12;
  
  if ((DAT_04565ba3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6166);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6167);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6168);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6169);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_BPAIEBPNHEM_JIAKPCKBFOJ_IMEDHACBLGP__);
    FUN_01bab630(&BPAIEBPNHEM_JIAKPCKBFOJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ba3 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(BPAIEBPNHEM_JIAKPCKBFOJ_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6166,
                 (MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6167,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    }
    else {
      if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar12 = OPAEPDIIOEB->m_Items[0];
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((__this_00 != (NLPJLHOEAOE_o *)0x0) &&
       (pIVar3 = (Il2CppClass *)NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar12,(MethodInfo *)0x0),
       pIVar2 != (Il2CppObject *)0x0)) {
      pIVar2 = pIVar2 + 1;
      pIVar2->klass = pIVar3;
      thunk_FUN_01c20e04(pIVar2,pIVar3);
      if (pIVar2->klass == (Il2CppClass *)0x0) {
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6168,
                   (MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6169,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        return pSVar12;
      }
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
        pPVar9 = pPVar4->klass;
        uVar1._0_1_ = (pPVar9->_2).rank;
        uVar1._1_1_ = (pPVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar9->vtable + (*piVar11 + 2);
              goto LAB_03110658;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03110658:
                    /* try { // try from 0311066c to 032106c3 has its CatchHandler @ 0311066c
                       catch() { ... } // from try @ 0311066c with catch @ 0311066c
                       catch() { ... } // from try @ 03110728 with catch @ 0311066c
                       catch() { ... } // from try @ 031107bc with catch @ 0311066c
                       catch() { ... } // from try @ 03110830 with catch @ 0311066c */
        (*pVVar6->methodPtr)(0x3dcccccd,pPVar4,uVar5,pVVar6->method);
        return StringLiteral_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

