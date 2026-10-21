// Nekki.SF2.Core.ApplicationController$$WaitAndQuit @ RVA 0x30C1830

void Nekki_SF2_Core_ApplicationController__WaitAndQuit(float NJIGMDDFANO,MethodInfo *method)

{
  MethodInfo *method_00;
  System_Collections_IEnumerator_o *pSVar1;
  Il2CppMethodPointer pIVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_04566289 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566289 = 1;
  }
  method_00 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar1 = Nekki_SF2_Core_ApplicationController__GLICNAGNCEN(NJIGMDDFANO,method_00);
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = method_00->methodPointer;
  uVar3 = (ulong)*(ushort *)(pIVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(pIVar2 + 0xb0) + 8);
    do {
      if (*(PBAKFOBIHEG_c **)(piVar4 + -2) == PBAKFOBIHEG_TypeInfo) {
        pIVar2 = pIVar2 + (long)*piVar4 * 0x10 + 0x138;
        goto LAB_031c18d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  pIVar2 = (Il2CppMethodPointer)FUN_01b81914(method_00,PBAKFOBIHEG_TypeInfo,0);
LAB_031c18d0:
                    /* WARNING: Could not recover jumptable at 0x031c18ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pIVar2)(method_00,pSVar1,1,*(undefined8 *)(pIVar2 + 8));
  return;
}

