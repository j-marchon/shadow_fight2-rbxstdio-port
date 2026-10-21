// KGLCGFMIEGI$$CHMGIIMLANF @ RVA 0x31EB0A8

void KGLCGFMIEGI__CHMGIIMLANF(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d98 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566d98 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).ICLCFGFJDKJ != false) {
    if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Facebook_Unity_FB_TypeInfo,method);
    }
    Facebook_Unity_FB__ActivateApp((MethodInfo *)0x0);
    (__this->fields).ICLCFGFJDKJ = true;
  }
  return;
}

