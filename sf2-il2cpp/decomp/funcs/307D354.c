// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$CCLILNDOHAB @ RVA 0x307D354

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__CCLILNDOHAB
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  LPGLKMNHELJ_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *pDVar4;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o **ppNVar5;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar6;
  IGPDCHBJAPD_o *pIVar7;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *x;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  
  if ((DAT_04565fe7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565fe7 = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).DBOLEPNBFAD;
  x = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).AnimationEndEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).ReplayEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)
       ) goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d694;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar5 = (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar5,0);
  }
  ppNVar6 = &(__this->fields).EHKAIEBMIFA;
  pNVar8 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) goto LAB_0317d694;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  if ((__this->fields).DJGIEHCDHDN == false) {
    pIVar7 = (__this->fields).CIKGADOJJMG;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__ABOKGFABBOO(pIVar7,(MethodInfo *)0x0);
    if ((__this->fields).OFLMHJHPFJM == (MFFKCPDBFPG_o *)0x0) {
      return;
    }
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (LPGLKMNHELJ_o *)0x0) {
      (__this_00->fields).FGCJFGHMIOL = (__this->fields).OFLMHJHPFJM;
      thunk_FUN_01c20e04();
      pIVar7 = (__this->fields).CIKGADOJJMG;
      if ((pIVar7 != (IGPDCHBJAPD_o *)0x0) &&
         (pDVar4 = (pIVar7->fields).DBIAAJNKHLH, pDVar4 != (DNELIPCHKLK_o *)0x0)) {
        (__this_00->fields).JOPIEJMBFHK = (pDVar4->fields).GDPFBDIJNHA;
        thunk_FUN_01c20e04();
        JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    (__this->fields).DJGIEHCDHDN = false;
    pUVar3 = (__this->fields)._resistanceContentPrefab;
    pUVar9 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar9 = (__this->fields)._content;
    }
    else {
      pUVar9 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,pUVar9,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pNVar8 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
      *ppNVar6 = pNVar8;
      thunk_FUN_01c20e04(ppNVar6,pNVar8);
      if (*ppNVar6 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_ResistanceContent__Init
                  (*ppNVar6,(__this->fields).INIAKIIBBHK,(MethodInfo *)0x0);
        pNVar8 = (__this->fields).EHKAIEBMIFA;
        if (pNVar8 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
          pUVar2 = (pNVar8->fields).CloseEvent;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar2,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0317d694:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

