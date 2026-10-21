// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$IPIGMILHFKP @ RVA 0x3170BC4

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__IPIGMILHFKP
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  UnityEngine_UI_Image_o *pUVar10;
  
  if ((DAT_0456691d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456691d = 1;
    method = extraout_x1;
  }
  pUVar10 = (__this->fields).JDDOPDPMFGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar10 = (__this->fields).JDDOPDPMFGJ;
    if ((pUVar10 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03270d04;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  }
  bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled
                    ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__MIMGJEDCDHE(__this,method_00)
  ;
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar3->klass;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + *piVar8;
          goto LAB_03270cd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03270cd8:
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    ppSVar9 = &(__this->fields).CBILKJAEFOM;
    *ppSVar9 = pSVar4;
    thunk_FUN_01c20e04(ppSVar9,pSVar4);
    return;
  }
LAB_03270d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

