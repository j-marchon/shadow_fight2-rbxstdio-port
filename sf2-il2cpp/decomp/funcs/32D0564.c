// Nekki.SF2.GUI.Profile.PerksController$$SelectLeftSubItem @ RVA 0x32D0564

bool Nekki_SF2_GUI_Profile_PerksController__SelectLeftSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
                    /* try { // try from 033d0564 to 034d056f has its CatchHandler @ 033d0630 */
                    /* try { // try from 033d0574 to 034d057b has its CatchHandler @ 033d0638 */
  if ((DAT_0456754a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456754a = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 033d05bc to 034d05df has its CatchHandler @ 033d063c */
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d05e0 to 034d0613 has its CatchHandler @ 033d0388 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 033d0614 to 034d0617 has its CatchHandler @ 033d0658 */
                    /* try { // try from 033d0618 to 034d061b has its CatchHandler @ 033d0648 */
                    /* try { // try from 033d061c to 034d061f has its CatchHandler @ 033d0658 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d0620 to 034d0623 has its CatchHandler @ 033d0644 */
                    /* try { // try from 033d0624 to 034d0627 has its CatchHandler @ 033d0640 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 033d0628 to 034d062b has its CatchHandler @ 033d0634 */
                    /* try { // try from 033d062c to 034d0677 has its CatchHandler @ 033d0388 */
                    /* catch() { ... } // from try @ 033d0564 with catch @ 033d0630 */
                    /* catch() { ... } // from try @ 033d0628 with catch @ 033d0634 */
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d0574 with catch @ 033d0638 */
        if (bVar1) {
          return false;
        }
                    /* catch() { ... } // from try @ 033d054c with catch @ 033d064c */
        if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* catch() { ... } // from try @ 033d0540 with catch @ 033d0650 */
                    /* catch() { ... } // from try @ 033d04e4 with catch @ 033d0654 */
                    /* catch() { ... } // from try @ 033d0614 with catch @ 033d0658
                       catch() { ... } // from try @ 033d061c with catch @ 033d0658 */
                    /* catch() { ... } // from try @ 033d0514 with catch @ 033d065c */
                    /* catch() { ... } // from try @ 033d04f8 with catch @ 033d0660 */
          (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
          return true;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* catch() { ... } // from try @ 033d05bc with catch @ 033d063c */
                    /* catch() { ... } // from try @ 033d0624 with catch @ 033d0640 */
                    /* catch() { ... } // from try @ 033d0620 with catch @ 033d0644 */
                    /* catch() { ... } // from try @ 033d0618 with catch @ 033d0648 */
  return false;
}

