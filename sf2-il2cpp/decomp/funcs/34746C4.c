// IFAMAAGNCBJ$$.ctor @ RVA 0x34746C4

void IFAMAAGNCBJ___ctor(IFAMAAGNCBJ_o *__this,MNAMMGOAMHK_o *CHEHKDFNPLN,MethodInfo *method)

{
  if ((DAT_04568319 & 1) == 0) {
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568319 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IFAMAAGNCBJ_TypeInfo->static_fields->EJCLIBKEICM = CHEHKDFNPLN;
  thunk_FUN_01c20e04(IFAMAAGNCBJ_TypeInfo->static_fields,CHEHKDFNPLN);
  return;
}

