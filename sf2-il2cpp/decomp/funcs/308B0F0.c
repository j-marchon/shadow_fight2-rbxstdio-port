// LabelButton$$get_Color @ RVA 0x308B0F0

UnityEngine_Color_o LabelButton__get_Color(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r =
         (*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                   (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

