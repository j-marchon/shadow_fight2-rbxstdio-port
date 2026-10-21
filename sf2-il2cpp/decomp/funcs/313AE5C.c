// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$NCDOMAGEGCF @ RVA 0x313AE5C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  
  if ((DAT_04566727 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566727 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_01 = (__this->fields).PDHMLFAMNCO;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN(__this,method_00);
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__MHNONHHOHGN(__this,method_01);
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
              goto LAB_0323af38;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0323af38:
        pSVar4 = (System_Collections_IEnumerator_o *)
                 (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
        ppSVar9 = &(__this->fields).CLLBGHPLGNH;
        *ppSVar9 = pSVar4;
        thunk_FUN_01c20e04(ppSVar9,pSVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

