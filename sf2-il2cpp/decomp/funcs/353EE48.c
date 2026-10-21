// Nekki.SF2.GUI.Profile.PerkCell$$GetSubItemByCurrentSubItemAndLastPosition @ RVA 0x353EE48

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD
          ,int32_t EHFBCDNCMDM,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  
                    /* try { // try from 0363ee58 to 0373ee5f has its CatchHandler @ 0363efc4 */
                    /* try { // try from 0363ee68 to 0373ee6f has its CatchHandler @ 0363efdc */
  if ((DAT_04568ae5 & 1) == 0) {
                    /* try { // try from 0363ee74 to 0373ee7b has its CatchHandler @ 0363efcc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ae5 = 1;
  }
  if (EHFBCDNCMDM == 3) {
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363ef80 to 0373ef87 has its CatchHandler @ 0363f014 */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0363eec0 to 0373eee3 has its CatchHandler @ 0363efe0 */
    if (bVar1) {
      pNVar2 = (__this->fields)._RightSubItem;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0363eee4 to 0373ef7f has its CatchHandler @ 0363eac0 */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return (__this->fields)._RightSubItem;
      }
    }
    pNVar2 = (__this->fields)._LeftSubItem;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._RightSubItem;
  }
  else {
    if (EHFBCDNCMDM != 2) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._LeftSubItem;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                     (MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  if (bVar1) {
    pNVar2 = (__this->fields)._LeftSubItem;
  }
  return pNVar2;
}

