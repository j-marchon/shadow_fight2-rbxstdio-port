// Nekki.SF2.GUI.Shop.ItemsPanel$$CellForRowInTableView @ RVA 0x310E5C8

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Shop_ItemsPanel__CellForRowInTableView
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
          int32_t JDEFJPHCNMM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_Func_string__bool__o **ppSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_String_o *str3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  EOAOCPLIKOI_StaticFields *pEVar7;
  System_Func_string__bool__o *IMNBAFCEDMA;
  int32_t local_38;
  int32_t local_34;
  
  local_34 = JDEFJPHCNMM;
  if ((DAT_04566567 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<ShopTableViewCell>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_NEPCOPEIAKL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8119);
    FUN_01bab630(&StringLiteral_338);
    DAT_04566567 = 1;
  }
  local_38 = 0;
  if (-1 < JDEFJPHCNMM) {
    pSVar6 = (__this->fields).BAADKBDJJPJ;
    if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0320e950;
    if (JDEFJPHCNMM < (pSVar6->fields)._size) {
      if ((HDFMPLDOEJG != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)
                      Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                                (HDFMPLDOEJG,JDEFJPHCNMM,
                                 Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<ShopTableViewCell>__
                                ), __this_00 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
        (*(__this_00->klass->vtable)._12_set_Opacity.methodPtr)
                  ((ulong)(uint)(__this->fields)._InactiveCellOpacity,__this_00,
                   (__this_00->klass->vtable)._12_set_Opacity.method);
        (__this_00->fields)._BFMLDOLAEKH_k__BackingField = (__this->fields)._InactiveCellOpacity;
        (__this_00->fields)._DJOIAMEIMOG_k__BackingField.fields =
             (__this->fields).HGCMLPDPFIK.fields;
        Nekki_SF2_GUI_Shop_ShopTableViewCell__set_IconPanelActive
                  (__this_00,(__this->fields).PMDCABLGDGF,(MethodInfo *)0x0);
        (__this_00->fields).MaxAllowedSize = (__this->fields).LKOBHGOBICA;
        pSVar6 = (__this->fields).BAADKBDJJPJ;
        if (pSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          IKKAMAMLIKA = (HOOAAGABMBL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,JDEFJPHCNMM,
                                   Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          Nekki_SF2_GUI_Shop_ShopTableViewCell__SetItemInfo(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0)
          ;
          (__this->fields).PEGHCDPFFHB = (__this->fields).PEGHCDPFFHB + 1;
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = EOAOCPLIKOI_TypeInfo->static_fields;
          if (pEVar7->ABJLMAOEEEE == false) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          iVar1 = (__this->fields).PEGHCDPFFHB;
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pEVar7 = EOAOCPLIKOI_TypeInfo->static_fields;
          }
          if (iVar1 < pEVar7->LHKIPKIGEHA) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IMNBAFCEDMA = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__90_0;
          if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) {
            if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            IMNBAFCEDMA = (System_Func_string__bool__o *)
                          thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            ppSVar3 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__90_0;
            *ppSVar3 = IMNBAFCEDMA;
            thunk_FUN_01c20e04(ppSVar3,IMNBAFCEDMA);
          }
          if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = AMHFFFODDOC__GMAJCILJMAN(IMNBAFCEDMA,(MethodInfo *)0x0);
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
          }
          if (iVar2 < EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8) !=
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
            Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8),
                       (MethodInfo *)0x0);
            (__this->fields).PEGHCDPFFHB = 0;
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
        }
      }
      goto LAB_0320e950;
    }
  }
  pSVar5 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).BAADKBDJJPJ;
  if (pSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    local_38 = (pSVar6->fields)._size;
    str3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat
                       (StringLiteral_8119,pSVar5,StringLiteral_338,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
LAB_0320e950:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

