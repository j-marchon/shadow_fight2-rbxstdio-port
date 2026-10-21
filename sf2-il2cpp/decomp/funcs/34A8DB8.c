// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectRightSubItem @ RVA 0x34A8DB8

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectRightSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
  if ((DAT_0456850e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
    DAT_0456850e = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                          (__this,
                           Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
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

