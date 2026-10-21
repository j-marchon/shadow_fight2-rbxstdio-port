// Nekki.SF2.GUI.Fight.ScreenModel$$JDPOALANLGC @ RVA 0x355DE90

void Nekki_SF2_GUI_Fight_ScreenModel__JDPOALANLGC
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365deac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a);
}

