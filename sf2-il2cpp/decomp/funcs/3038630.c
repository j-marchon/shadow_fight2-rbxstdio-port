// LJNJDFEAIOH$$OJOMBBENIHM @ RVA 0x3038630

void LJNJDFEAIOH__OJOMBBENIHM(LJNJDFEAIOH_o *__this,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_o *pSVar5;
  DCHAJIMIFHP_o *__this_00;
  System_Action_RaidViewContainer__o *pSVar6;
  System_Collections_Generic_List_object__o *__this_01;
  PBAKFOBIHEG_o *pPVar7;
  VirtualInvokeData *pVVar8;
  PBAKFOBIHEG_c *pPVar9;
  System_Collections_Generic_List_IEnumerator__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar13;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565d61 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_get_Current__);
    FUN_01bab630(&Method_LJNJDFEAIOH_AMNGGHHKGMP__);
    FUN_01bab630(&Method_LJNJDFEAIOH_CKNOFAMLBDE__);
    FUN_01bab630(&Method_LJNJDFEAIOH_DNMKNNNIOJB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_GHBOCMOKNBB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_MDFHMNAMALM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_GetEnumerator__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565d61 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(pKVar4,pSVar5,(MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__PILMCAFCLMN(pKVar4,pSVar5,(MethodInfo *)0x0);
      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((pKVar4 != (KKLJIDJBFEI_o *)0x0) &&
         (__this_00 = (pKVar4->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
        DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
        pNVar13 = (__this->fields).PDEAGAFHDFI;
        pSVar6 = (System_Action_RaidViewContainer__o *)
                 thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnFightBtnClick
                    (pNVar13,pSVar6,(MethodInfo *)0x0);
          pNVar13 = (__this->fields).PDEAGAFHDFI;
          pSVar6 = (System_Action_RaidViewContainer__o *)
                   thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnExitBtnClick
                      (pNVar13,pSVar6,(MethodInfo *)0x0);
            pNVar13 = (__this->fields).PDEAGAFHDFI;
            pSVar6 = (System_Action_RaidViewContainer__o *)
                     thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnForceClose
                        (pNVar13,pSVar6,(MethodInfo *)0x0);
              __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).GEFEAGGHDNK;
              if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_78,__this_01,
                           Method_System_Collections_Generic_List<IEnumerator>_GetEnumerator__);
                local_60.fields._index = local_78.fields._index;
                local_60.fields._version = local_78.fields._version;
                local_60.fields._list = local_78.fields._list;
                local_60.fields._current = local_78.fields._current;
                    /* try { // try from 031388bc to 03238937 has its CatchHandler @ 031388bc
                       catch() { ... } // from try @ 031388bc with catch @ 031388bc
                       catch() { ... } // from try @ 031389e8 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a28 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a38 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a74 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a9c with catch @ 031388bc */
                while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (&local_60,
                                          Method_System_Collections_Generic_List_Enumerator<IEnumerator>_MoveNext__
                                         ), pIVar2 = local_60.fields._current, bVar3) {
                  pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  if (pPVar7 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pPVar9 = pPVar7->klass;
                  uVar1._0_1_ = (pPVar9->_2).rank;
                  uVar1._1_1_ = (pPVar9->_2).minimumAlignment;
                  uVar11 = (ulong)uVar1;
                  if (uVar11 != 0) {
                    piVar12 = &((pPVar9->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                        pVVar8 = pPVar9->vtable + (*piVar12 + 1);
                        goto LAB_0313892c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,1);
LAB_0313892c:
                    /* try { // try from 03138938 to 0323893f has its CatchHandler @ 03138a50 */
                  (*pVVar8->methodPtr)(pPVar7,pIVar2,pVVar8->method);
                }
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IEnumerator>_Dispose__)
                ;
                pSVar10 = (__this->fields).GEFEAGGHDNK;
                    /* try { // try from 03138950 to 0323895b has its CatchHandler @ 03138a40 */
                if (pSVar10 != (System_Collections_Generic_List_IEnumerator__o *)0x0) {
                  length = (pSVar10->fields)._size;
                    /* try { // try from 03138960 to 0323896b has its CatchHandler @ 03138a44 */
                  (pSVar10->fields)._size = 0;
                  (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                  if (0 < length) {
                    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,
                                        (MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

