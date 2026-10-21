// Nekki.SF2.GUI.Profile.PerksController$$SelectRightSubItem @ RVA 0x32D085C

bool Nekki_SF2_GUI_Profile_PerksController__SelectRightSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
  if ((DAT_0456754c & 1) == 0) {
                    /* try { // try from 033d0878 to 034d098f has its CatchHandler @ 033d0878
                       catch() { ... } // from try @ 033d0878 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a04 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a2c with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a84 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0ae4 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b28 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b64 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b80 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0bb0 with catch @ 033d0878 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456754c = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,3,(MethodInfo *)0x0);
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
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}

