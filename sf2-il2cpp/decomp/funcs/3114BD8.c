// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$NCDOMAGEGCF @ RVA 0x3114BD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_DPDNFOCBGGD__o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  int CJNHFNHJHPE;
  int CJNHFNHJHPE_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03214be0 to 03314bef has its CatchHandler @ 03214cdc */
  if ((DAT_045665ab & 1) == 0) {
                    /* try { // try from 03214c00 to 03314c03 has its CatchHandler @ 03214cd0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_Dispose__);
                    /* try { // try from 03214c04 to 03314c0f has its CatchHandler @ 03214cd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_8943);
    FUN_01bab630(&StringLiteral_8944);
                    /* try { // try from 03214c50 to 03314c6b has its CatchHandler @ 03214cd4 */
    DAT_045665ab = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar2 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF(__this,method);
  if (bVar2) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03214c80 to 03314c8f has its CatchHandler @ 03214ccc */
    if (!bVar2) {
      return;
    }
    __this_01 = (__this->fields).EHNBACPAECJ;
    if (__this_01 != (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* try { // try from 03214c90 to 03314cbb has its CatchHandler @ 03214a70 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
      CJNHFNHJHPE = 0;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
                    /* try { // try from 03214cbc to 03314cbf has its CatchHandler @ 03214ce4 */
      CJNHFNHJHPE_00 = 0;
                    /* try { // try from 03214cc0 to 03314cc7 has its CatchHandler @ 03214ce0 */
                    /* try { // try from 03214cc8 to 03314d03 has its CatchHandler @ 03214a70 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c80 with catch @ 03214ccc
                        */
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__
                               ), bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c00 with catch @ 03214cd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c50 with catch @ 03214cd4
                        */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c04 with catch @ 03214cd8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214be0 with catch @ 03214cdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214cc0 with catch @ 03214ce0
                        */
        if (*(int *)&local_50.fields._current[1].klass == 0) {
          CJNHFNHJHPE_00 = CJNHFNHJHPE_00 + 1;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214cbc with catch @ 03214ce4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214b94 with catch @ 03214ce8
                        */
        if (*(int *)&local_50.fields._current[1].klass == 1) {
          CJNHFNHJHPE = CJNHFNHJHPE + 1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_Dispose__)
      ;
                    /* try { // try from 03214d04 to 03314d07 has its CatchHandler @ 03214d28 */
      pNVar3 = (__this->fields).PDHMLFAMNCO;
                    /* try { // try from 03214d08 to 03314d2f has its CatchHandler @ 03214a70 */
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ReservePool
                  (pNVar3,CJNHFNHJHPE_00,StringLiteral_8943,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).PDHMLFAMNCO;
                    /* catch() { ... } // from try @ 03214d04 with catch @ 03214d28 */
        if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 03214d30 to 03314d37 has its CatchHandler @ 03214d4c */
                    /* try { // try from 03214d38 to 03314d43 has its CatchHandler @ 03214a70 */
          Nekki_SF2_GUI_SimpleScroll__ReservePool
                    (pNVar3,CJNHFNHJHPE,StringLiteral_8944,(MethodInfo *)0x0);
                    /* try { // try from 03214d44 to 03314d4b has its CatchHandler @ 03214d4c */
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN(__this,method_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03214d30 with catch @ 03214d4c
                       catch(type#2 @ 00000000) { ... } // from try @ 03214d44 with catch @ 03214d4c
                        */
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__ScrollClearData(__this,method_01);
          pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__CMBKAMKEGLL(__this,method_02)
          ;
          if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar4->klass;
            uVar1._0_1_ = (pPVar7->_2).rank;
            uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar1;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar6 = pPVar7->vtable + *piVar9;
                  goto LAB_03214dc4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03214dc4:
            pSVar5 = (System_Collections_IEnumerator_o *)
                     (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
            ppSVar10 = &(__this->fields).KBJGGFDFCEF;
            *ppSVar10 = pSVar5;
                    /* try { // try from 03214de4 to 03314e97 has its CatchHandler @ 03214de4
                       catch() { ... } // from try @ 03214de4 with catch @ 03214de4
                       catch() { ... } // from try @ 03214f14 with catch @ 03214de4
                       catch() { ... } // from try @ 03214f40 with catch @ 03214de4
                       catch() { ... } // from try @ 03214fb0 with catch @ 03214de4
                       catch() { ... } // from try @ 03214ff4 with catch @ 03214de4
                       catch() { ... } // from try @ 0321502c with catch @ 03214de4 */
            thunk_FUN_01c20e04(ppSVar10,pSVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

