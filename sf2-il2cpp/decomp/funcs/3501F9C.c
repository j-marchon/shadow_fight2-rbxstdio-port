// LHKALFIIJKB.<>c$$PHDEOKCJCMD @ RVA 0x3501F9C

void LHKALFIIJKB_<>c__PHDEOKCJCMD(LHKALFIIJKB___c_o *__this,bool scopeGranted,MethodInfo *method)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  LHKALFIIJKB_c *method_00;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_0456885d & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&StringLiteral_6888);
    DAT_0456885d = 1;
  }
  if (!scopeGranted) {
    method_00 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    LHKALFIIJKB__EGAAHFPJDCC((MethodInfo *)method_00);
    return;
  }
  lVar2 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  uVar1 = StringLiteral_6888;
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar5 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_036020b4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar6,HCOEEOMMEFL_TypeInfo,1);
LAB_036020b4:
                    /* WARNING: Could not recover jumptable at 0x036020cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,uVar1,0,puVar3[1]);
  return;
}

