// Nekki.SF2.GUI.TextButton$$set_TextColor @ RVA 0x303CBD0

void Nekki_SF2_GUI_TextButton__set_TextColor
               (Nekki_SF2_GUI_TextButton_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* catch() { ... } // from try @ 0313cb64 with catch @ 0313cbe4 */
                    /* try { // try from 0313cbfc to 0323cc0b has its CatchHandler @ 0313cc20 */
  if ((DAT_04565d97 & 1) == 0) {
                    /* try { // try from 0313cc0c to 0323cc17 has its CatchHandler @ 0313c904 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0313cc18 to 0323cc1f has its CatchHandler @ 0313cc20 */
    DAT_04565d97 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0313cbfc with catch @ 0313cc20
                       catch() { ... } // from try @ 0313cc18 with catch @ 0313cc20 */
  pNVar2 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313cc2c to 0323ccaf has its CatchHandler @ 0313cc2c
                       catch() { ... } // from try @ 0313cc2c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313ce34 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313ce6c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cee8 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cf0c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cff0 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d034 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d050 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d080 with catch @ 0313cc2c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313cc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20),CJNHFNHJHPE.fields.r),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._4_8_ >> 0x20),CJNHFNHJHPE.fields.g),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20),CJNHFNHJHPE.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),CJNHFNHJHPE.fields.a),pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

