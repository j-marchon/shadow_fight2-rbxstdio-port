// Nekki.SF2.GUI.TableView$$KGDGDCKDLKG @ RVA 0x30D8BF4

void Nekki_SF2_GUI_TableView__KGDGDCKDLKG
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,bool IEBOPHEHOFH,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC;
  MethodInfo *in_x4;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  
  if ((DAT_0456634b & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12800);
    DAT_0456634b = 1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
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
        pVVar3 = pCVar4->vtable + (*piVar6 + 2);
        goto LAB_031d8cb8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,2);
LAB_031d8cb8:
  HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)
                (*pVVar3->methodPtr)(pCVar7,__this,(ulong)(uint)JDEFJPHCNMM,pVVar3->method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12800,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_TableView__LBGGFHONFIG(__this,HBHBCBJANIC,JDEFJPHCNMM,IEBOPHEHOFH,in_x4);
  return;
}

