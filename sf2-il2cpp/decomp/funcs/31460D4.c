// KKLJIDJBFEI$$NPFEHJDKDHD @ RVA 0x31460D4

/* WARNING: Removing unreachable block (ram,0x032463d4) */
/* WARNING: Removing unreachable block (ram,0x03246440) */

void KKLJIDJBFEI__NPFEHJDKDHD
               (KKLJIDJBFEI_o *__this,System_String_o *GINPHGBMEGC,
               Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *KJADEEFANAL,
               bool PBLICINIHPA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_Collections_Generic_IEnumerator_T__o *pSVar7;
  VirtualInvokeData *pVVar8;
  BECIPDJBAOG_o *KJADEEFANAL_00;
  ADJEBFOPFFF_o *__this_00;
  MAEAAOFOANA_o *__this_01;
  BECIPDJBAOG_o **ppBVar9;
  System_Collections_Generic_List_MAEAAOFOANA__o *__this_02;
  System_Collections_Generic_IEnumerator_T__c *pSVar10;
  MAEAAOFOANA_array *pMVar11;
  ulong uVar12;
  int32_t *piVar13;
  PKHMIGFEJCL_o *pPVar14;
  
  if ((DAT_04566786 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0324611c to 0334622f has its CatchHandler @ 0324611c
                       catch() { ... } // from try @ 0324611c with catch @ 0324611c
                       catch() { ... } // from try @ 03246254 with catch @ 0324611c
                       catch() { ... } // from try @ 0324629c with catch @ 0324611c
                       catch() { ... } // from try @ 032462c0 with catch @ 0324611c
                       catch() { ... } // from try @ 03246308 with catch @ 0324611c */
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MAEAAOFOANA>_Add__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_get_Count__);
    DAT_04566786 = 1;
  }
  if ((KJADEEFANAL == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) ||
     ((KJADEEFANAL->fields).count < 1)) {
    return;
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar14 = (pNVar6->fields).QuestParameters;
    pSVar7 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)KJADEEFANAL,
                        Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_GetEnumerator__
                       );
    if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar7->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar8 = pSVar10->vtable + *piVar13;
            goto LAB_03246220;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03246220:
      uVar12 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if ((uVar12 & 1) == 0) {
        if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_032463c8;
        pSVar10 = pSVar7->klass;
        uVar3._0_1_ = (pSVar10->_2).rank;
        uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 == 0) goto LAB_032463a0;
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        goto LAB_03246388;
      }
                    /* try { // try from 03246230 to 03346237 has its CatchHandler @ 032462a4 */
      pSVar10 = pSVar7->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 0324624c to 03346253 has its CatchHandler @ 0324629c */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo) {
            pVVar8 = pSVar10->vtable + *piVar13;
            goto LAB_0324627c;
          }
                    /* try { // try from 03246254 to 03346297 has its CatchHandler @ 0324611c */
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar8 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo,0);
LAB_0324627c:
      KJADEEFANAL_00 = (BECIPDJBAOG_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03246298 to 0334629b has its CatchHandler @ 032462a0 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324624c with catch @ 0324629c
                       try { // try from 0324629c to 033462bb has its CatchHandler @ 0324611c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03246298 with catch @ 032462a0
                        */
      __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03246230 with catch @ 032462a4
                        */
      if (__this_00 == (ADJEBFOPFFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ADJEBFOPFFF__AEADCLCKCEL(__this_00,KJADEEFANAL_00,PBLICINIHPA,(MethodInfo *)0x0);
                    /* try { // try from 032462bc to 033462bf has its CatchHandler @ 032462f0 */
      __this_01 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
                    /* try { // try from 032462c0 to 033462ff has its CatchHandler @ 0324611c */
      MAEAAOFOANA___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (MAEAAOFOANA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppBVar9 = &(__this_01->fields).EBBNAOLNKGD;
      *ppBVar9 = KJADEEFANAL_00;
      thunk_FUN_01c20e04(ppBVar9,KJADEEFANAL_00);
      (__this_01->fields).IKIINEOIIAK = GINPHGBMEGC;
      thunk_FUN_01c20e04(&__this_01->fields,GINPHGBMEGC);
      lVar5 = Method_System_Collections_Generic_List<MAEAAOFOANA>_Add__;
                    /* catch() { ... } // from try @ 032462bc with catch @ 032462f0 */
      if (pPVar14 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (pPVar14->fields)._MIAPCPCCIBM_k__BackingField;
      if (__this_02 == (System_Collections_Generic_List_MAEAAOFOANA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03246300 to 03346307 has its CatchHandler @ 0324631c */
      pMVar11 = (__this_02->fields)._items;
                    /* try { // try from 03246308 to 03346313 has its CatchHandler @ 0324611c */
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pMVar11 == (MAEAAOFOANA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03246314 to 0334631b has its CatchHandler @ 0324631c */
      uVar4 = (__this_02->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03246300 with catch @ 0324631c
                       catch(type#2 @ 00000000) { ... } // from try @ 03246314 with catch @ 0324631c
                        */
      if (uVar4 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar4 + 1;
        pMVar11->m_Items[(int)uVar4] = __this_01;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar4,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_03246438;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03246388:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar8 = pSVar10->vtable + *piVar13;
      goto LAB_032463bc;
    }
  }
LAB_032463a0:
  pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_IDisposable_TypeInfo,0);
LAB_032463bc:
  (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
LAB_032463c8:
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0x4f,(MethodInfo *)0x0);
    return;
  }
LAB_03246438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

