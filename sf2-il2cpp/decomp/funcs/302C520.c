// Nekki.SF2.GUI.SimpleScroll$$IGENILJIHFN @ RVA 0x302C520

void Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  method_00 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312c518 with catch @ 0312c524
                        */
  if ((DAT_04565cc6 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cc6 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method_00);
  if (MJBMLNKAPGC.fields.x * MJBMLNKAPGC.fields.x + MJBMLNKAPGC.fields.y * MJBMLNKAPGC.fields.y <=
      0.1) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_SimpleScroll__GMEOEFHKANF
                     (__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar2->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + *piVar8;
        goto LAB_0312c61c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0312c61c:
  uVar5 = (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  *(undefined8 *)&(__this->fields).JCKMKFCCNAA = uVar5;
  thunk_FUN_01c20e04(&(__this->fields).JCKMKFCCNAA);
  return;
}

