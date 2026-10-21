// Nekki.SF2.GUI.Fight.PreFight$$OpenPauseScreen @ RVA 0x2FFE62C

void Nekki_SF2_GUI_Fight_PreFight__OpenPauseScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_PauseScreen_o **ppNVar4;
  Nekki_SF2_GUI_Fight_PauseScreen_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Events_UnityEvent_o *pUVar7;
  
  if ((DAT_04565b0b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<PauseScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_MGOILECPAFE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_NJPEJIFFNHN__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565b0b = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).pauseScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    ppNVar4 = &(__this->fields).IHNMJKLMFMA;
    pNVar5 = *ppNVar4;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar6 = (__this->fields).pauseScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar6 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar6,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_Fight_PauseScreen_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar6,Method_UnityEngine_GameObject_GetComponent<PauseScreen>__);
        *ppNVar4 = pNVar5;
        thunk_FUN_01c20e04(ppNVar4,pNVar5);
        if ((*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
          if (*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar2,parent,false,(MethodInfo *)0x0);
              if ((*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) &&
                 (pUVar2 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0),
                 pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar2,(MethodInfo *)0x0);
                if (*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) {
                  pUVar7 = (UnityEngine_Events_UnityEvent_o *)((*ppNVar4)->fields).OnSurrender;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar3,(MethodInfo *)0x0);
                    if (*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) {
                      pUVar7 = (UnityEngine_Events_UnityEvent_o *)((*ppNVar4)->fields).OnPlay;
                      pUVar3 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar3,(MethodInfo *)0x0);
                        if (*ppNVar4 != (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) {
                          Nekki_SF2_GUI_Fight_PauseScreen__Init(*ppNVar4,(MethodInfo *)0x0);
                          goto LAB_030fe854;
                        }
                      }
                    }
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
  }
LAB_030fe854:
  if (DAT_04565b83 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04565b83 = '\x01';
  }
  if (Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NHDGMLJJAOA_k__BackingField !=
      false) {
    return;
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}

