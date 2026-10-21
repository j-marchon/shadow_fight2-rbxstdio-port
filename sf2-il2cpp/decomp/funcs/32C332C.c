// PCDNPOPANBA.<>c$$FLNDAFMGAIG @ RVA 0x32C332C

bool PCDNPOPANBA_<>c__FLNDAFMGAIG(PCDNPOPANBA___c_o *__this,bool success,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045674db & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045674db = 1;
  }
  if (success) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

