// PHGPILAOJBI$$BKDHIJHDDJC @ RVA 0x3236664

FEFHGAHGKBK_o *
PHGPILAOJBI__BKDHIJHDDJC
          (PHGPILAOJBI_o *__this,PABDDHCGGID_o *KGIHEANHNGD,System_String_o *ACLPFOHLGMN,
          PHGPILAOJBI_OPNKFPDJLEN_o *param_4,MethodInfo *method)

{
  JJJLCNBODNF_o *BKLICEFEDIM;
  int iVar1;
  LAKGODKIHBK_o *__this_00;
  EPEKNNLDOJO_o *pEVar2;
  
  if ((DAT_04567025 & 1) == 0) {
    FUN_01bab630(&DKKFIHIPPEN_TypeInfo);
    FUN_01bab630(&LAKGODKIHBK_TypeInfo);
    DAT_04567025 = 1;
  }
  if (KGIHEANHNGD != (PABDDHCGGID_o *)0x0) {
    iVar1 = (KGIHEANHNGD->fields)._KGGMDODBEMF_k__BackingField;
    if (iVar1 == 7) {
      pEVar2 = (__this->fields).CPDFDIHFOJO;
      BKLICEFEDIM = (__this->fields).EAEHGKFFGCL;
      __this_00 = (LAKGODKIHBK_o *)thunk_FUN_01bda818(LAKGODKIHBK_TypeInfo);
      LAKGODKIHBK___ctor(__this_00,ACLPFOHLGMN,KGIHEANHNGD,pEVar2,BKLICEFEDIM,(MethodInfo *)0x0);
    }
    else if (iVar1 == 6) {
      pEVar2 = (__this->fields).CPDFDIHFOJO;
      __this_00 = (LAKGODKIHBK_o *)thunk_FUN_01bda818(DKKFIHIPPEN_TypeInfo);
      DKKFIHIPPEN___ctor((DKKFIHIPPEN_o *)__this_00,ACLPFOHLGMN,KGIHEANHNGD,pEVar2,(MethodInfo *)0x0
                        );
    }
    else {
      __this_00 = (LAKGODKIHBK_o *)0x0;
    }
    return (FEFHGAHGKBK_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

