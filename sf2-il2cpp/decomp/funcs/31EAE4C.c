// KGLCGFMIEGI$$GLICONIIINB @ RVA 0x31EAE4C

bool KGLCGFMIEGI__GLICONIIINB(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d97 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566d97 = 1;
    method = extraout_x1;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Facebook_Unity_FB_TypeInfo,method);
  }
  bVar1 = Facebook_Unity_FB__get_IsInitialized((MethodInfo *)0x0);
  return bVar1;
}

