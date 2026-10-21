// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$AENLKMEMLLP @ RVA 0x35AE884

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AENLKMEMLLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  IFFFKKMMKFO_o *pIVar2;
  
  if ((DAT_04568e6f & 1) == 0) {
    FUN_01bab630(&StringLiteral_10863);
    DAT_04568e6f = 1;
  }
  pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
     (pNVar1 = (__this->fields)._bgPic, pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    if ((pIVar2->fields)._FPBBMLACBJE_k__BackingField == false) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_036ae918;
      value = false;
    }
    else {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,StringLiteral_10863,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._bgPic;
      if ((pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036ae918;
      value = true;
    }
    UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_036ae918:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

