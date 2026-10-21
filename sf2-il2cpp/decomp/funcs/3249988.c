// Nekki.SF2.GUI.Scripts.EditBox$$set_BGColor @ RVA 0x3249988

void Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Graphic_o *pUVar2;
  
                    /* catch() { ... } // from try @ 033497c0 with catch @ 0334998c
                       try { // try from 0334998c to 034499af has its CatchHandler @ 03349364 */
                    /* catch() { ... } // from try @ 033496b8 with catch @ 03349990 */
                    /* try { // try from 033499b0 to 034499b3 has its CatchHandler @ 033499dc */
                    /* try { // try from 033499b4 to 034499eb has its CatchHandler @ 03349364 */
  if ((DAT_045670e4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045670e4 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033499b0 with catch @ 033499dc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 033499ec to 034499ff has its CatchHandler @ 03349a70 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033497d4 with catch @ 03349a00
                       try { // try from 03349a00 to 03449a13 has its CatchHandler @ 03349364 */
    if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
                    /* try { // try from 03349a14 to 03449a17 has its CatchHandler @ 03349a44 */
                    /* try { // try from 03349a18 to 03449a53 has its CatchHandler @ 03349364 */
                    /* WARNING: Could not recover jumptable at 0x03349a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20),CJNHFNHJHPE.fields.r),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._4_8_ >> 0x20),CJNHFNHJHPE.fields.g),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20),CJNHFNHJHPE.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),CJNHFNHJHPE.fields.a),pUVar2,
                 (pUVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03349a14 with catch @ 03349a44 */
  return;
}

