// Nekki.SF2.GUI.Profile.PerkCell$$Clear @ RVA 0x353F510

void Nekki_SF2_GUI_Profile_PerkCell__Clear
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_00;
  
  pNVar1 = (__this->fields)._LeftSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    Nekki_SF2_GUI_Profile_PerkSubItem__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightSubItem;
    if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      Nekki_SF2_GUI_Profile_PerkSubItem__Clear(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._RightSubItem;
      if ((pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PerkLines;
        if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

