// Nekki.SF2.GUI.TableView$$NumberOfRows @ RVA 0x30D9BB0

int32_t Nekki_SF2_GUI_TableView__NumberOfRows(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456634d & 1) == 0) {
    auVar8 = FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_0456634d = 1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
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
        pVVar3 = pCVar4->vtable + *piVar6;
        goto LAB_031d9c38;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,0);
LAB_031d9c38:
                    /* WARNING: Could not recover jumptable at 0x031d9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*pVVar3->methodPtr)(pCVar7,__this,pVVar3->method);
  return iVar2;
}

