// Nekki.SF2.GUI.Profile.TrickContent$$OnShowButtonClick @ RVA 0x31B1CFC

void Nekki_SF2_GUI_Profile_TrickContent__OnShowButtonClick
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  
  if ((DAT_04566b81 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04566b81 = 1;
  }
  if ((__this->fields).MGHHBGMPDEI == (KCLPNDAPADO_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._ShowButton;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
      Nekki_SF2_GUI_Profile_ProfileScene__PlayTrick
                ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                 (__this->fields).MGHHBGMPDEI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

