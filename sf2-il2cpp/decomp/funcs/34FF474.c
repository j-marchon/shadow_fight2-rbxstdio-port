// LHKALFIIJKB$$IPEPBNLDPHG @ RVA 0x34FF474

void LHKALFIIJKB__IPEPBNLDPHG(float KMOAKHKDBAB,MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  MethodInfo *method_01;
  System_Collections_IEnumerator_o *pSVar1;
  Il2CppMethodPointer pIVar2;
  System_Collections_IEnumerator_o **ppSVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_04568846 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568846 = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568908 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568908 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((KMOAKHKDBAB <= 0.0) ||
     (LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField != false)) {
    return;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__EMABNEMMNON((MethodInfo *)method_00);
  method_01 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar1 = LHKALFIIJKB__OBFFJCKCBKI(KMOAKHKDBAB,method_01);
  if (method_01 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = method_01->methodPointer;
  uVar4 = (ulong)*(ushort *)(pIVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(pIVar2 + 0xb0) + 8);
    do {
      if (*(PBAKFOBIHEG_c **)(piVar5 + -2) == PBAKFOBIHEG_TypeInfo) {
        pIVar2 = pIVar2 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_035ff5a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pIVar2 = (Il2CppMethodPointer)FUN_01b81914(method_01,PBAKFOBIHEG_TypeInfo,0);
LAB_035ff5a0:
  pSVar1 = (System_Collections_IEnumerator_o *)
           (**(code **)pIVar2)(method_01,pSVar1,1,*(undefined8 *)(pIVar2 + 8));
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  return;
}

