// Nekki.SF2.GUI.TableView$$DPFEFNDJCIG @ RVA 0x30DA60C

void Nekki_SF2_GUI_TableView__DPFEFNDJCIG
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MLIIECFHJAM_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MLIIECFHJAM_o *pMVar6;
  
  if ((DAT_04566349 & 1) == 0) {
    FUN_01bab630(&MLIIECFHJAM_TypeInfo,(ulong)(uint)JDEFJPHCNMM);
    DAT_04566349 = 1;
  }
  pMVar6 = (__this->fields).CFMPOFMLMKK;
  if (pMVar6 == (MLIIECFHJAM_o *)0x0) {
    return;
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MLIIECFHJAM_TypeInfo) {
        pVVar2 = pMVar3->vtable + *piVar5;
        goto LAB_031da6a4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MLIIECFHJAM_TypeInfo,0);
LAB_031da6a4:
                    /* WARNING: Could not recover jumptable at 0x031da6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,__this,(ulong)(uint)JDEFJPHCNMM,pVVar2->method);
  return;
}

