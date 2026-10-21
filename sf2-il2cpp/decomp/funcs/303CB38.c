// Nekki.SF2.GUI.TextButton$$get_TextColor @ RVA 0x303CB38

UnityEngine_Color_o
Nekki_SF2_GUI_TextButton__get_TextColor(Nekki_SF2_GUI_TextButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float fVar3;
  float in_s1;
  float in_s2;
  float in_s3;
  UnityEngine_Color_o UVar4;
  
                    /* catch() { ... } // from try @ 0313caa8 with catch @ 0313cb38 */
                    /* catch() { ... } // from try @ 0313ca28 with catch @ 0313cb3c */
                    /* catch() { ... } // from try @ 0313ca90 with catch @ 0313cb40
                       catch() { ... } // from try @ 0313cb18 with catch @ 0313cb40 */
                    /* catch() { ... } // from try @ 0313ca18 with catch @ 0313cb44 */
                    /* catch() { ... } // from try @ 0313ca04 with catch @ 0313cb48 */
                    /* catch() { ... } // from try @ 0313ca54 with catch @ 0313cb4c
                       catch() { ... } // from try @ 0313cb10 with catch @ 0313cb4c */
  if ((DAT_04565d96 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0313cb64 to 0323cb67 has its CatchHandler @ 0313cbe4 */
                    /* try { // try from 0313cb68 to 0323cbfb has its CatchHandler @ 0313c904 */
    DAT_04565d96 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Text;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar3 = (float)(*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                             (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
  }
  else {
    fVar3 = (__this->fields)._NormalTextColor.fields.r;
    in_s1 = (__this->fields)._NormalTextColor.fields.g;
    in_s2 = (__this->fields)._NormalTextColor.fields.b;
    in_s3 = (__this->fields)._NormalTextColor.fields.a;
  }
  UVar4.fields.g = in_s1;
  UVar4.fields.r = fVar3;
  UVar4.fields.a = in_s3;
  UVar4.fields.b = in_s2;
  return (UnityEngine_Color_o)UVar4.fields;
}

