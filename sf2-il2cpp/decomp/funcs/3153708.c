// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$EJHAPHAHMHG @ RVA 0x3153708

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  pNVar1 = (__this->fields).super.super.super._header;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    uVar2 = (*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                      (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
    Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super.super._header;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 03253228 with catch @ 03253778
                       try { // try from 03253778 to 03353793 has its CatchHandler @ 03252a6c */
                    /* catch() { ... } // from try @ 032531cc with catch @ 0325377c */
                    /* WARNING: Could not recover jumptable at 0x0325378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (uVar2,in_d1,in_d2,in_d3,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

