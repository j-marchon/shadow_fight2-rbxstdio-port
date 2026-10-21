// GALHNMPIEHA$$HBFNKBOBHHL @ RVA 0x316553C

void GALHNMPIEHA__HBFNKBOBHHL(GALHNMPIEHA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  CPNHNIKFGFB_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  int32_t CEOLOKFCKIG;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_045668b4 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_045668b4 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03265594 to 033655bb has its CatchHandler @ 03266a8c */
      GALHNMPIEHA__MOFPGBHFKMM(__this,IDCGLBOIAFJ,method);
      lVar3 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
                    /* try { // try from 032655f0 to 0336561b has its CatchHandler @ 03266a88 */
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(ODEIOKOJGDM_c **)(piVar6 + -2) == ODEIOKOJGDM_TypeInfo) {
                    /* try { // try from 03265654 to 03365657 has its CatchHandler @ 032669b8 */
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03265660;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar7,ODEIOKOJGDM_TypeInfo,0);
LAB_03265660:
                    /* try { // try from 03265660 to 03365667 has its CatchHandler @ 032669ac */
                    /* try { // try from 0326566c to 03365677 has its CatchHandler @ 032669b0 */
        (*(code *)*puVar4)(plVar7,0,puVar4[1]);
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 03265678 to 03365683 has its CatchHandler @ 032669c0 */
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 03265684 to 0336582f has its CatchHandler @ 03263c08 */
          KKLJIDJBFEI__LIKCPEBFCEC(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        if (iVar1 == 0x2714) {
          CEOLOKFCKIG = 0x2714;
        }
        else {
          CEOLOKFCKIG = 0x29c4;
        }
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,CEOLOKFCKIG,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

