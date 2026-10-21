// ProgressLabelButton$$.ctor @ RVA 0x308960C

void ProgressLabelButton___ctor(ProgressLabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456603e & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_0456603e = 1;
    method = extraout_x1;
  }
  (__this->fields)._barMaskInvolvedTintTransaction = true;
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  (__this->fields).super._Control = -1;
  (__this->fields).super._TrackingDeviceID = -1;
  (__this->fields).super.EGMBJLELLPB.fields.b = 0.0;
  (__this->fields).super.EGMBJLELLPB.fields.a = 1.0;
  (__this->fields).super.EGMBJLELLPB.fields.r = 0.0;
  (__this->fields).super.EGMBJLELLPB.fields.g = 0.0;
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}

