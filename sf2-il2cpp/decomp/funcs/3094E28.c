// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnEnable @ RVA 0x3094E28

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* catch() { ... } // from try @ 03194ce8 with catch @ 03194e2c */
                    /* catch() { ... } // from try @ 03194e20 with catch @ 03194e38 */
                    /* catch() { ... } // from try @ 03194e18 with catch @ 03194e3c */
                    /* catch() { ... } // from try @ 03194c4c with catch @ 03194e40 */
                    /* catch() { ... } // from try @ 03194e10 with catch @ 03194e44 */
  if ((DAT_045660c9 & 1) == 0) {
                    /* catch() { ... } // from try @ 03194e04 with catch @ 03194e48 */
                    /* catch() { ... } // from try @ 03194c00 with catch @ 03194e4c */
                    /* catch() { ... } // from try @ 03194938 with catch @ 03194e50
                       catch() { ... } // from try @ 03194970 with catch @ 03194e50 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03194870 with catch @ 03194e54 */
                    /* catch() { ... } // from try @ 031948e4 with catch @ 03194e58 */
                    /* catch() { ... } // from try @ 03194e08 with catch @ 03194e5c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03194888 with catch @ 03194e64
                       catch() { ... } // from try @ 03194954 with catch @ 03194e64 */
    DAT_045660c9 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03194838 with catch @ 03194e68 */
                    /* catch() { ... } // from try @ 031947d4 with catch @ 03194e6c */
  pNVar2 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03194e88 to 03294e8b has its CatchHandler @ 03194e98 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._label;
                    /* catch() { ... } // from try @ 03194e88 with catch @ 03194e98 */
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03194ed8 to 03294eff has its CatchHandler @ 03194f14 */
  return;
}

