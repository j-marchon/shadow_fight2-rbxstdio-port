// Nekki.SF2.GUI.Shop.ShopScene$$UpdateNewItemsCounters @ RVA 0x34323BC

void Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Action_HOOAAGABMBL__o **ppSVar2;
  DOPEEDABNEK_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  ACHLOMELAJE_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_04;
  System_Action_HOOAAGABMBL__o *action;
  
  if ((DAT_0456819a & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_UpdateIndicators__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_<>c_JAPJJMNLKOH__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
    DAT_0456819a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    __this_04 = (pNVar3->fields).BAADKBDJJPJ;
    if (__this_04 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo,method);
        method = extraout_x1_00;
      }
      action = Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__123_0;
      if (action == (System_Action_HOOAAGABMBL__o *)0x0) {
        if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo,method);
        }
        action = (System_Action_HOOAAGABMBL__o *)
                 thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__123_0;
        *ppSVar2 = action;
        thunk_FUN_01c20e04(ppSVar2,action);
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_04,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_00 != (DOPEEDABNEK_o *)0x0) {
      iVar1 = DOPEEDABNEK__JMPINBGBLNI(__this_00,(MethodInfo *)0x0);
      if ((__this->fields).FIBCDHMGBIL == iVar1) {
        return;
      }
      __this_01 = (__this->fields).GJIPOBCNEPG;
      (__this->fields).FIBCDHMGBIL = iVar1;
      if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_01,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_UpdateIndicators__);
        __this_02 = (__this->fields).CCKIFMALFBA;
        if (__this_02 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this_02,(MethodInfo *)0x0);
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
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_03,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

