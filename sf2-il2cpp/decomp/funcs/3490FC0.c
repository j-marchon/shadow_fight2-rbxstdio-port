// Nekki.SF2.GUI.UIModule$$DeActivate @ RVA 0x3490FC0

void Nekki_SF2_GUI_UIModule__DeActivate(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568419 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568419 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._4_JHJCCHBOMHP.methodPtr)
              (__this,(__this->klass->vtable)._4_JHJCCHBOMHP.method);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
    }
    pSVar3 = Nekki_SF2_GUI_UIModule__HIJDMNMPFIM
                       (__this,Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated,
                        method_00);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_035910bc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035910bc:
                    /* WARNING: Could not recover jumptable at 0x035910d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

