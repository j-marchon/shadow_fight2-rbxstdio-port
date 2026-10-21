// Nekki.SF2.GUI.TableView$$CurrentRowSize @ RVA 0x30D8A30

float Nekki_SF2_GUI_TableView__CurrentRowSize(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  float fVar8;
  
  if ((DAT_04566341 & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_04566341 = 1;
    method = extraout_x1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  uVar2 = Nekki_SF2_GUI_TableView__GetCurrentCellRow(__this,method);
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8((ulong)uVar2);
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_031d8ac8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,1);
LAB_031d8ac8:
                    /* WARNING: Could not recover jumptable at 0x031d8ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar8 = (float)(*pVVar3->methodPtr)(pCVar7,__this,(ulong)uVar2,pVVar3->method);
  return fVar8;
}

