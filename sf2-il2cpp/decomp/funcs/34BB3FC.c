// SFButton$$KJKDAHGENPM @ RVA 0x34BB3FC

void SFButton__KJKDAHGENPM
               (SFButton_o *__this,int32_t HJEBKCDDBAB,bool IHAOMFJCMFP,MethodInfo *method)

{
  ushort uVar1;
  int32_t value;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  Il2CppMethodPointer *ppIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  float NDPMILBBAPD;
  System_Nullable_Selectable_SelectionState__Fields local_38;
  
  if ((DAT_045685d3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>__ctor__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045685d3 = 1;
  }
  value = UnityEngine_UI_Selectable__get_currentSelectionState
                    ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_38,value,
             Method_System_Nullable<Selectable_SelectionState>__ctor__);
  (__this->fields).NLGFKIHALIG.fields = local_38;
  SFButton__BJBKCBEEKLB(__this,method_00);
  (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
            (__this,(ulong)(uint)HJEBKCDDBAB,0,(__this->klass->vtable)._26_DoStateTransition.method)
  ;
  if (IHAOMFJCMFP) {
    if ((__this->fields).super.super.m_Transition == 1) {
      NDPMILBBAPD = (__this->fields).super.super.m_Colors.fields.m_FadeDuration;
      if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
    }
    else {
      NDPMILBBAPD = 0.1;
    }
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = SFButton__NOFDGKIEHKD(__this,NDPMILBBAPD,method_01);
    if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar5 = pPVar2->klass;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          ppIVar4 = &pPVar5->vtable[*piVar7].methodPtr;
          goto LAB_035bb550;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    ppIVar4 = (Il2CppMethodPointer *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035bb550:
    (**ppIVar4)(pPVar2,pSVar3,1,(MethodInfo *)ppIVar4[1]);
  }
  return;
}

