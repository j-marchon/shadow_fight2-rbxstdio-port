// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$LLCEDKDCDCM @ RVA 0x3539414

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LLCEDKDCDCM
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
               System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *extraout_x0;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_01;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_02;
  KMDOLFBIGNC_o *item;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *pNVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  PLIIGOCLJDL_o *pPVar5;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar6;
  Il2CppObject *pIVar7;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *pSVar10;
  KMDOLFBIGNC_array *pKVar11;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *pNVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  int iVar14;
  int index;
  int iVar15;
  undefined8 local_68;
  
  __this_00 = __this;
  if ((DAT_04568ab6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)
                FUN_01bab630(&StringLiteral_22052);
    DAT_04568ab6 = 1;
  }
  local_68 = 0;
  pSVar10 = (__this->fields).JILLAJIPGFH;
  if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
    uVar1 = (pSVar10->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,uVar1,(MethodInfo *)0x0);
      __this_00 = extraout_x0;
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__FKNCNBACLKL
                          (__this_00,LBELDDAPIMD,method_00);
    if (__this_01 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        iVar15 = 0;
        do {
          __this_02 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
          iVar14 = 0;
          do {
            if ((__this_01->fields)._size <= iVar15 + iVar14) break;
            method_00 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__;
            item = (KMDOLFBIGNC_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar15 + iVar14
                              ,(MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
            lVar2 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__;
            if (__this_02 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)
            goto LAB_036398d4;
            pKVar11 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pKVar11 == (KMDOLFBIGNC_array *)0x0) goto LAB_036398d4;
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pKVar11->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pKVar11->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04();
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item
                         ,(MethodInfo_26E4DAC *)method_00);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != 3);
          pSVar10 = (__this->fields).JILLAJIPGFH;
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
                   thunk_FUN_01bda818(
                                     Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo
                                     );
          Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN___ctor(pNVar3,(MethodInfo *)0x0);
          if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0)
          goto LAB_036398d4;
          (pNVar3->fields).PCAAANOFKNG = __this_02;
          thunk_FUN_01c20e04(&pNVar3->fields,__this_02);
          lVar2 = Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__;
          if (pSVar10 == (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0)
          goto LAB_036398d4;
          pNVar12 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pNVar12 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *)0x0)
          goto LAB_036398d4;
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar12->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar12->m_Items[(int)uVar1] = pNVar3;
            thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar3);
          }
          else {
            method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar3,
                       (MethodInfo_26E4DAC *)method_00);
          }
          iVar15 = iVar15 + 3;
        } while (iVar15 < (__this_01->fields)._size);
      }
      pSVar10 = (__this->fields).JILLAJIPGFH;
      pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
               thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo)
      ;
      Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN___ctor(pNVar3,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__;
      if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
        pNVar12 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *)0x0) {
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar12->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar12->m_Items[(int)uVar1] = pNVar3;
            thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar3);
          }
          else {
            method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar3,
                       (MethodInfo_26E4DAC *)method_00);
          }
          pNVar4 = (__this->fields)._simpleScroll;
          if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
            Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
            pSVar10 = (__this->fields).JILLAJIPGFH;
            if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
              iVar15 = 0;
              do {
                if ((pSVar10->fields)._size <= iVar15) {
                  pNVar4 = (__this->fields)._simpleScroll;
                  if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar4,0,0.0,8,(MethodInfo *)0x0);
                    local_68 = 0;
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                    if (pPVar5 != (PLIIGOCLJDL_o *)0x0) {
                      pJVar6 = PLIIGOCLJDL__LPCLGCOCEEA(pPVar5,1,(MethodInfo *)0x0);
                      if ((__this_01->fields)._size < 1) goto LAB_03639834;
                      iVar14 = 0;
                      iVar15 = 0;
                      index = 0;
                      goto LAB_036397c0;
                    }
                  }
                  break;
                }
                Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__JALIJKAKFIA(__this,iVar15,method_00);
                pSVar10 = (__this->fields).JILLAJIPGFH;
                iVar15 = iVar15 + 1;
              } while (pSVar10 !=
                       (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0);
            }
          }
        }
      }
    }
  }
  goto LAB_036398d4;
  while( true ) {
    pJVar8 = PLIIGOCLJDL__LPCLGCOCEEA(pPVar5,*(int32_t *)&pIVar7[2].monitor,(MethodInfo *)0x0);
    if (pJVar8 != (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
      if (pJVar8 == pJVar6) {
        iVar14 = iVar14 + 1;
        local_68 = CONCAT44(iVar14,(undefined4)local_68);
      }
      else {
        iVar15 = iVar15 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar15);
      }
    }
    index = index + 1;
    if ((__this_01->fields)._size <= index) break;
LAB_036397c0:
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    pIVar7 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    if ((pIVar7 == (Il2CppObject *)0x0) || (pPVar5 == (PLIIGOCLJDL_o *)0x0)) goto LAB_036398d4;
  }
LAB_03639834:
  pNVar13 = (__this->fields)._lblGoldCount;
  pSVar9 = System_Int32__ToString((int)&local_68 + 4,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat(StringLiteral_22052,pSVar9,(MethodInfo *)0x0);
  if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
              (pNVar13,pSVar9,(pNVar13->klass->vtable)._75_set_text.method);
    pNVar13 = (__this->fields)._lblSilverCount;
    pSVar9 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(StringLiteral_22052,pSVar9,(MethodInfo *)0x0);
    if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                (pNVar13,pSVar9,(pNVar13->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_036398d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

