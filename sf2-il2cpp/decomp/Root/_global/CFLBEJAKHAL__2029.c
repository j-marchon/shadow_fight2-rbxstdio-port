// TypeDefIndex 2029
// Namespace: 
// public class CFLBEJAKHAL : IJIHLBLCJMG
// Fields:

// ===== private void JBCLNEBFCBA()  [RVA 0x32A5B40]
// CFLBEJAKHAL$$JBCLNEBFCBA @ RVA 0x32A5B40

void CFLBEJAKHAL__JBCLNEBFCBA(CFLBEJAKHAL_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float KMOAKHKDBAB;
  
                    /* try { // try from 033a5b44 to 034a5b4b has its CatchHandler @ 033a5b4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033a5b30 with catch @ 033a5b4c
                       catch(type#2 @ 00000000) { ... } // from try @ 033a5b44 with catch @ 033a5b4c
                        */
  if ((DAT_045673f0 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045673f0 = 1;
    method = extraout_x1;
  }
  if (DAT_045673ff == '\0') {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo,method);
                    /* try { // try from 033a5b90 to 034a5ca7 has its CatchHandler @ 033a5b90
                       catch() { ... } // from try @ 033a5b90 with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5d6c with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5f0c with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5f54 with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5fa4 with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5fe0 with catch @ 033a5b90
                       catch() { ... } // from try @ 033a5ff4 with catch @ 033a5b90
                       catch() { ... } // from try @ 033a6028 with catch @ 033a5b90 */
    DAT_045673ff = '\x01';
  }
  KMOAKHKDBAB = Core_Network_ServerProvider_TypeInfo->static_fields->_CMEFOAOOLIK_k__BackingField;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__IPEPBNLDPHG(KMOAKHKDBAB,(MethodInfo *)0x0);
  IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x32A5BE4]
// CFLBEJAKHAL$$KGGGBHEMAOO @ RVA 0x32A5BE4

int32_t CFLBEJAKHAL__KGGGBHEMAOO(CFLBEJAKHAL_o *__this,MethodInfo *method)

{
  return 6;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x32A5BEC]
// CFLBEJAKHAL$$JFGBPBOCOIC @ RVA 0x32A5BEC

bool CFLBEJAKHAL__JFGBPBOCOIC(CFLBEJAKHAL_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return HJDMBDBJEFL == 0;
}


// ===== public void .ctor()  [RVA 0x32A5BF8]
// CFLBEJAKHAL$$.ctor @ RVA 0x32A5BF8

void CFLBEJAKHAL___ctor(CFLBEJAKHAL_o *__this,MethodInfo *method)

{
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x32A5C00]
// CFLBEJAKHAL$$NKLGCNHLBAF @ RVA 0x32A5C00

void CFLBEJAKHAL__NKLGCNHLBAF(CFLBEJAKHAL_o *__this,MethodInfo *method)

{
  System_Action_o *HJNIEEICBFA;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673f1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CFLBEJAKHAL_JBCLNEBFCBA__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045673f1 = 1;
    method = extraout_x1;
  }
  HJNIEEICBFA = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__FEJIKBIBCJB(HJNIEEICBFA,(MethodInfo *)0x0);
  return;
}

