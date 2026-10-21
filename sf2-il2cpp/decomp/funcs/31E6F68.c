// PNGKLCHKPEO.PLCIDMPOECL$$.ctor @ RVA 0x31E6F68

void PNGKLCHKPEO_PLCIDMPOECL___ctor
               (PNGKLCHKPEO_PLCIDMPOECL_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,MethodInfo *method)

{
  PNGKLCHKPEO_LGAFLKDKBPL_o *__this_00;
  GBJGJEGPHKD_o **ppGVar1;
  
  if ((DAT_04566d6d & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    DAT_04566d6d = 1;
  }
  __this_00 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).GKLKOCOKMDB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).EBAPMMNFNPD;
  *ppGVar1 = BCKBBGCOMJD;
  thunk_FUN_01c20e04(ppGVar1,BCKBBGCOMJD);
  return;
}

