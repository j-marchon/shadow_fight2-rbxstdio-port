// TypeDefIndex 154
// Namespace: 
// public class ENNNLJEAPOG : DADDKDFBPIJ<CCLKPGBIBOP>
// Fields:

// ===== public void LFENGGKOJDO(string KGLJICLJHEL, string CJFAPGEEPLM, int GLBKKJDHJFO, bool BIBHAFJBGEO, string IJCFIDBCOIN, bool OCFNMPJFDGA)  [RVA 0x3022664]
// ENNNLJEAPOG$$LFENGGKOJDO @ RVA 0x3022664

void ENNNLJEAPOG__LFENGGKOJDO
               (ENNNLJEAPOG_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJFAPGEEPLM,
               int32_t GLBKKJDHJFO,bool BIBHAFJBGEO,System_String_o *IJCFIDBCOIN,bool OCFNMPJFDGA,
               MethodInfo *method)

{
  CCLKPGBIBOP_o *__this_00;
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  float local_54;
  
  if ((DAT_04565c61 & 1) == 0) {
    FUN_01bab630(&CCLKPGBIBOP_TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_FIFBDNADAAL__);
    FUN_01bab630(&StringLiteral_1569/*"0.##"*/);
    DAT_04565c61 = 1;
  }
  __this_00 = (CCLKPGBIBOP_o *)thunk_FUN_01bda818(CCLKPGBIBOP_TypeInfo);
  CCLKPGBIBOP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CCLKPGBIBOP_o *)0x0) {
    (__this_00->fields)._COIPKAKHDFP_k__BackingField = KGLJICLJHEL;
    thunk_FUN_01c20e04(&__this_00->fields,KGLJICLJHEL);
    ppSVar1 = &(__this_00->fields)._HOHLBKMCIDD_k__BackingField;
    *ppSVar1 = CJFAPGEEPLM;
    thunk_FUN_01c20e04(ppSVar1,CJFAPGEEPLM);
    (__this_00->fields)._CELECOKJPDJ_k__BackingField = BIBHAFJBGEO;
    ppSVar1 = &(__this_00->fields)._JKGLJFGKPNN_k__BackingField;
    *ppSVar1 = IJCFIDBCOIN;
    thunk_FUN_01c20e04(ppSVar1,IJCFIDBCOIN);
    (__this_00->fields)._BNIHGHLPOHB_k__BackingField = OCFNMPJFDGA;
    (__this_00->fields)._JCPEHHNNEII_k__BackingField = GLBKKJDHJFO;
    local_54 = (float)GLBKKJDHJFO / 1e+06;
    pSVar2 = System_Single__ToString(local_54,(System_String_o *)&local_54,StringLiteral_1569/*"0.##"*/);
    (__this_00->fields)._DIKELNECAJD_k__BackingField = pSVar2;
    thunk_FUN_01c20e04();
    DADDKDFBPIJ<object>__FIFBDNADAAL
              ((DADDKDFBPIJ_T__o *)__this,(Il2CppObject *)__this_00,
               Method_DADDKDFBPIJ<CCLKPGBIBOP>_FIFBDNADAAL__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30227A8]
// ENNNLJEAPOG$$.ctor @ RVA 0x30227A8

void ENNNLJEAPOG___ctor(ENNNLJEAPOG_o *__this,MethodInfo *method)

{
  if ((DAT_04565c62 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>__ctor__);
    DAT_04565c62 = 1;
  }
  DADDKDFBPIJ<object>___ctor((DADDKDFBPIJ_T__o *)__this,Method_DADDKDFBPIJ<CCLKPGBIBOP>__ctor__);
  return;
}

