// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnDisable @ RVA 0x3094EE8

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnDisable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* try { // try from 03194f00 to 03294f0b has its CatchHandler @ 03194474 */
  if ((DAT_045660ca & 1) == 0) {
                    /* try { // try from 03194f0c to 03294f13 has its CatchHandler @ 03194f14 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03194dd0 with catch @ 03194f14
                       catch() { ... } // from try @ 03194ed8 with catch @ 03194f14
                       catch() { ... } // from try @ 03194f0c with catch @ 03194f14 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660ca = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._label;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

