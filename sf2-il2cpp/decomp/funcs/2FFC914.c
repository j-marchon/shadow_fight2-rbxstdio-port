// Nekki.SF2.GUI.Fight.PreFight$$InitPreFight @ RVA 0x2FFC914

void Nekki_SF2_GUI_Fight_PreFight__InitPreFight
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,GOJLGHMMDBO_o *NOKHDHCKCPH,
               GOJLGHMMDBO_o *MDIINGJCKNH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Action_T__o *IELDNEAAPBE;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ScreenFight_o **ppNVar4;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar5;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_00;
  Nekki_SF2_GUI_Fight_ViewerFight_o **ppNVar6;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar7;
  UnityEngine_GameObject_o *pUVar8;
  
  if ((DAT_04565aef & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ScreenFight>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ViewerFight>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_LOPCEFIAKHF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_OnScreenStop__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
    DAT_04565aef = 1;
  }
  ppNVar6 = &(__this->fields).FLKPJPEAJAJ;
  pNVar7 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (__this->fields).viewerFightPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar8 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar8,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_030fcc30;
    pNVar7 = (Nekki_SF2_GUI_Fight_ViewerFight_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar8,Method_UnityEngine_GameObject_GetComponent<ViewerFight>__);
    *ppNVar6 = pNVar7;
    thunk_FUN_01c20e04(ppNVar6,pNVar7);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) goto LAB_030fcc30;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_030fcc30;
    UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
    pNVar7 = (__this->fields).FLKPJPEAJAJ;
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar7 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) goto LAB_030fcc30;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar7,0,IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) goto LAB_030fcc30;
    Nekki_SF2_GUI_Fight_ViewerFight__PreInit(*ppNVar6,NOKHDHCKCPH,MDIINGJCKNH,(MethodInfo *)0x0);
  }
  ppNVar4 = &(__this->fields).LJAILGNLPAB;
  pNVar5 = *ppNVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (__this->fields).screenFightPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar8 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar8,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pNVar5 = (Nekki_SF2_GUI_Fight_ScreenFight_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar8,Method_UnityEngine_GameObject_GetComponent<ScreenFight>__);
      *ppNVar4 = pNVar5;
      thunk_FUN_01c20e04(ppNVar4,pNVar5);
      if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppNVar4 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) &&
             (pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
            if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
              __this_00 = ((*ppNVar4)->fields).OnStopScreen;
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
              UnityEngine_Events_UnityAction<Int32Enum>___ctor();
              if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
                UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                           Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
                if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Fight_ScreenFight__PreInit
                            (*ppNVar4,(__this->fields).FBFPLEFCDOK,(MethodInfo *)0x0);
                  goto LAB_030fcc10;
                }
              }
            }
          }
        }
      }
    }
LAB_030fcc30:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_030fcc10:
  Nekki_SF2_GUI_Fight_PreFight__VisibleViewer(__this,false,method_00);
  return;
}

