// KICJDJCJLKJ$$JEGAPBGMFJJ @ RVA 0x348D28C

void KICJDJCJLKJ__JEGAPBGMFJJ(KICJDJCJLKJ_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  MethodInfo *in_x2;
  GCPFDLNAFDF_c *pGVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  GCPFDLNAFDF_o *pGVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045683f0 & 1) == 0) {
    FUN_01bab630(&EBGDOILAAEJ_TypeInfo);
    auVar13 = FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    DAT_045683f0 = 1;
  }
  pGVar12 = (__this->fields).BDALHPIDKOK;
  if (pGVar12 != (GCPFDLNAFDF_o *)0x0) {
    pGVar7 = pGVar12->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                    /* try { // try from 0358d320 to 0368d323 has its CatchHandler @ 0358d438 */
          pVVar4 = pGVar7->vtable + (*piVar10 + 6);
          goto LAB_0358d324;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    in_x2 = (MethodInfo *)0x6;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar12);
LAB_0358d324:
    auVar13 = (*pVVar4->methodPtr)(pGVar12,pVVar4->method);
    plVar5 = auVar13._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar13._8_8_;
    auVar13 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
                    /* try { // try from 0358d340 to 0368d347 has its CatchHandler @ 0358d42c */
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 0358d35c to 0368d35f has its CatchHandler @ 0358d43c */
                    /* try { // try from 0358d360 to 0368d3d3 has its CatchHandler @ 0358d260 */
          if (*(EBGDOILAAEJ_c **)(piVar11 + -2) == EBGDOILAAEJ_TypeInfo) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0358d38c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      in_x2 = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0358d38c:
      bVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      KICJDJCJLKJ__JEGAPBGMFJJ(__this,(bool)(bVar3 & 1),in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
}

