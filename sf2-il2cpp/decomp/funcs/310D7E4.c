// Nekki.SF2.GUI.Shop.ItemsPanel$$EHPMHOHOPGA @ RVA 0x310D7E4

void Nekki_SF2_GUI_Shop_ItemsPanel__EHPMHOHOPGA
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t IDPMJOKDHNP;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_00;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar4;
  EEGDOGKBLNG_o *__this_02;
  JMDPBFOCHHP_o *__this_03;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar6;
  HOOAAGABMBL_o *pHVar7;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_04;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o **ppNVar8;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar9;
  
  if ((DAT_04566572 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_Invoke__);
    DAT_04566572 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo->_2).naturalAligment;
    if ((HBHBCBJANIC->klass->_2).naturalAligment < bVar1) {
      HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
    else if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo) {
      HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
  }
  ppNVar8 = &(__this->fields).HCMDPJADLOL;
  pNVar9 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = *ppNVar8;
    if (pNVar9 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_0320db24;
    (*(pNVar9->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._InactiveCellOpacity,pNVar9,
               (pNVar9->klass->vtable)._12_set_Opacity.method);
  }
  *ppNVar8 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC;
  thunk_FUN_01c20e04(ppNVar8,HBHBCBJANIC);
  pNVar9 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC !=
      (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
    pNVar9 = (__this->fields).HCMDPJADLOL;
    (__this->fields).AINAHFKFDKG =
         (((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC)->fields).super.FIMCNHGPCNA;
    if (pNVar9 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
      (*(pNVar9->klass->vtable)._12_set_Opacity.methodPtr)
                ((__this->fields)._ActiveCellOpacity,pNVar9,
                 (pNVar9->klass->vtable)._12_set_Opacity.method);
      pNVar9 = (__this->fields).HCMDPJADLOL;
      if ((pNVar9 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) &&
         (__this_00 = (__this->fields)._OnItemSelected,
         __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *)0x0)) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                   (Il2CppObject *)(pNVar9->fields).IHKJJFAEEHM,
                   Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_Invoke__);
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if (**(long **)(lVar3 + 0xb8) != 0) {
          if ((*(int *)(**(long **)(lVar3 + 0xb8) + 0x218) == 6) &&
             (pHVar7 = (((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC)->fields).IHKJJFAEEHM
             , pHVar7 != (HOOAAGABMBL_o *)0x0)) {
            bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
            if ((bVar1 <= (pHVar7->klass->_2).naturalAligment) &&
               ((pHVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
              if (DAT_04565b84 == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                DAT_04565b84 = '\x01';
              }
              pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                       _JPDNDPEAJAL_k__BackingField;
              if (((pNVar6 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                  (pHVar7[1].klass != (HOOAAGABMBL_c *)0x0)) &&
                 (__this_01 = (System_Collections_Generic_List_object__o *)
                              ((pHVar7[1].klass)->_1).implementedInterfaces,
                 __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
                __this_04 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar6->fields)._energy;
                if (((__this_01->fields)._size < 1) ||
                   (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                       (__this_01,0,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                                       ), pIVar4 == (Il2CppObject *)0x0)) {
                  if (__this_04 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins(__this_04,(MethodInfo *)0x0)
                    ;
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(__this_04,(MethodInfo *)0x0);
                    return;
                  }
                }
                else {
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if ((__this_02 != (EEGDOGKBLNG_o *)0x0) &&
                     (IDPMJOKDHNP = EEGDOGKBLNG__APFFEAJBAEK
                                              (__this_02,(System_String_o *)pIVar4[1].klass,
                                               (MethodInfo *)0x0),
                     __this_04 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoins
                              (__this_04,IDPMJOKDHNP,(MethodInfo *)0x0);
                    __this_03 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    if ((__this_03 != (JMDPBFOCHHP_o *)0x0) &&
                       (pJVar5 = JMDPBFOCHHP__BHJOLIJDBLO
                                           (__this_03,(System_String_o *)pIVar4[1].klass,
                                            (MethodInfo *)0x0),
                       pJVar5 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0)) {
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoinsIcon
                                (__this_04,(pJVar5->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto LAB_0320db24;
            }
          }
          return;
        }
      }
    }
  }
LAB_0320db24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

