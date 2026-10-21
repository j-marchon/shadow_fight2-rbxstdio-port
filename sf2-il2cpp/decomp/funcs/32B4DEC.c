// OLAKAAKGDBA$$ECMJNLDAJDN @ RVA 0x32B4DEC

System_String_o *
OLAKAAKGDBA__ECMJNLDAJDN
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          bool NACPCBOFCON,bool ANKDLALOKMH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *EHNFGMGKCHO;
  
  if ((DAT_04567448 & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04567448 = 1;
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
        EHNFGMGKCHO = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
        goto LAB_033b4f0c;
      }
    }
    EHNFGMGKCHO = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (CFHHLCMKGCH == 1) {
                    /* try { // try from 033b4e80 to 034b4f37 has its CatchHandler @ 033b4e80
                       catch() { ... } // from try @ 033b4e80 with catch @ 033b4e80
                       catch() { ... } // from try @ 033b4f40 with catch @ 033b4e80
                       catch() { ... } // from try @ 033b4f84 with catch @ 033b4e80
                       catch() { ... } // from try @ 033b4fc4 with catch @ 033b4e80
                       catch() { ... } // from try @ 033b501c with catch @ 033b4e80
                       catch() { ... } // from try @ 033b5038 with catch @ 033b4e80
                       catch() { ... } // from try @ 033b5078 with catch @ 033b4e80 */
    EHNFGMGKCHO = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else {
    if (CFHHLCMKGCH != 2) {
      return (System_String_o *)0x0;
    }
    EHNFGMGKCHO = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
LAB_033b4f0c:
  if ((EHNFGMGKCHO != (System_String_o *)0x0) && (NACPCBOFCON)) {
    if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033b4f38 to 034b4f3f has its CatchHandler @ 033b501c */
    bVar1 = IKMOIKFPPBF__JCDHIOHIFEL(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 033b4f40 to 034b4f7b has its CatchHandler @ 033b4e80 */
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = IKMOIKFPPBF__PCPAFLBHBMF(EHNFGMGKCHO,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        EHNFGMGKCHO = pSVar2;
      }
    }
  }
                    /* try { // try from 033b5008 to 034b501b has its CatchHandler @ 033b508c */
  return EHNFGMGKCHO;
}

