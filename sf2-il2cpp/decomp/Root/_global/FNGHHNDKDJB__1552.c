// TypeDefIndex 1552
// Namespace: 
// public class FNGHHNDKDJB
// Fields:

// ===== private static int EPJKPLIOAKN(List<FNGHHNDKDJB.GPIPBKLFMOI> GDKJAFIDNGF)  [RVA 0x31AA1B8]
// FNGHHNDKDJB$$EPJKPLIOAKN @ RVA 0x31AA1B8

int32_t FNGHHNDKDJB__EPJKPLIOAKN
                  (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
                  MethodInfo *method)

{
  int iVar1;
  Il2CppType *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Type_o *pSVar5;
  System_Type_o *pSVar6;
  Il2CppClass *pIVar7;
  
  if ((DAT_04566b2e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_EnchantDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_var);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_var);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_TradeDialog_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566b2e = 1;
  }
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    if ((GDKJAFIDNGF->fields)._size < 2) {
      return 1;
    }
    pIVar4 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                        Method_DJNBJHPDKDP_KIKGKKGDCKK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4[1].klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        return 1;
      }
      if (pIVar7 != (Il2CppClass *)0x0) {
        pSVar5 = System_Object__GetType((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
        pIVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog_var;
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_Type_TypeInfo);
        }
        pSVar6 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
        bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
        pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_var;
        if (!bVar3) {
          if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar6 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
          bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
          pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_var;
          if (!bVar3) {
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar6 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
            pIVar2 = Nekki_SF2_GUI_Dialogs_ExitDialog_var;
            if (!bVar3) {
              if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar6 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
              bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
              pIVar2 = Nekki_SF2_GUI_Dialogs_TradeDialog_var;
              if (!bVar3) {
                if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_var;
                if (!bVar3) {
                    /* try { // try from 032aa430 to 033aa437 has its CatchHandler @ 032ab65c */
                  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 032aa44c to 033aa453 has its CatchHandler @ 032ab658 */
                  pSVar6 = System_Type__GetTypeFromHandle
                                     ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                  bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                  pIVar2 = Nekki_SF2_GUI_Dialogs_EnchantDialog_var;
                  if (!bVar3) {
                    /* try { // try from 032aa468 to 033aa473 has its CatchHandler @ 032ab64c */
                    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 032aa488 to 033aa48f has its CatchHandler @ 032ab1a0 */
                    pSVar6 = System_Type__GetTypeFromHandle
                                       ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                    bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                    if (!bVar3) {
                      iVar1 = (GDKJAFIDNGF->fields)._size;
                    /* try { // try from 032aa4bc to 033aa4c3 has its CatchHandler @ 032ab19c */
                      if (iVar1 < 2) {
                        return 1;
                      }
                      pIVar4 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,
                                          iVar1 + -2,
                                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                                         );
                      if (pIVar4 != (Il2CppObject *)0x0) {
                        pIVar7 = pIVar4[1].klass;
                    /* try { // try from 032aa4e0 to 033aa4e7 has its CatchHandler @ 032ab0fc */
                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                        }
                        bVar3 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)pIVar7,
                                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (!bVar3) {
                          return 1;
                        }
                        if (pIVar7 != (Il2CppClass *)0x0) {
                    /* try { // try from 032aa508 to 033aa517 has its CatchHandler @ 032aa7dc */
                          pSVar5 = System_Object__GetType((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
                          pIVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialog_var;
                          if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564(System_Type_TypeInfo);
                          }
                          pSVar6 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                          bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                          if (!bVar3) {
                            return 1;
                          }
                          return 2;
                        }
                      }
                      goto LAB_032aa55c;
                    }
                  }
                }
              }
            }
          }
        }
        return 2;
      }
    }
  }
LAB_032aa55c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GOOCGBAMIOG(List<FNGHHNDKDJB.GPIPBKLFMOI> GDKJAFIDNGF)  [RVA 0x31AA560]
// FNGHHNDKDJB$$GOOCGBAMIOG @ RVA 0x31AA560

void FNGHHNDKDJB__GOOCGBAMIOG
               (FNGHHNDKDJB_o *__this,
               System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
               MethodInfo *method)

{
  int32_t iVar1;
  FNGHHNDKDJB_GPIPBKLFMOI_o *pFVar2;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar3;
  int iVar4;
  uint index;
  uint uVar5;
  
  pMVar3 = (MethodInfo *)GDKJAFIDNGF;
  if ((DAT_04566b2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__);
    DAT_04566b2f = 1;
    pMVar3 = extraout_x1;
  }
  iVar1 = FNGHHNDKDJB__EPJKPLIOAKN(GDKJAFIDNGF,pMVar3);
                    /* try { // try from 032aa5a4 to 033aa5af has its CatchHandler @ 032aaa0c */
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    iVar4 = (GDKJAFIDNGF->fields)._size;
                    /* try { // try from 032aa5b0 to 033aa5c3 has its CatchHandler @ 032aa15c */
                    /* catch() { ... } // from try @ 032aa558 with catch @ 032aa5b4 */
    uVar5 = iVar4 - iVar1;
    index = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    if (0 < (int)uVar5) {
                    /* try { // try from 032aa5c4 to 033aa5db has its CatchHandler @ 032ab0b4 */
      uVar5 = 0;
      do {
        pMVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
        pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,uVar5,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                           );
        if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) goto LAB_032aa634;
        FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,false,pMVar3);
        uVar5 = uVar5 + 1;
      } while (index != uVar5);
                    /* try { // try from 032aa5f0 to 033aa5f3 has its CatchHandler @ 032ab07c */
      iVar4 = (GDKJAFIDNGF->fields)._size;
    }
    while( true ) {
      if (iVar4 <= (int)index) {
        return;
      }
      pMVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
      pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                         );
      if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) break;
                    /* try { // try from 032aa60c to 033aa627 has its CatchHandler @ 032ab068 */
      FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,true,pMVar3);
      iVar4 = (GDKJAFIDNGF->fields)._size;
      index = index + 1;
    }
  }
LAB_032aa634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AKNFEIFMJKL(List<BaseDialog> DKBMJJBEADG, FNGHHNDKDJB.JPKOOJFFHEG KEMDLBKINAD)  [RVA 0x31AA714]
// FNGHHNDKDJB$$AKNFEIFMJKL @ RVA 0x31AA714

void FNGHHNDKDJB__AKNFEIFMJKL
               (FNGHHNDKDJB_o *__this,System_Collections_Generic_List_BaseDialog__o *DKBMJJBEADG,
               int32_t KEMDLBKINAD,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF;
  FNGHHNDKDJB_GPIPBKLFMOI_o *pFVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o **ppNVar7;
  FNGHHNDKDJB_o *__this_00;
  MethodInfo *method_00;
  FNGHHNDKDJB_GPIPBKLFMOI_array *pFVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 032aa720 to 033aa723 has its CatchHandler @ 032ab010 */
                    /* try { // try from 032aa724 to 033aa74b has its CatchHandler @ 032aafe0 */
  if ((DAT_04566b30 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
                    /* try { // try from 032aa75c to 033aa77b has its CatchHandler @ 032ab0d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_get_Current__);
    FUN_01bab630(&FNGHHNDKDJB_GPIPBKLFMOI_TypeInfo);
                    /* try { // try from 032aa784 to 033aa793 has its CatchHandler @ 032ab0a0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_get_Count__);
                    /* try { // try from 032aa7b0 to 033aa7b3 has its CatchHandler @ 032ab064 */
                    /* try { // try from 032aa7b4 to 033aa7c3 has its CatchHandler @ 032ab02c */
    FUN_01bab630(&System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_TypeInfo);
                    /* try { // try from 032aa7c4 to 033aa7cf has its CatchHandler @ 032ab008 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b30 = 1;
  }
                    /* try { // try from 032aa7d0 to 033aa7eb has its CatchHandler @ 032aa15c */
                    /* catch() { ... } // from try @ 032aa508 with catch @ 032aa7dc */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)DKBMJJBEADG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
                    /* try { // try from 032aa7ec to 033aa807 has its CatchHandler @ 032ab040 */
  if (bVar5) {
    if (DAT_045660f3 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
      DAT_045660f3 = '\x01';
    }
                    /* try { // try from 032aa820 to 033aa823 has its CatchHandler @ 032ab004 */
    pNVar9 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032aa838 to 033aa853 has its CatchHandler @ 032aafec */
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_032aaab8;
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetActive(pNVar9,true,(MethodInfo *)0x0);
    }
  }
  else {
    if (DKBMJJBEADG == (System_Collections_Generic_List_BaseDialog__o *)0x0) goto LAB_032aaab8;
                    /* try { // try from 032aa868 to 033aa87f has its CatchHandler @ 032aafd8 */
    iVar1 = (DKBMJJBEADG->fields)._size;
    GDKJAFIDNGF = (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_TypeInfo
                                    );
                    /* try { // try from 032aa888 to 033aa897 has its CatchHandler @ 032aafcc */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,iVar1 + 1,
               Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>__ctor__);
    if (DAT_045660f3 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
      DAT_045660f3 = '\x01';
    }
                    /* try { // try from 032aa8b4 to 033aa8b7 has its CatchHandler @ 032ab0e0 */
                    /* try { // try from 032aa8b8 to 033aa8e7 has its CatchHandler @ 032ab090 */
    pNVar9 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pFVar6 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)thunk_FUN_01bda818(FNGHHNDKDJB_GPIPBKLFMOI_TypeInfo);
                    /* try { // try from 032aa8fc to 033aa8ff has its CatchHandler @ 032ab070 */
                    /* try { // try from 032aa900 to 033aa927 has its CatchHandler @ 032ab018 */
      System_Object___ctor((Il2CppObject *)pFVar6,(MethodInfo *)0x0);
      if (pFVar6 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) {
LAB_032aaab8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppNVar7 = &(pFVar6->fields).KJMABJIEPKA;
      *ppNVar7 = pNVar9;
      thunk_FUN_01c20e04(ppNVar7,pNVar9);
      lVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_Add__;
      if (GDKJAFIDNGF == (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0)
      goto LAB_032aaab8;
      pFVar8 = (GDKJAFIDNGF->fields)._items;
      (GDKJAFIDNGF->fields)._version = (GDKJAFIDNGF->fields)._version + 1;
      if (pFVar8 == (FNGHHNDKDJB_GPIPBKLFMOI_array *)0x0) goto LAB_032aaab8;
      uVar2 = (GDKJAFIDNGF->fields)._size;
      if (uVar2 < (uint)pFVar8->max_length) {
                    /* try { // try from 032aa94c to 033aa94f has its CatchHandler @ 032aafe8 */
                    /* try { // try from 032aa950 to 033aa977 has its CatchHandler @ 032aafc8 */
        (GDKJAFIDNGF->fields)._size = uVar2 + 1;
        pFVar8->m_Items[(int)uVar2] = pFVar6;
        thunk_FUN_01c20e04(pFVar8->m_Items + (int)uVar2,pFVar6);
      }
      else {
        method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,(Il2CppObject *)pFVar6,
                   (MethodInfo_26E4DAC *)method_00);
      }
    }
                    /* try { // try from 032aa984 to 033aa9ab has its CatchHandler @ 032ab0ac */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)DKBMJJBEADG,
               Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
                    /* try { // try from 032aa9b4 to 033aa9c3 has its CatchHandler @ 032ab08c */
    local_60.fields._current = local_78.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__
                             ), pIVar4 = local_60.fields._current, bVar5) {
      pFVar6 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)thunk_FUN_01bda818(FNGHHNDKDJB_GPIPBKLFMOI_TypeInfo);
                    /* try { // try from 032aa9e0 to 033aa9e3 has its CatchHandler @ 032ab060 */
                    /* try { // try from 032aa9e4 to 033aa9f3 has its CatchHandler @ 032ab038 */
      System_Object___ctor((Il2CppObject *)pFVar6,(MethodInfo *)0x0);
      if (pFVar6 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (pFVar6->fields).BHDFAAMNDNC = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)pIVar4;
                    /* try { // try from 032aa9f4 to 033aa9ff has its CatchHandler @ 032ab014 */
      thunk_FUN_01c20e04(&pFVar6->fields,pIVar4);
      lVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_Add__;
      if (GDKJAFIDNGF == (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032aaa00 to 033aaa1f has its CatchHandler @ 032aa15c */
      pFVar8 = (GDKJAFIDNGF->fields)._items;
                    /* catch() { ... } // from try @ 032aa5a4 with catch @ 032aaa0c */
      (GDKJAFIDNGF->fields)._version = (GDKJAFIDNGF->fields)._version + 1;
      if (pFVar8 == (FNGHHNDKDJB_GPIPBKLFMOI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (GDKJAFIDNGF->fields)._size;
                    /* try { // try from 032aaa20 to 033aaa37 has its CatchHandler @ 032aaf5c */
      if (uVar2 < (uint)pFVar8->max_length) {
        (GDKJAFIDNGF->fields)._size = uVar2 + 1;
        pFVar8->m_Items[(int)uVar2] = pFVar6;
        thunk_FUN_01c20e04(pFVar8->m_Items + (int)uVar2,pFVar6);
      }
      else {
        method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                    /* try { // try from 032aaa54 to 033aaa57 has its CatchHandler @ 032aaf54 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,(Il2CppObject *)pFVar6,
                   (MethodInfo_26E4DAC *)method_00);
      }
    }
                    /* try { // try from 032aaa70 to 033aaa8b has its CatchHandler @ 032aaf88 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
    if (KEMDLBKINAD == 0) {
      FNGHHNDKDJB__PGPBJFKFGPD(__this_00,GDKJAFIDNGF,method_00);
    }
    else if (KEMDLBKINAD == 1) {
      FNGHHNDKDJB__GOOCGBAMIOG(__this_00,GDKJAFIDNGF,method_00);
    }
  }
                    /* try { // try from 032aaaa0 to 033aaab3 has its CatchHandler @ 032aaf4c */
  return;
}


// ===== private void PGPBJFKFGPD(List<FNGHHNDKDJB.GPIPBKLFMOI> GDKJAFIDNGF)  [RVA 0x31AAB44]
// FNGHHNDKDJB$$PGPBJFKFGPD @ RVA 0x31AAB44

void FNGHHNDKDJB__PGPBJFKFGPD
               (FNGHHNDKDJB_o *__this,
               System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
               MethodInfo *method)

{
  bool bVar1;
  FNGHHNDKDJB_GPIPBKLFMOI_o *pFVar2;
  int index;
  
  if ((DAT_04566b31 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_AELBAPFOKHK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
                    /* try { // try from 032aab84 to 033aab87 has its CatchHandler @ 032aafb0 */
                    /* try { // try from 032aab88 to 033aabaf has its CatchHandler @ 032aafa8 */
    __this = (FNGHHNDKDJB_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                         );
    DAT_04566b31 = 1;
  }
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    if (0 < (GDKJAFIDNGF->fields)._size + -1) {
      index = 0;
      do {
        method = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
                    /* try { // try from 032aabbc to 033aabdf has its CatchHandler @ 032aaf8c */
        pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                           );
        __this = (FNGHHNDKDJB_o *)0x0;
        if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) goto LAB_032aac30;
        FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,false,method);
        index = index + 1;
      } while (index < (GDKJAFIDNGF->fields)._size + -1);
    }
                    /* try { // try from 032aabe8 to 033aabf7 has its CatchHandler @ 032aaf50 */
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                       Method_DJNBJHPDKDP_OBECCOPBADO<FNGHHNDKDJB_GPIPBKLFMOI>__);
    if (bVar1) {
      return;
    }
                    /* try { // try from 032aac14 to 033aac17 has its CatchHandler @ 032aaf48 */
                    /* try { // try from 032aac18 to 033aac27 has its CatchHandler @ 032aaf80 */
    pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
             DJNBJHPDKDP__AELBAPFOKHK<object>
                       ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                        Method_DJNBJHPDKDP_AELBAPFOKHK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    __this = (FNGHHNDKDJB_o *)0x0;
    if (pFVar2 != (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) {
                    /* try { // try from 032aac28 to 033aac33 has its CatchHandler @ 032aaf40 */
      FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,true,method);
      return;
    }
  }
LAB_032aac30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor()  [RVA 0x31AAC34]
// FNGHHNDKDJB$$.ctor @ RVA 0x31AAC34

void FNGHHNDKDJB___ctor(FNGHHNDKDJB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

