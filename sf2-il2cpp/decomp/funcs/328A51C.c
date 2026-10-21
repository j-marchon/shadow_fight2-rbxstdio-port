// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KIEKMKFIHFG @ RVA 0x328A51C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KIEKMKFIHFG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t JLAFGLDIFOC;
  int32_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  IGFGDDANEPE_o *pIVar6;
  JHBHHHKEFOO_o *pJVar7;
  System_Predicate_HFNLANEMDFI__o **ppSVar8;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar10;
  LPGLKMNHELJ_o *pLVar11;
  MFFKCPDBFPG_o *pMVar12;
  DILGLGMKOFG_array *pDVar13;
  System_Collections_Generic_List_OCOEAJMJEOP__o *pSVar14;
  int DHEJIHJMOGL;
  System_String_o *KGLJICLJHEL;
  MCCHIAKPFEL_o *pMVar15;
  System_Collections_Generic_List_HFNLANEMDFI__o *__this_00;
  System_Predicate_HFNLANEMDFI__o *match;
  int iVar16;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045672f6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HFNLANEMDFI>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<HFNLANEMDFI>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_IKDGHDCECPN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672f6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar10 = (__this->fields).HPJNLAOAJJE;
  if (pSVar10 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    uVar1 = (pSVar10->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
      JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
      pLVar11 = (__this->fields).DKMMBMBMJBO;
      if (((pLVar11 != (LPGLKMNHELJ_o *)0x0) &&
          (pMVar12 = (pLVar11->fields).FGCJFGHMIOL, pMVar12 != (MFFKCPDBFPG_o *)0x0)) &&
         (pSVar10 = (pMVar12->fields).EEIGOFDOLKN,
         pSVar10 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar10,
                   Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
        iVar16 = -1;
        DHEJIHJMOGL = -1;
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
LAB_0338a6e0:
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__
                          );
        item = local_80.fields._current;
        if (bVar3) {
          if ((DILGLGMKOFG_o *)local_80.fields._current == (DILGLGMKOFG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = (MethodInfo *)0x0;
          bVar3 = BCOICIIDFPD__DNEACMPPKPC
                            ((BCOICIIDFPD_o *)local_80.fields._current,JLAFGLDIFOC,(MethodInfo *)0x0
                            );
          if (bVar3) {
            KGLJICLJHEL = *(System_String_o **)
                           &((DILGLGMKOFG_Fields *)((long)item + 0x10))->MBCNFGBPLEP;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
            if (pIVar6 == (IGFGDDANEPE_o *)0x0) {
              pSVar10 = (__this->fields).HPJNLAOAJJE;
                    /* try { // try from 0338a734 to 0348a7cf has its CatchHandler @ 0338a734
                       catch() { ... } // from try @ 0338a734 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a7ec with catch @ 0338a734
                       catch() { ... } // from try @ 0338a868 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a890 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a8d0 with catch @ 0338a734 */
              if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pDVar13 = (pSVar10->fields)._items;
              (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
              if (pDVar13 == (DILGLGMKOFG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (pSVar10->fields)._size;
              if (uVar1 < (uint)pDVar13->max_length) {
                (pSVar10->fields)._size = uVar1 + 1;
                pDVar13->m_Items[(int)uVar1] = (DILGLGMKOFG_o *)item;
                thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar1,item);
              }
              else {
                method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar10,item,
                           (MethodInfo_26E4DAC *)method_00);
              }
              if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super)._GDKBFEGNHNP_k__BackingField
                  == false) {
                pMVar15 = (((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                          _BLIMDANKDIH_k__BackingField;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                    /* try { // try from 0338a7d0 to 0348a7d7 has its CatchHandler @ 0338a874 */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0338a7e4 to 0348a7eb has its CatchHandler @ 0338a870 */
                if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                    /* try { // try from 0338a7ec to 0348a863 has its CatchHandler @ 0338a734 */
                iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
                if (pMVar15 == (MCCHIAKPFEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                method_00 = (MethodInfo *)0x0;
                pJVar7 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar15,iVar4,(MethodInfo *)0x0);
                if (pJVar7 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar14 = (pJVar7->fields).GHAAKPDHIJJ;
                if (pSVar14 == (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if (0 < (pSVar14->fields)._size) {
                  pSVar10 = (__this->fields).HPJNLAOAJJE;
                  if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  DHEJIHJMOGL = (pSVar10->fields)._size + -1;
                }
                if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                    _GDKBFEGNHNP_k__BackingField == false) {
                  pMVar15 = (((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                            _BLIMDANKDIH_k__BackingField;
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                    /* try { // try from 0338a864 to 0348a867 has its CatchHandler @ 0338a86c */
                    /* try { // try from 0338a868 to 0348a88b has its CatchHandler @ 0338a734 */
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a864 with catch @ 0338a86c
                        */
                    thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a7e4 with catch @ 0338a870
                        */
                  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a7d0 with catch @ 0338a874
                        */
                  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
                    /* try { // try from 0338a88c to 0348a88f has its CatchHandler @ 0338a8b8 */
                  if (pMVar15 == (MCCHIAKPFEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                    /* try { // try from 0338a890 to 0348a8c7 has its CatchHandler @ 0338a734 */
                  pJVar7 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar15,iVar4,(MethodInfo *)0x0);
                  if (pJVar7 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  __this_00 = (pJVar7->fields).GMCEHJAIFBJ;
                  if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0338a88c with catch @ 0338a8b8 */
                    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
                    /* try { // try from 0338a8c8 to 0348a8cf has its CatchHandler @ 0338a8e4 */
                  }
                    /* try { // try from 0338a8d0 to 0348a8db has its CatchHandler @ 0338a734 */
                  match = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__75_0
                  ;
                  if (match == (System_Predicate_HFNLANEMDFI__o *)0x0) {
                    /* try { // try from 0338a8dc to 0348a8e3 has its CatchHandler @ 0338a8e4 */
                    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0)
                    {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338a8c8 with catch @ 0338a8e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0338a8dc with catch @ 0338a8e4
                        */
                      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
                    }
                    match = (System_Predicate_HFNLANEMDFI__o *)
                            thunk_FUN_01bda818(System_Predicate<HFNLANEMDFI>_TypeInfo);
                    System_Predicate<object>___ctor();
                    ppSVar8 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->
                               __9__75_0;
                    *ppSVar8 = match;
                    thunk_FUN_01c20e04(ppSVar8,match);
                  }
                  if (__this_00 == (System_Collections_Generic_List_HFNLANEMDFI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  method_00 = Method_System_Collections_Generic_List<HFNLANEMDFI>_Exists__;
                  bVar3 = System_Collections_Generic_List<object>__Exists
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (System_Predicate_T__o *)match,
                                     (MethodInfo_26E53D8 *)
                                     Method_System_Collections_Generic_List<HFNLANEMDFI>_Exists__);
                  if (bVar3) {
                    pSVar10 = (__this->fields).HPJNLAOAJJE;
                    if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    iVar16 = (pSVar10->fields)._size + -1;
                  }
                  if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                      _GDKBFEGNHNP_k__BackingField == false) goto LAB_0338a6e0;
                }
              }
              if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).field_0x3c == '\0') {
                pSVar10 = (__this->fields).HPJNLAOAJJE;
                if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                (__this->fields).BECMMEIMOAL = (pSVar10->fields)._size + -1;
              }
            }
          }
          goto LAB_0338a6e0;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
        if ((__this->fields).KGJOHFHDLFK == false) {
          Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA(__this,false,method_00);
        }
        pEVar9 = (__this->fields).Scroller;
        if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
          EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData(pEVar9,0.0,(MethodInfo *)0x0);
          pLVar11 = (__this->fields).DKMMBMBMJBO;
          if (pLVar11 != (LPGLKMNHELJ_o *)0x0) {
            if ((pLVar11->fields).BGHFADDGPAD == 0) {
              if (DHEJIHJMOGL == -1) {
                if (iVar16 == -1) {
                  return;
                }
                pEVar9 = (__this->fields).Scroller;
                DHEJIHJMOGL = iVar16;
              }
              else {
                pEVar9 = (__this->fields).Scroller;
              }
              if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)
              goto LAB_0338aa5c;
            }
            else {
              pEVar9 = (__this->fields).Scroller;
              if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                DHEJIHJMOGL = 0;
LAB_0338aa5c:
                EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                          (pEVar9,DHEJIHJMOGL,0.5,0.5,true,0,0.0,(System_Action_o *)0x0,0,false,
                           (MethodInfo *)0x0);
                return;
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

