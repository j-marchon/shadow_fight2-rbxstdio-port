// Nekki.SF2.GUI.Pvp.PlayerMenu$$GIENGNEGHPJ @ RVA 0x3047CC0

void Nekki_SF2_GUI_Pvp_PlayerMenu__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o *value;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04565df2 & 1) == 0) {
                    /* catch() { ... } // from try @ 03147ca0 with catch @ 03147cdc */
                    /* try { // try from 03147ce4 to 03247cef has its CatchHandler @ 03147d04 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03147cf0 to 03247cfb has its CatchHandler @ 03147b14 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                    /* try { // try from 03147cfc to 03247d03 has its CatchHandler @ 03147d04 */
    FUN_01bab630(&StringLiteral_8708);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03147ce4 with catch @ 03147d04
                       catch(type#2 @ 00000000) { ... } // from try @ 03147cfc with catch @ 03147d04
                        */
    DAT_04565df2 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._PlayerOneLabel;
  if ((DAT_04565df1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20226);
    DAT_04565df1 = 1;
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    auVar4 = (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                       (pNVar3,StringLiteral_20226,(pNVar3->klass->vtable)._75_set_text.method);
    value = Nekki_SF2_GUI_Pvp_PlayerMenu__OPJMMBKBCLC(auVar4._0_8_,auVar4._8_8_);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log(StringLiteral_8708,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._PlayerOneAvatar;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this_00,value,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._PlayerOneInputSelector;
      if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._PlayerTwoInputSelector;
        if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5c == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5c = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
                    (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,
                     method_00);
          if (DAT_04565e5b == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5b = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
                    (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,
                     method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

