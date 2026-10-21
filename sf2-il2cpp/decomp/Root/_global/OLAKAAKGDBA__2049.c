// TypeDefIndex 2049
// Namespace: 
// public class OLAKAAKGDBA
// Fields:

// ===== public static string MPJIEAJGFGN(string EIJDDKJONFO, string ILENGCADNIH = "", MPNLOEAPLNP CFHHLCMKGCH = 0)  [RVA 0x32B4D30]
// OLAKAAKGDBA$$MPJIEAJGFGN @ RVA 0x32B4D30

System_String_o *
OLAKAAKGDBA__MPJIEAJGFGN
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *EIJDDKJONFO_00;
  MethodInfo *in_x5;
  
  if ((DAT_04567446 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04567446 = 1;
  }
  pSVar1 = OLAKAAKGDBA__ECMJNLDAJDN(EIJDDKJONFO,ILENGCADNIH,CFHHLCMKGCH,true,true,in_x5);
  if ((pSVar1 != (System_String_o *)0x0) && ((CFHHLCMKGCH | 2U) == 2)) {
    EIJDDKJONFO_00 = GIAMPEGMNHE__HPIOBPFLFLL(EIJDDKJONFO,ILENGCADNIH,true,(MethodInfo *)0x0);
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
    }
    CFJANHACGMG__FNIHLBLMOBP(EIJDDKJONFO_00,true,(MethodInfo *)0x0);
  }
  return pSVar1;
}


// ===== public static void OMMJKAEIOPL(string OCMMDIHLKMH, string CCKJFMILHLC)  [RVA 0x32B5050]
// OLAKAAKGDBA$$OMMJKAEIOPL @ RVA 0x32B5050

void OLAKAAKGDBA__OMMJKAEIOPL
               (System_String_o *OCMMDIHLKMH,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033b5034 with catch @ 033b5060 */
  NEHNBJKKABI__GPNPELOHJCJ(CCKJFMILHLC,OCMMDIHLKMH,(MethodInfo *)0x0);
  return;
}


// ===== public static void HCNOCNBEDDE(string OCMMDIHLKMH, string CCKJFMILHLC)  [RVA 0x32B5064]
// OLAKAAKGDBA$$HCNOCNBEDDE @ RVA 0x32B5064

void OLAKAAKGDBA__HCNOCNBEDDE
               (System_String_o *OCMMDIHLKMH,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
                    /* try { // try from 033b5070 to 034b5077 has its CatchHandler @ 033b508c */
                    /* try { // try from 033b5078 to 034b5083 has its CatchHandler @ 033b4e80 */
                    /* try { // try from 033b5084 to 034b508b has its CatchHandler @ 033b508c */
  if ((DAT_04567447 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b5008 with catch @ 033b508c
                       catch(type#2 @ 00000000) { ... } // from try @ 033b5070 with catch @ 033b508c
                       catch(type#2 @ 00000000) { ... } // from try @ 033b5084 with catch @ 033b508c
                        */
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04567447 = 1;
  }
  NEHNBJKKABI__GPNPELOHJCJ(CCKJFMILHLC,OCMMDIHLKMH,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GCBGEBGFNHI(CCKJFMILHLC,false,(MethodInfo *)0x0);
  return;
}


// ===== public static string ECMJNLDAJDN(string EIJDDKJONFO, string ILENGCADNIH = "", MPNLOEAPLNP CFHHLCMKGCH = 0, bool NACPCBOFCON = True, bool ANKDLALOKMH = True)  [RVA 0x32B4DEC]
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


// ===== public void .ctor()  [RVA 0x32B50DC]
// OLAKAAKGDBA$$.ctor @ RVA 0x32B50DC

void OLAKAAKGDBA___ctor(OLAKAAKGDBA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static string ECMJNLDAJDN(string EIJDDKJONFO, MPNLOEAPLNP CFHHLCMKGCH = 0, bool NACPCBOFCON = True, bool ANKDLALOKMH = True)  [RVA 0x32B50E4]
// OLAKAAKGDBA$$ECMJNLDAJDN @ RVA 0x32B50E4

System_String_o *
OLAKAAKGDBA__ECMJNLDAJDN
          (System_String_o *EIJDDKJONFO,int32_t CFHHLCMKGCH,bool NACPCBOFCON,bool ANKDLALOKMH,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04567449 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567449 = 1;
  }
  pSVar1 = OLAKAAKGDBA__ECMJNLDAJDN
                     (EIJDDKJONFO,string_TypeInfo->static_fields->Empty,CFHHLCMKGCH,NACPCBOFCON,
                      ANKDLALOKMH,in_x5);
  return pSVar1;
}

