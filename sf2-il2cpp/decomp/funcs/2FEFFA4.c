// Nekki.SF2.GUI.Fight.EndFightScreen$$EKKNAKHCGML @ RVA 0x2FEFFA4

void Nekki_SF2_GUI_Fight_EndFightScreen__EKKNAKHCGML
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  bool bVar1;
  bool GIANLAGKFCC;
  Nekki_SF2_GUI_Fight_EndFightContent_o *pNVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndFightContent_o **ppNVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Events_UnityEvent_o *pUVar7;
  UnityEngine_UI_Button_o *IHDIBJAICLO;
  
  if ((DAT_04565a5f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CJNMMGFHMBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_EIDLDGJLALI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_KCDFDJJIFGG__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndFightContent>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VerticalLayoutGroup>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565a5f = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).LDLILPHECLE != false) {
    (__this->fields).LDLILPHECLE = false;
    pUVar4 = (__this->fields)._endFightContentPrefab;
    pUVar6 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar6 = (__this->fields)._content;
    }
    else {
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar4 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar4,pUVar6,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Fight_EndFightContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar4,Method_UnityEngine_GameObject_GetComponent<EndFightContent>__);
      ppNVar5 = &(__this->fields).DBOLEPNBFAD;
      *ppNVar5 = pNVar2;
      thunk_FUN_01c20e04(ppNVar5,pNVar2);
      if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._contentLayout;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          PNPKEKHEMCD = (__this->fields).CIKGADOJJMG;
          pNVar2 = (__this->fields).DBOLEPNBFAD;
          ODNJEHJPBGA = (UnityEngine_UI_VerticalLayoutGroup_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar4,
                                   Method_UnityEngine_GameObject_GetComponent<VerticalLayoutGroup>__
                                  );
          IHDIBJAICLO = (__this->fields)._animationFinishButton;
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = Nekki_SF2_GUI_Fight_EndFightScreen__EKFIBOAGPNF
                            (__this,FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO,method_00);
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          GIANLAGKFCC = Nekki_SF2_GUI_Fight_EndFightScreen__PKPDECFBAKK
                                  (__this,FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO,method_00
                                  );
          if (pNVar2 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
            Nekki_SF2_GUI_Fight_EndFightContent__Init
                      (pNVar2,PNPKEKHEMCD,ODNJEHJPBGA,IHDIBJAICLO,bVar1,GIANLAGKFCC,
                       (MethodInfo *)0x0);
            if (*ppNVar5 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
              pUVar7 = ((*ppNVar5)->fields).AnimationEndEvent;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar3,(MethodInfo *)0x0);
                if (*ppNVar5 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                  pUVar7 = ((*ppNVar5)->fields).CloseEvent;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar3,(MethodInfo *)0x0);
                    if (*ppNVar5 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                      pUVar7 = ((*ppNVar5)->fields).RetryFightEvent;
                      pUVar3 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar3,(MethodInfo *)0x0);
                        if (*ppNVar5 != (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                          pUVar7 = ((*ppNVar5)->fields).GoToShopEvent;
                          pUVar3 = (UnityEngine_Events_UnityAction_o *)
                                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener
                                      (pUVar7,pUVar3,(MethodInfo *)0x0);
                            return;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

