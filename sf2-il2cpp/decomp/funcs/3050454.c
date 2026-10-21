// MCIBPLJEFLJ$$.ctor @ RVA 0x3050454

void MCIBPLJEFLJ___ctor(MCIBPLJEFLJ_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,MethodInfo *method)

{
  MCIBPLJEFLJ_KHCGONNHOMM_o *__this_00;
  MCIBPLJEFLJ_KHCGONNHOMM_o **ppMVar1;
  GBJGJEGPHKD_o **ppGVar2;
  Il2CppObject **ppIVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04565e46 & 1) == 0) {
    FUN_01bab630(&MCIBPLJEFLJ_KHCGONNHOMM_TypeInfo);
    DAT_04565e46 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  auVar4 = thunk_FUN_01bda818(MCIBPLJEFLJ_KHCGONNHOMM_TypeInfo);
  __this_00 = auVar4._0_8_;
  MCIBPLJEFLJ_KHCGONNHOMM___ctor(__this_00,auVar4._8_8_);
  ppMVar1 = &(__this->fields).HKFEABKNICO;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  ppGVar2 = &(__this->fields).HMIAFJALFCJ;
  *ppGVar2 = BCKBBGCOMJD;
  thunk_FUN_01c20e04(ppGVar2,BCKBBGCOMJD);
  ppIVar3 = &(__this->fields).MKPKPODAGPH;
  *ppIVar3 = (Il2CppObject *)0x0;
  thunk_FUN_01c20e04(ppIVar3,0);
  (__this->fields).BOFNLBOBNKM = (JADGCGOJLJB_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields)._FMOKINIOKBE_k__BackingField = true;
  return;
}

