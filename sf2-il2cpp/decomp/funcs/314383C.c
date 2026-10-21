// KKLJIDJBFEI$$ODIHHGKNPDI @ RVA 0x314383C

void KKLJIDJBFEI__ODIHHGKNPDI(KKLJIDJBFEI_o *__this,MethodInfo *method)

{
  System_Action_c *pSVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar5;
  System_Action_o **ppSVar6;
  System_Action_string__o **ppSVar7;
  System_Action_o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Action_string__c *pSVar10;
  
  if ((DAT_0456676b & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_EHCOOPEEHMC__);
    FUN_01bab630(&Method_KKLJIDJBFEI_PKNNILDNIAD__);
    FUN_01bab630(&StringLiteral_11524);
    DAT_0456676b = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_11524,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
    (__this->fields).EODMKFMHMIK = false;
    pNVar2 = JJPNLEPEAFM__DHEOJOJFOAJ((MethodInfo *)0x0);
    ppNVar5 = &(__this->fields).KAGJIPIDJCE;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if (*ppNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
      ppSVar7 = &((*ppNVar5)->fields).OnClosedOkAction;
      pSVar9 = *ppSVar7;
      pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
      System_Action<object>___ctor();
      pSVar3 = System_Delegate__Combine((System_Delegate_o *)pSVar9,pSVar3,(MethodInfo *)0x0);
      pSVar10 = System_Action<string>_TypeInfo;
      if (pSVar3 == (System_Delegate_o *)0x0) {
        lVar4 = 0;
        *ppSVar7 = (System_Action_string__o *)0x0;
      }
      else {
        pSVar9 = (System_Action_string__o *)
                 thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
        if (pSVar9 == (System_Action_string__o *)0x0) {
LAB_03243990:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3,pSVar10);
        }
        *ppSVar7 = pSVar9;
        pSVar10 = System_Action<string>_TypeInfo;
        lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
        if (lVar4 == 0) goto LAB_03243990;
      }
      thunk_FUN_01c20e04(ppSVar7,lVar4);
      if (*ppNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
        ppSVar6 = &((*ppNVar5)->fields).OnClosedCancelAction;
        pSVar8 = *ppSVar6;
        pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        pSVar8 = (System_Action_o *)
                 System_Delegate__Combine((System_Delegate_o *)pSVar8,pSVar3,(MethodInfo *)0x0);
        pSVar1 = System_Action_TypeInfo;
        if (pSVar8 == (System_Action_o *)0x0) {
          *ppSVar6 = (System_Action_o *)0x0;
        }
        else if ((pSVar8->klass != System_Action_TypeInfo) ||
                (*ppSVar6 = pSVar8, pSVar8->klass != pSVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar8);
        }
        thunk_FUN_01c20e04(ppSVar6,pSVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

