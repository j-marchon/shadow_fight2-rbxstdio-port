// DODIFOIEPLP.BFLNJACBENC$$NGJFAAEEKPJ @ RVA 0x33A1DB8

void DODIFOIEPLP_BFLNJACBENC__NGJFAAEEKPJ(long __this)

{
  UniRx_Unit_StaticFields UVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 034a1d18 with catch @ 034a1db8 */
                    /* catch() { ... } // from try @ 034a1d14 with catch @ 034a1dbc */
                    /* catch() { ... } // from try @ 034a1bd0 with catch @ 034a1dc0 */
                    /* catch() { ... } // from try @ 034a1bb4 with catch @ 034a1dc4 */
                    /* try { // try from 034a1dd4 to 035a1dd7 has its CatchHandler @ 034a1dfc */
                    /* try { // try from 034a1dd8 to 035a1e03 has its CatchHandler @ 034a1a90 */
  if ((DAT_04567cbf & 1) == 0) {
    FUN_01bab630(&System_IObserver<Unit>_TypeInfo);
    FUN_01bab630(&UniRx_Unit_TypeInfo);
    DAT_04567cbf = 1;
  }
                    /* catch() { ... } // from try @ 034a1dd4 with catch @ 034a1dfc */
  plVar6 = *(long **)(__this + 0x10);
                    /* try { // try from 034a1e04 to 035a1e0b has its CatchHandler @ 034a1e20 */
  if ((UniRx_Unit_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a1e0c to 035a1e17 has its CatchHandler @ 034a1a90 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034a1e18 to 035a1e1f has its CatchHandler @ 034a1e20 */
  if (DAT_0455fe73 == '\0') {
                    /* catch() { ... } // from try @ 034a1d98 with catch @ 034a1e20
                       catch() { ... } // from try @ 034a1e04 with catch @ 034a1e20
                       catch() { ... } // from try @ 034a1e18 with catch @ 034a1e20 */
    FUN_01bab630(&UniRx_Unit_TypeInfo);
    DAT_0455fe73 = '\x01';
  }
  if ((UniRx_Unit_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    UVar1 = *UniRx_Unit_TypeInfo->static_fields;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(System_IObserver_Unit__c **)(piVar5 + -2) == System_IObserver<Unit>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_034a1ea4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01b81914(plVar6,System_IObserver<Unit>_TypeInfo,0);
LAB_034a1ea4:
    (*(code *)*puVar2)(plVar6,UVar1,puVar2[1]);
    plVar6 = *(long **)(__this + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(System_IObserver_Unit__c **)(piVar5 + -2) == System_IObserver<Unit>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_034a1f0c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01b81914(plVar6,System_IObserver<Unit>_TypeInfo,2);
LAB_034a1f0c:
                    /* WARNING: Could not recover jumptable at 0x034a1f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a1f24 to 035a20fb has its CatchHandler @ 034a1f24
                       catch() { ... } // from try @ 034a1f24 with catch @ 034a1f24
                       catch() { ... } // from try @ 034a219c with catch @ 034a1f24
                       catch() { ... } // from try @ 034a21fc with catch @ 034a1f24
                       catch() { ... } // from try @ 034a223c with catch @ 034a1f24
                       catch() { ... } // from try @ 034a2280 with catch @ 034a1f24
                       catch() { ... } // from try @ 034a22bc with catch @ 034a1f24
                       catch() { ... } // from try @ 034a22d8 with catch @ 034a1f24
                       catch() { ... } // from try @ 034a2308 with catch @ 034a1f24 */
  FUN_01bab8c8();
}

