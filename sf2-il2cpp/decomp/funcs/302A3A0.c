// Nekki.SF2.GUI.SimpleScroll$$CCPABLFBFFA @ RVA 0x302A3A0

void Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined8 uVar8;
  
  if ((DAT_04565cc7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cc7 = 1;
  }
  if (*(long *)&(__this->fields).JCKMKFCCNAA == 0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  pbVar1 = &(__this->fields).JCKMKFCCNAA;
  uVar8 = *(undefined8 *)pbVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0312a458;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0312a458:
  (*pVVar4->methodPtr)(pPVar3,uVar8,pVVar4->method);
  *(undefined8 *)&(__this->fields).JCKMKFCCNAA = 0;
  thunk_FUN_01c20e04(pbVar1,0);
  Nekki_SF2_GUI_SimpleScroll__GFLOBMPEFEI(__this,method_00);
  return;
}

