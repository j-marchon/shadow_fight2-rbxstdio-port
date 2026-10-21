// BBJEEHDMNGJ$$JCLJEFPCGPK @ RVA 0x31B76D4

void BBJEEHDMNGJ__JCLJEFPCGPK(BBJEEHDMNGJ_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_TableView_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_02;
  
  if ((DAT_04566bc0 & 1) == 0) {
    FUN_01bab630(&Method_BBJEEHDMNGJ_JCLJEFPCGPK__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_RemoveListener__);
    DAT_04566bc0 = 1;
  }
  if (ICJLHMDFMKG != 0) {
    return;
  }
  pNVar6 = (__this->fields).PMMMEDPGNFO;
  if (pNVar6 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    __this_02 = (pNVar6->fields)._OnStateChange;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                 Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_RemoveListener__);
      pNVar6 = (__this->fields).PMMMEDPGNFO;
      if ((pNVar6 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) &&
         (__this_00 = (pNVar6->fields)._TableView, __this_00 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
        bVar2 = Nekki_SF2_GUI_TableView__get_IsMoving(__this_00,(MethodInfo *)0x0);
        if (bVar2) {
          pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar4 = BBJEEHDMNGJ__JFCJCGGLKPP(__this,method_00);
          if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar3->klass;
            uVar1._0_1_ = (pPVar7->_2).rank;
            uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar1;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar5 = pPVar7->vtable + *piVar9;
                  goto LAB_032b7844;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032b7844:
                    /* WARNING: Could not recover jumptable at 0x032b785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
            return;
          }
        }
        else {
          __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
          if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
            Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
            BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

