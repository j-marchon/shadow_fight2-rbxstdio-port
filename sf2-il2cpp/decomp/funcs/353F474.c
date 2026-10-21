// Nekki.SF2.GUI.Profile.PerkCell$$GetSubItemByPosition @ RVA 0x353F474

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,int32_t EEGKJKNENDE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (EEGKJKNENDE == 3) {
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0363f4fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return (__this->fields)._RightSubItem;
    }
  }
  else if (EEGKJKNENDE != 2) {
    if (EEGKJKNENDE != 1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0363f4fc;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
  return (__this->fields)._LeftSubItem;
}

