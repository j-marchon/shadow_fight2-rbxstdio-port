// Nekki.SF2.GUI.Fight.EndPvpFightContent$$DIFPFEEGGAB @ RVA 0x31315E4

void Nekki_SF2_GUI_Fight_EndPvpFightContent__DIFPFEEGGAB
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  uint index;
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045666cb & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666cb = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this->fields).BGINDOKLEKD;
    method_00 = (MethodInfo *)(ulong)index;
    if ((int)index < (__this_00->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,index,
                          Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
      uVar4 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03231788;
      pIVar6 = pIVar3->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 3);
            goto LAB_032316fc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,3);
LAB_032316fc:
      (*pVVar5->methodPtr)(pIVar3,uVar4,pVVar5->method);
      pIVar6 = pIVar3->klass;
      uVar2._0_1_ = (pIVar6->_2).rank;
      uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar5 = pIVar6->vtable + *piVar8;
            goto LAB_03231758;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,0);
LAB_03231758:
      (*pVVar5->methodPtr)(pIVar3,pVVar5->method);
      method_00 = extraout_x1;
    }
    routine = Nekki_SF2_GUI_Fight_EndPvpFightContent__EHODBOPOCMN(__this,method_00);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
LAB_03231788:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

