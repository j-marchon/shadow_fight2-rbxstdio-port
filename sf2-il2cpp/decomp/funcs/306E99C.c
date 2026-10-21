// EEGDOGKBLNG$$BHJOHOIMAKN @ RVA 0x306E99C

void EEGDOGKBLNG__BHJOHOIMAKN(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *MCCKDBNBCPM,MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  KAMBBJFPLGM_o *pKVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_04565f4d & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04565f4d = 1;
  }
  pKVar3 = (__this->fields).MLAAJICBOAD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  if (MCCKDBNBCPM != (KAMBBJFPLGM_o *)0x0) {
    if ((pKVar3->fields).EMOLIBOCKJK == (MCCKDBNBCPM->fields).EMOLIBOCKJK) {
      return;
    }
    lVar1 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(ODEIOKOJGDM_c **)(piVar5 + -2) == ODEIOKOJGDM_TypeInfo) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0316ea90;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01b81914(plVar6,ODEIOKOJGDM_TypeInfo,0);
LAB_0316ea90:
                    /* WARNING: Could not recover jumptable at 0x0316eaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,0,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

