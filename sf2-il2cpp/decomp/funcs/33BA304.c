// Nekki.SF2.GUI.Profile.PerkSubItem$$get_IsRight @ RVA 0x33BA304

bool Nekki_SF2_GUI_Profile_PerkSubItem__get_IsRight
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Profile_ProfileCell_o *x;
  Il2CppClass *x_00;
  
  if ((DAT_04567d98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
    DAT_04567d98 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.PEJMMOONAHC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pIVar2 = Nekki_SF2_GUI_Profile_SubItem__ParentCellAs<object>
                     ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,
                      Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    x_00 = pIVar2[5].klass;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

