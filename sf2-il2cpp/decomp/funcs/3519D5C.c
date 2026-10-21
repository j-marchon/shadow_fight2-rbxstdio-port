// Nekki.SF2.GUI.Fight.IconAndText$$SetTextColor @ RVA 0x3519D5C

void Nekki_SF2_GUI_Fight_IconAndText__SetTextColor
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar2;
  
  if ((DAT_0456896b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456896b = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03619dc0 to 03719dc7 has its CatchHandler @ 03619e38 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
                    /* try { // try from 03619de0 to 03719deb has its CatchHandler @ 03619e30 */
                    /* try { // try from 03619dec to 03719e27 has its CatchHandler @ 03619d28 */
                    /* WARNING: Could not recover jumptable at 0x03619e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

