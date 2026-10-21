// ButtonWithIcon$$.ctor @ RVA 0x352B6B0

void ButtonWithIcon___ctor(ButtonWithIcon_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a2a & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_04568a2a = 1;
    method = extraout_x1;
  }
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  LabelButton___ctor((LabelButton_o *)__this,(MethodInfo *)0x0);
  return;
}

