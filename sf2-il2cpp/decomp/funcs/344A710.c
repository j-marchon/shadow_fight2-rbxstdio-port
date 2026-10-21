// NDPMLPGANCI$$GIENGNEGHPJ @ RVA 0x344A710

void NDPMLPGANCI__GIENGNEGHPJ(MethodInfo *method)

{
  NDPMLPGANCI_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04568262 & 1) == 0) {
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    DAT_04568262 = 1;
  }
  if (NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL != (NDPMLPGANCI_o *)0x0) {
    return;
  }
  auVar1 = thunk_FUN_01bda818();
  __this = auVar1._0_8_;
  NDPMLPGANCI___ctor(__this,auVar1._8_8_);
  NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL = __this;
  thunk_FUN_01c20e04(NDPMLPGANCI_TypeInfo->static_fields,__this);
  return;
}

