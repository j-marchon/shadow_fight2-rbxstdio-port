// PPJFCELDBGE$$IELLEFEFFJD @ RVA 0x34CCC00

void PPJFCELDBGE__IELLEFEFFJD(PPJFCELDBGE_o *__this,MethodInfo *method)

{
  long lVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04568680 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PNIHAMNIPJI,_ICHIDBGJOEC>_AIHNLLGNBLC__);
    FUN_01bab630(&ICHIDBGJOEC_TypeInfo);
                    /* try { // try from 035ccc54 to 036ccc7f has its CatchHandler @ 035cceb4 */
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_PPJFCELDBGE_DLDCIBFCNCP__);
    DAT_04568680 = 1;
  }
  CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BINFBNNNALO;
  lVar1 = *(long *)(Method_GOCLIOIANDK<PNIHAMNIPJI,_ICHIDBGJOEC>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
                    /* try { // try from 035cccbc to 036cccc3 has its CatchHandler @ 035ccea4 */
  source = OAKJDLHHIAB__JOLMOAGFIBP
                     ((ICHIDBGJOEC_o *)**(undefined8 **)(lVar1 + 0xb8),(MethodInfo *)0x0);
                    /* try { // try from 035ccccc to 036cccd3 has its CatchHandler @ 035ccea8 */
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 035ccce4 to 036ccceb has its CatchHandler @ 035cce8c */
  System_Action<Unit>___ctor();
                    /* try { // try from 035cccf4 to 036cccfb has its CatchHandler @ 035cce90 */
                    /* try { // try from 035cccfc to 036ccd0b has its CatchHandler @ 035cce94 */
  value = UniRx_ObservableExtensions__Subscribe<Unit>
                    ((System_IObservable_T__o *)source,onNext,
                     Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
                    /* try { // try from 035ccd10 to 036ccd1b has its CatchHandler @ 035cce98 */
    UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
    lVar1 = *(long *)(Method_GOCLIOIANDK<PNIHAMNIPJI,_ICHIDBGJOEC>_AIHNLLGNBLC__ + 0x20);
                    /* try { // try from 035ccd1c to 036cce4f has its CatchHandler @ 035ccae0 */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(ICHIDBGJOEC_c **)(piVar4 + -2) == ICHIDBGJOEC_TypeInfo) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_035ccd9c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01b81914(plVar5,ICHIDBGJOEC_TypeInfo,0);
LAB_035ccd9c:
                    /* WARNING: Could not recover jumptable at 0x035ccdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar5,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

