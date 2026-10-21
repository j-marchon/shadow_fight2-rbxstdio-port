// LabelButton$$get_Text @ RVA 0x308B114

System_String_o * LabelButton__get_Text(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  System_String_o *pSVar2;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318b130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pNVar1->klass->vtable)._74_get_text.methodPtr)
                       (pNVar1,(pNVar1->klass->vtable)._74_get_text.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

