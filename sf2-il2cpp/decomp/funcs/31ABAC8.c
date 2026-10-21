// GCIFMNHADDF$$IEHJBHAHKDJ @ RVA 0x31ABAC8

void GCIFMNHADDF__IEHJBHAHKDJ
               (GCIFMNHADDF_o *__this,int32_t CMPFDDMPDGN,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  System_Collections_Generic_List_BaseDialog__o *__this_00;
  GCIFMNHADDF_NFAHLBCFIPD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Dialogs_BaseDialog_array *pNVar7;
  GCIFMNHADDF_NFAHLBCFIPD_array *pGVar8;
  System_Action_BaseDialog__o *pSVar9;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar10;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_02;
  
  if ((DAT_04566b40 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_Add__);
    FUN_01bab630(&GCIFMNHADDF_NFAHLBCFIPD_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b40 = 1;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
    pNVar5 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__Create
                       (pNVar4,CMPFDDMPDGN,(MethodInfo *)0x0);
    ppNVar10 = &(__this->fields)._AOOFDKJAALA_k__BackingField;
    *ppNVar10 = pNVar5;
    thunk_FUN_01c20e04(ppNVar10);
    pNVar5 = *ppNVar10;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    lVar2 = Method_System_Collections_Generic_List<BaseDialog>_Add__;
    if (bVar3) {
      return;
    }
    __this_00 = (__this->fields).IMMJEIGBAAC;
    if (__this_00 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      pNVar5 = (__this->fields)._AOOFDKJAALA_k__BackingField;
      pNVar7 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar7->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        __this_02 = (__this->fields).EDBKLOENEPB;
        __this_01 = (GCIFMNHADDF_NFAHLBCFIPD_o *)
                    thunk_FUN_01bda818(GCIFMNHADDF_NFAHLBCFIPD_TypeInfo);
        (__this_01->fields).DPAPCJMICGO = true;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields).BHDFAAMNDNC = (__this->fields)._AOOFDKJAALA_k__BackingField;
        thunk_FUN_01c20e04();
        (__this_01->fields).DPAPCJMICGO = true;
        lVar2 = Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_Add__;
        if (__this_02 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
          pGVar8 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pGVar8 != (GCIFMNHADDF_NFAHLBCFIPD_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pGVar8->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pGVar8->m_Items[(int)uVar1] = __this_01;
              thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,__this_01);
              pMVar6 = extraout_x1;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pMVar6 = extraout_x1_00;
            }
            GCIFMNHADDF__MCKCJDBPAFB(__this,pMVar6);
            Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
            pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches
                        (pNVar4,true,(MethodInfo *)0x0);
              pNVar5 = *ppNVar10;
              if (pNVar5 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                (*(pNVar5->klass->vtable)._33_Init.methodPtr)
                          (pNVar5,IMMNELPBGIF,(pNVar5->klass->vtable)._33_Init.method);
                pSVar9 = (__this->fields).LANNHNJHOLM;
                pMVar6 = extraout_x1_01;
                if (pSVar9 != (System_Action_BaseDialog__o *)0x0) {
                  (*(code *)(pSVar9->fields).super.super.invoke_impl)
                            ((pSVar9->fields).super.super.method_code,*ppNVar10,
                             (pSVar9->fields).super.super.method);
                  pMVar6 = extraout_x1_02;
                }
                GCIFMNHADDF__HAMCIMDBOCI(__this,pMVar6);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

