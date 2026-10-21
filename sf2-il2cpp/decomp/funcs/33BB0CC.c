// Nekki.SF2.GUI.TimerLabel$$.ctor @ RVA 0x33BB0CC

void Nekki_SF2_GUI_TimerLabel___ctor(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  undefined3 uVar1;
  undefined4 uVar2;
  
  if ((DAT_04567da0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2086);
    DAT_04567da0 = 1;
  }
  *(undefined2 *)((long)&(__this->fields).super._Alias + 1) = 0x101;
  *(undefined1 *)((long)&(__this->fields).super._Alias + 3) = 1;
  *(undefined4 *)((long)&(__this->fields).super._Alias + 5) = 0x1010101;
  (__this->fields).super.field_0x1e1 = 1;
  *(undefined4 *)&(__this->fields).super.field_0x1e4 = 0xffffffff;
  uVar1 = StringLiteral_2086._1_3_;
  uVar2 = StringLiteral_2086._4_4_;
  (__this->fields).UseDaysDelimiter = (bool_conflict)(undefined1)StringLiteral_2086;
  *(undefined3 *)&(__this->fields).field_0x1f1 = uVar1;
  (__this->fields).SegmentsDate = uVar2;
  thunk_FUN_01c20e04(&(__this->fields).UseDaysDelimiter);
  Nekki_SF2_GUI_LabelAlias___ctor((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  return;
}

