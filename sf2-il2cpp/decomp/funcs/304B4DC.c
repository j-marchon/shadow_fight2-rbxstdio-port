// EGMONPGHHDP$$AIGBCECHOMI @ RVA 0x304B4DC

void EGMONPGHHDP__AIGBCECHOMI(EGMONPGHHDP_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  EEGDOGKBLNG_o *__this_00;
  long lVar2;
  undefined8 *puVar3;
  CPNHNIKFGFB_o *__this_01;
  int32_t CEOLOKFCKIG;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_04565e04 & 1) == 0) {
                    /* try { // try from 0314b4fc to 0324b523 has its CatchHandler @ 0314b538 */
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
                    /* try { // try from 0314b524 to 0324b52f has its CatchHandler @ 0314b0c8 */
    DAT_04565e04 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = 1;
  }
  else {
                    /* try { // try from 0314b530 to 0324b537 has its CatchHandler @ 0314b538 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314b4fc with catch @ 0314b538
                       catch(type#2 @ 00000000) { ... } // from try @ 0314b530 with catch @ 0314b538
                        */
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
                    /* try { // try from 0314b53c to 0324b59f has its CatchHandler @ 0314b53c
                       catch() { ... } // from try @ 0314b53c with catch @ 0314b53c
                       catch() { ... } // from try @ 0314b5f8 with catch @ 0314b53c
                       catch() { ... } // from try @ 0314b638 with catch @ 0314b53c
                       catch() { ... } // from try @ 0314b684 with catch @ 0314b53c */
    if (bVar1) {
      LLJHKLPGMGC = (KAMBBJFPLGM_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__JOMFHMDCMNG(__this_00,LLJHKLPGMGC,(MethodInfo *)0x0);
        lVar2 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
                    /* try { // try from 0314b5a0 to 0324b5bf has its CatchHandler @ 0314b640 */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
        if (plVar6 != (long *)0x0) {
          lVar2 = *plVar6;
                    /* try { // try from 0314b5d0 to 0324b5db has its CatchHandler @ 0314b638 */
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
                    /* try { // try from 0314b5ec to 0324b5f7 has its CatchHandler @ 0314b644 */
              if (*(ODEIOKOJGDM_c **)(piVar5 + -2) == ODEIOKOJGDM_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314b5ec with catch @ 0314b644
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0314b634 with catch @ 0314b644
                        */
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_0314b650;
              }
              uVar4 = uVar4 - 1;
                    /* try { // try from 0314b5f8 to 0324b62f has its CatchHandler @ 0314b53c */
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01b81914(plVar6,ODEIOKOJGDM_TypeInfo,0);
LAB_0314b650:
                    /* try { // try from 0314b65c to 0324b65f has its CatchHandler @ 0314b66c */
                    /* WARNING: Could not recover jumptable at 0x0314b664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar6,0,puVar3[1]);
          return;
        }
      }
      goto LAB_0314b640;
    }
                    /* try { // try from 0314b630 to 0324b633 has its CatchHandler @ 0314b63c */
                    /* try { // try from 0314b634 to 0324b637 has its CatchHandler @ 0314b644 */
    __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314b5d0 with catch @ 0314b638
                       try { // try from 0314b638 to 0324b65b has its CatchHandler @ 0314b53c */
    CEOLOKFCKIG = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314b630 with catch @ 0314b63c
                        */
  }
  if (__this_01 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_01,CEOLOKFCKIG,(MethodInfo *)0x0);
    return;
  }
LAB_0314b640:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314b5a0 with catch @ 0314b640
                        */
  FUN_01bab8c8();
}

