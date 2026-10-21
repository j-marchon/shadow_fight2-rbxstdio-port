// BFAEMDAPOBD.<>c$$ELBJDEDGJOA @ RVA 0x33E2E78

MEMHIINCGGE_o *
BFAEMDAPOBD_<>c__ELBJDEDGJOA(BFAEMDAPOBD___c_o *__this,MNAMMGOAMHK_o *x,MethodInfo *method)

{
  long *plVar1;
  undefined8 *puVar2;
  MEMHIINCGGE_o *pMVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567eb9 & 1) == 0) {
    FUN_01bab630(&Method_NKJKEABJBFK_EFDDFOMAEPK<OHLGMHCCFPL>__);
    FUN_01bab630(&OHLGMHCCFPL_TypeInfo);
    DAT_04567eb9 = 1;
  }
  plVar1 = (long *)FUN_01fe4498(x,Method_NKJKEABJBFK_EFDDFOMAEPK<OHLGMHCCFPL>__);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(OHLGMHCCFPL_c **)(piVar6 + -2) == OHLGMHCCFPL_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_034e2f20;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01b81914(plVar1,OHLGMHCCFPL_TypeInfo,0);
LAB_034e2f20:
                    /* WARNING: Could not recover jumptable at 0x034e2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar3 = (MEMHIINCGGE_o *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  return pMVar3;
}

