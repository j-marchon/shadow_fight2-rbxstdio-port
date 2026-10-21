// Nekki.SF2.GUI.UIModule$$Activate @ RVA 0x3490A1C

void Nekki_SF2_GUI_UIModule__Activate(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_UIModule_c *pNVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568415 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568415 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Transform__SetSiblingIndex(__this_01,(__this->fields)._Order,(MethodInfo *)0x0);
      if ((__this->fields).__IsInited_k__BackingField == false) {
        pNVar5 = __this->klass;
        (__this->fields).__IsInited_k__BackingField = true;
        (*(pNVar5->vtable)._5_GIENGNEGHPJ.methodPtr)(__this,(pNVar5->vtable)._5_GIENGNEGHPJ.method);
      }
      (*(__this->klass->vtable)._7_BJBEBBGINAH.methodPtr)
                (__this,(__this->klass->vtable)._7_BJBEBBGINAH.method);
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
      }
      pSVar3 = Nekki_SF2_GUI_UIModule__HIJDMNMPFIM
                         (__this,Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated,
                          method_00);
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
              pVVar4 = pPVar6->vtable + *piVar8;
              goto LAB_03590b68;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03590b68:
                    /* WARNING: Could not recover jumptable at 0x03590b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

