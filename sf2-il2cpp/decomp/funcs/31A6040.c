// Nekki.SF2.GUI.Profile.TrickSubItem$$BDIDKFGDFIL @ RVA 0x31A6040

void Nekki_SF2_GUI_Profile_TrickSubItem__BDIDKFGDFIL
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar1;
  UnityEngine_GameObject_o *__this_01;
  bool value;
  MethodInfo *method_00;
  KCLPNDAPADO_o *pKVar2;
  
  Nekki_SF2_GUI_Profile_TrickSubItem__IEFEHKIGBFG(__this,method);
  pKVar2 = (__this->fields).MGHHBGMPDEI;
  if ((pKVar2 != (KCLPNDAPADO_o *)0x0) &&
     (__this_00 = (pKVar2->fields).FLIONKHMLLB, __this_00 != (ECENNHNBAME_o *)0x0)) {
    pGVar1 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0);
    if (pGVar1 == (GBKCLIFGIFN_o *)0x0) {
      __this_01 = (__this->fields)._Keys;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_032a6098;
      value = false;
    }
    else {
      Nekki_SF2_GUI_Profile_TrickSubItem__GDBCBFBCBLL(__this,method_00);
      __this_01 = (__this->fields)._Keys;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_032a6098;
      value = true;
    }
    UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
    return;
  }
LAB_032a6098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

