// OGMFFOMHGIA$$EPNGKDNPNGE @ RVA 0x31D5410

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__EPNGKDNPNGE
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,bool NACPCBOFCON,
          bool ANKDLALOKMH,int32_t CFHHLCMKGCH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  SimpleJSON_JSONNode_o *pSVar3;
  
  if ((DAT_04566cdc & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566cdc = 1;
  }
  pSVar2 = GIAMPEGMNHE__HPIOBPFLFLL(EIJDDKJONFO,ILENGCADNIH,ANKDLALOKMH,(MethodInfo *)0x0);
  if (CFHHLCMKGCH == 0) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (EIJDDKJONFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__StartsWith
                      (EIJDDKJONFO,MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = System_String__StartsWith
                        (EIJDDKJONFO,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        value = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
        goto LAB_032d5564;
      }
    }
    value = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (CFHHLCMKGCH == 1) {
    value = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else if (CFHHLCMKGCH == 2) {
    value = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else {
    value = string_TypeInfo->static_fields->Empty;
  }
LAB_032d5564:
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (SimpleJSON_JSONNode_o *)0x0;
  }
  else {
    if (NACPCBOFCON) {
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = IKMOIKFPPBF__JCDHIOHIFEL(pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = IKMOIKFPPBF__PCPAFLBHBMF(value,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          value = pSVar2;
        }
      }
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = SimpleJSON_JSONNode__Parse(value,(MethodInfo *)0x0);
  }
  return pSVar3;
}

