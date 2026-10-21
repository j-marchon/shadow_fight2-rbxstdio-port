// Nekki.SF2.GUI.Profile.PerkContent$$BDIDKFGDFIL @ RVA 0x32973FC

void Nekki_SF2_GUI_Profile_PerkContent__BDIDKFGDFIL
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_PerkContent__IEFEHKIGBFG(__this,method);
  if (((__this->fields).GGGJLIBFAOI == (ECENNHNBAME_o *)0x0) ||
     ((__this->fields).PABIMIFJJKF != false)) {
    __this_00 = (__this->fields)._Keys;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_03397448:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = false;
  }
  else {
    Nekki_SF2_GUI_Profile_PerkContent__GDBCBFBCBLL(__this,method_00);
    __this_00 = (__this->fields)._Keys;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03397448;
    value = true;
  }
  UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
  return;
}

