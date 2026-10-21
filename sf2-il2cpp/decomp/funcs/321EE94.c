// FPPKHNNABAD$$EMPPAJLALBO @ RVA 0x321EE94

PKHMIGFEJCL_o * FPPKHNNABAD__EMPPAJLALBO(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  PKHMIGFEJCL_o *pPVar1;
  MethodInfo *in_x2;
  MEMHEPBAJJA_o *pMVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566f22 & 1) == 0) {
    auVar3 = FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    DAT_04566f22 = 1;
  }
  pMVar2 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
  if (pMVar2 != (MEMHEPBAJJA_o *)0x0) {
    pPVar1 = FPPKHNNABAD__LGJMJMJJGIM
                       (auVar3._0_8_,(pMVar2->fields)._JNLLKNHOBDG_k__BackingField,in_x2);
    return pPVar1;
  }
  pPVar1 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo,auVar3._8_8_);
  PKHMIGFEJCL___ctor(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0331eef4 to 0341ef1b has its CatchHandler @ 0331f1dc */
  return pPVar1;
}

