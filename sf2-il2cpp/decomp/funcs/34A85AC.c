// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectLeftSubItem @ RVA 0x34A85AC

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectLeftSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
                    /* try { // try from 035a85bc to 036a85c3 has its CatchHandler @ 035a8cb4 */
  if ((DAT_04568507 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a85d4 to 036a85db has its CatchHandler @ 035a8cb8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a85dc to 036a85e7 has its CatchHandler @ 035a8cd0 */
    DAT_04568507 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
                    /* try { // try from 035a85f8 to 036a860f has its CatchHandler @ 035a8cf0 */
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                          (__this,
                           Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a861c to 036a8623 has its CatchHandler @ 035a8ccc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 035a8630 to 036a864b has its CatchHandler @ 035a8cdc */
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 035a8664 to 036a866b has its CatchHandler @ 035a8c94 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return false;
        }
        if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
          (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
          return true;
                    /* try { // try from 035a86b0 to 036a86b7 has its CatchHandler @ 035a8c98 */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 035a8684 to 036a86a3 has its CatchHandler @ 035a8c9c */
  return false;
}

