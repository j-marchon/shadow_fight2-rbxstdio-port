// KAMBBJFPLGM$$ODJAMCJCHGG @ RVA 0x311B2C0

bool KAMBBJFPLGM__ODJAMCJCHGG(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  bool bVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_045665e5 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045665e5 = 1;
  }
  pEVar2 = (__this->fields).FLAFELDNABC;
  if ((pEVar2 == (EOLFEKNCPLM_o *)0x0) ||
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 == (GKLPDMLELJF_o *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < (pGVar3->fields).ADEIKPGDIPM.fields.value &&
            (pGVar3->fields).ADEIKPGDIPM.fields.hasValue != false;
  }
  return bVar1;
}

