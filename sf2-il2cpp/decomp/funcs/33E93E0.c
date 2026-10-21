// FCJBEKHDLAF$$ANMIDMGFFHP @ RVA 0x33E93E0

void FCJBEKHDLAF__ANMIDMGFFHP(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04567f1f & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04567f1f = 1;
    method = extraout_x1;
  }
  FCJBEKHDLAF__PPGPKHDJILJ(__this,method);
  FCJBEKHDLAF__MFKBMJDELMB(__this,method_00);
  FCJBEKHDLAF__KLBLKMJOBME(__this,true,in_x2);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__HGEBEEICLLN((MethodInfo *)0x0);
  MGNPHCAAEIO__HMGOIPKIDBB((MethodInfo *)0x0);
  MGNPHCAAEIO__BHMIDFLCAHJ((MethodInfo *)0x0);
  lVar1 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(ODEIOKOJGDM_c **)(piVar4 + -2) == ODEIOKOJGDM_TypeInfo) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_034e9500;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01b81914(plVar5,ODEIOKOJGDM_TypeInfo,0);
LAB_034e9500:
                    /* WARNING: Could not recover jumptable at 0x034e9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,0,puVar2[1]);
  return;
}

