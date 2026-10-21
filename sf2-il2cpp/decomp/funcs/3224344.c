// NGCEHDLJOMI$$ABJHGPKGMLH @ RVA 0x3224344

void NGCEHDLJOMI__ABJHGPKGMLH(NGCEHDLJOMI_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ulong uVar1;
  ulong extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  UnityEngine_UI_Image_o *__this_01;
  
  uVar1 = (ulong)(uint)ICJLHMDFMKG;
  if ((DAT_04566f63 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo,uVar1);
    FUN_01bab630(&Method_NGCEHDLJOMI_ABJHGPKGMLH__);
    DAT_04566f63 = 1;
    uVar1 = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,uVar1);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    __this_01 = (pNVar2->fields)._backgroundPicture;
    CJNHFNHJHPE = (System_Action_MenuScroll_OAPJJKKCANC__o *)
                  thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuScroll__remove_OnRolling
                ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

