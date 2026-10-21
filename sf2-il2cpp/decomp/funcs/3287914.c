// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KHJHBJHEMEM @ RVA 0x3287914

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KHJHBJHEMEM
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t JEGMMDPFNIL;
  PCKJEMMFMKL_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045672ca & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BEENJJPFBOL__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045672ca = 1;
  }
  __this_00 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (PCKJEMMFMKL_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    JEGMMDPFNIL = PCKJEMMFMKL__LAPHEMPOHMP(__this_00,0xc,1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,JEGMMDPFNIL,method_00);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar2->klass;
      uVar1._0_1_ = (pPVar6->_2).rank;
      uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar6->vtable + (*piVar8 + 2);
            goto LAB_03387a1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03387a1c:
      pSVar5 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,uVar3,pVVar4->method);
      (__this->fields).NJMEPPOGCLN = pSVar5;
      thunk_FUN_01c20e04(&(__this->fields).NJMEPPOGCLN);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

