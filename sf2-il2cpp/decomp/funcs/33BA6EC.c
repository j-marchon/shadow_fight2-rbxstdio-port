// Nekki.SF2.GUI.Profile.PerkSubItem$$get_IsLeft @ RVA 0x33BA6EC

bool Nekki_SF2_GUI_Profile_PerkSubItem__get_IsLeft
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Profile_ProfileCell_o *x;
  UnityEngine_Object_o *x_00;
  
                    /* try { // try from 034ba700 to 035ba78b has its CatchHandler @ 034ba700
                       catch() { ... } // from try @ 034ba700 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba7ac with catch @ 034ba700
                       catch() { ... } // from try @ 034ba7d8 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba800 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba840 with catch @ 034ba700 */
  if ((DAT_04567d9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
    DAT_04567d9d = 1;
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
    x_00 = pIVar2[4].monitor;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ba78c to 035ba793 has its CatchHandler @ 034ba7e4 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 034ba7a0 to 035ba7ab has its CatchHandler @ 034ba7e0 */
    bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ba7ac to 035ba7d3 has its CatchHandler @ 034ba700 */
  FUN_01bab8c8();
}

