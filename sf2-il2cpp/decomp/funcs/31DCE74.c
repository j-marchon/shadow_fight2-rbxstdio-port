// KHIBJFLBJNH$$.ctor @ RVA 0x31DCE74

void KHIBJFLBJNH___ctor(KHIBJFLBJNH_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d21 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04566d21 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  pLVar1 = auVar3._0_8_;
  LCKCDEKNLOA___ctor(pLVar1,auVar3._8_8_);
  ppLVar2 = &(__this->fields).PGLINMCHKGC;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  auVar3 = thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  pLVar1 = auVar3._0_8_;
  LCKCDEKNLOA___ctor(pLVar1,auVar3._8_8_);
  ppLVar2 = &(__this->fields).EBAHJECPAHA;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

