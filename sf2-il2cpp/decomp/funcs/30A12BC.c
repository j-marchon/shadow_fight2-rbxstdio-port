// IconLabelButton$$.ctor @ RVA 0x30A12BC

void IconLabelButton___ctor(IconLabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456613f & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_0456613f = 1;
    method = extraout_x1;
  }
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  LabelButton___ctor((LabelButton_o *)__this,(MethodInfo *)0x0);
  return;
}

