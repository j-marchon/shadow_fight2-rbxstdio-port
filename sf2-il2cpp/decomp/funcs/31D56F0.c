// OGMFFOMHGIA$$PFGBDBKCIAI @ RVA 0x31D56F0

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__PFGBDBKCIAI
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          MethodInfo *method)

{
  System_String_o *EIJDDKJONFO_00;
  SimpleJSON_JSONNode_o *pSVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04566cdd & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566cdd = 1;
  }
  EIJDDKJONFO_00 = GIAMPEGMNHE__HPIOBPFLFLL(EIJDDKJONFO,ILENGCADNIH,true,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
  }
  CFJANHACGMG__FNIHLBLMOBP(EIJDDKJONFO_00,true,(MethodInfo *)0x0);
  if (DAT_04566d6b == '\0') {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566d6b = '\x01';
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (CFJANHACGMG_TypeInfo->static_fields->_PCFJKILMDCE_k__BackingField != false) {
    pSVar1 = OGMFFOMHGIA__EPNGKDNPNGE(EIJDDKJONFO,ILENGCADNIH,true,true,CFHHLCMKGCH,in_x5);
    return pSVar1;
  }
  return (SimpleJSON_JSONNode_o *)0x0;
}

