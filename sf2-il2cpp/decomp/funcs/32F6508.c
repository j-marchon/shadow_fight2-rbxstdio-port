// EEOMEMBBGNA$$GCBEBBGLNGI @ RVA 0x32F6508

void EEOMEMBBGNA__GCBEBBGLNGI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  EEGDOGKBLNG_o *__this_00;
  long lVar2;
  CPNHNIKFGFB_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_045676c5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    DAT_045676c5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    LLJHKLPGMGC = (KAMBBJFPLGM_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
                    /* try { // try from 033f658c to 034f6637 has its CatchHandler @ 033f658c
                       catch() { ... } // from try @ 033f658c with catch @ 033f658c
                       catch() { ... } // from try @ 033f6654 with catch @ 033f658c
                       catch() { ... } // from try @ 033f66a8 with catch @ 033f658c
                       catch() { ... } // from try @ 033f66e0 with catch @ 033f658c */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      EEGDOGKBLNG__JOMFHMDCMNG(__this_00,LLJHKLPGMGC,(MethodInfo *)0x0);
      lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                                 System_Action<KEFHDOHHHML>_TypeInfo);
      if (lVar2 != 0) {
        method_00 = *(MethodInfo **)(lVar2 + 0x28);
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ);
      }
      EEOMEMBBGNA__MECHLOOCDCI(__this,false,method_00);
      return;
    }
  }
  else {
    __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_01,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

