// TypeDefIndex 83
// Namespace: Nekki.SF2.GUI.Fight
// public class PreFight : UIModule
// Fields:
//   public PreFight.JNJIBDGLBPC OnButtonClick; // 0x28
//   public ScreenFight.NBAJOLBLMOD OnStopScreen; // 0x30
//   private GameObject viewerFightPrefab; // 0x38
//   private GameObject screenFightPrefab; // 0x40
//   private GameObject pauseScreenPrefab; // 0x48
//   private GameObject endFightScreenPrefab; // 0x50
//   private GameObject endPvpFightScreenPrefab; // 0x58
//   private GameObject endRaidRoundFightScreenPrefab; // 0x60
//   private GameObject endRaidFinalFightScreenPrefab; // 0x68
//   private GameObject achievementMessagePrefab; // 0x70
//   private AFFHKININGD FBFPLEFCDOK; // 0x78
//   private ViewerFight FLKPJPEAJAJ; // 0x80
//   private ScreenFight LJAILGNLPAB; // 0x88
//   private PauseScreen IHNMJKLMFMA; // 0x90
//   private EndFightScreen GOALBJHEANN; // 0x98
//   private EndPvpFightScreen LJEDFCFDKAE; // 0xA0
//   private EndRaidRoundFightScreen FFCLNFCCMKN; // 0xA8
//   private EndRaidFinalFightScreen GPFGIJLBJLK; // 0xB0

// ===== public void OnFightPause(bool CJNHFNHJHPE)  [RVA 0x2FFC59C]
// Nekki.SF2.GUI.Fight.PreFight$$OnFightPause @ RVA 0x2FFC59C

void Nekki_SF2_GUI_Fight_PreFight__OnFightPause
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565ae9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565ae9 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__OnFightPause(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetHealthBarVisible(HEDFKJBDBFN HEHMPFLAEGE, bool CJNHFNHJHPE)  [RVA 0x2FFC634]
// Nekki.SF2.GUI.Fight.PreFight$$SetHealthBarVisible @ RVA 0x2FFC634

void Nekki_SF2_GUI_Fight_PreFight__SetHealthBarVisible
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t HEHMPFLAEGE,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565aea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aea = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__SetHealthBarVisible
                (pNVar2,HEHMPFLAEGE,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateYouWin()  [RVA 0x2FFC6D4]
// Nekki.SF2.GUI.Fight.PreFight$$CreateYouWin @ RVA 0x2FFC6D4

void Nekki_SF2_GUI_Fight_PreFight__CreateYouWin
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565aeb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aeb = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateYouWin(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetPlayerPvpMode(HEDFKJBDBFN HEHMPFLAEGE, bool CJNHFNHJHPE)  [RVA 0x2FFC758]
// Nekki.SF2.GUI.Fight.PreFight$$SetPlayerPvpMode @ RVA 0x2FFC758

void Nekki_SF2_GUI_Fight_PreFight__SetPlayerPvpMode
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t HEHMPFLAEGE,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565aec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aec = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__SetPlayerPvpMode
                (pNVar2,HEHMPFLAEGE,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void ViewerDisplayDamage(string GIHPFBNPHMP)  [RVA 0x2FFC7F8]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerDisplayDamage @ RVA 0x2FFC7F8

void Nekki_SF2_GUI_Fight_PreFight__ViewerDisplayDamage
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,System_String_o *GIHPFBNPHMP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565aed & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aed = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__DisplayDamage(pNVar2,GIHPFBNPHMP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateFight()  [RVA 0x2FFC890]
// Nekki.SF2.GUI.Fight.PreFight$$CreateFight @ RVA 0x2FFC890

void Nekki_SF2_GUI_Fight_PreFight__CreateFight
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565aee & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aee = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateFight(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void InitPreFight(GOJLGHMMDBO NOKHDHCKCPH, GOJLGHMMDBO MDIINGJCKNH)  [RVA 0x2FFC914]
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


// ===== public void OpenEndRaidRoundFightScreen(IGPDCHBJAPD HPACPFLKHPK)  [RVA 0x2FFCCCC]
// Nekki.SF2.GUI.Fight.PreFight$$OpenEndRaidRoundFightScreen @ RVA 0x2FFCCCC

void Nekki_SF2_GUI_Fight_PreFight__OpenEndRaidRoundFightScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *__this_00;
  Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o **ppNVar5;
  
  if ((DAT_04565af0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndRaidRoundFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af0 = 1;
  }
  __this_00 = (__this->fields).LJAILGNLPAB;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(__this_00,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields).endRaidRoundFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar4 = (__this->fields).endRaidRoundFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar4,Method_UnityEngine_GameObject_GetComponent<EndRaidRoundFightScreen>__
                       );
    ppNVar5 = &(__this->fields).FFCLNFCCMKN;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fce8c;
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        }
        if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
            pNVar2 = *ppNVar5;
            if (pNVar2 != (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030fce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pNVar2->klass->vtable)._6_Init.methodPtr)
                        (pNVar2,HPACPFLKHPK,(pNVar2->klass->vtable)._6_Init.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_030fce8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OpenEndRaidFinalFightScreen(IGPDCHBJAPD HPACPFLKHPK)  [RVA 0x2FFCE90]
// Nekki.SF2.GUI.Fight.PreFight$$OpenEndRaidFinalFightScreen @ RVA 0x2FFCE90

void Nekki_SF2_GUI_Fight_PreFight__OpenEndRaidFinalFightScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *__this_00;
  Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o **ppNVar5;
  
  if ((DAT_04565af1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndRaidFinalFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af1 = 1;
  }
  __this_00 = (__this->fields).LJAILGNLPAB;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(__this_00,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields).endRaidFinalFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar4 = (__this->fields).endRaidFinalFightScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar4,Method_UnityEngine_GameObject_GetComponent<EndRaidFinalFightScreen>__
                       );
    ppNVar5 = &(__this->fields).GPFGIJLBJLK;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fd050;
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        }
        if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppNVar5 != (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
            pNVar2 = *ppNVar5;
            if (pNVar2 != (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030fd03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pNVar2->klass->vtable)._6_Init.methodPtr)
                        (pNVar2,HPACPFLKHPK,(pNVar2->klass->vtable)._6_Init.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_030fd050:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Reset()  [RVA 0x2FFD054]
// Nekki.SF2.GUI.Fight.PreFight$$Reset @ RVA 0x2FFD054

/* WARNING: Removing unreachable block (ram,0x030fd378) */
/* WARNING: Removing unreachable block (ram,0x030fd310) */

void Nekki_SF2_GUI_Fight_PreFight__Reset(Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar7;
  undefined8 *puVar8;
  Nekki_SF2_GUI_Fight_ViewerFight_o **ppNVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  Nekki_SF2_GUI_Fight_PauseScreen_o **ppNVar15;
  Nekki_SF2_GUI_Fight_ScreenFight_o **ppNVar16;
  Nekki_SF2_GUI_Fight_ScreenFight_o *x;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_02;
  
  if ((DAT_04565af2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_OnScreenStop__);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
    DAT_04565af2 = 1;
    method = extraout_x1;
  }
  ppNVar16 = &(__this->fields).LJAILGNLPAB;
  x = *ppNVar16;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (*ppNVar16 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fd370;
    __this_02 = ((*ppNVar16)->fields).OnStopScreen;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_02 == (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) goto LAB_030fd370;
    UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
               Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar5 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar5->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar10->vtable + *piVar13;
            goto LAB_030fd1dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_030fd1dc:
      uVar12 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_030fd304;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_030fd2dc;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_030fd2c4;
      }
      pSVar10 = pSVar5->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar3;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar10->vtable + (*piVar13 + 1);
            goto LAB_030fd23c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_030fd23c:
      __this_01 = (UnityEngine_Component_o *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    } while( true );
  }
LAB_030fd370:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_030fd2c4:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_030fd2f8;
    }
  }
LAB_030fd2dc:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_030fd2f8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_030fd304:
  ppNVar9 = &(__this->fields).FLKPJPEAJAJ;
  *ppNVar9 = (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0;
  thunk_FUN_01c20e04(ppNVar9,0);
  (__this->fields).LJAILGNLPAB = (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0;
  thunk_FUN_01c20e04(ppNVar16,0);
  ppNVar15 = &(__this->fields).IHNMJKLMFMA;
  *ppNVar15 = (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar15,0);
  return;
}


// ===== public void ViewerUpdateHotGroundTimer(int LFJGFLNMBMC, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x2FFD440]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerUpdateHotGroundTimer @ RVA 0x2FFD440

void Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t LFJGFLNMBMC,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565af3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af3 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__UpdateHotGroundTimer
                (pNVar2,LFJGFLNMBMC,HEHMPFLAEGE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateRound(int CJNHFNHJHPE, bool HOOGEGENGCG)  [RVA 0x2FFD4E0]
// Nekki.SF2.GUI.Fight.PreFight$$CreateRound @ RVA 0x2FFD4E0

void Nekki_SF2_GUI_Fight_PreFight__CreateRound
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t CJNHFNHJHPE,bool HOOGEGENGCG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar3;
  
  if ((DAT_04565af4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af4 = 1;
  }
  pNVar3 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).LJAILGNLPAB;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fd5b4;
    Nekki_SF2_GUI_Fight_ScreenFight__CreateRound(pNVar3,CJNHFNHJHPE,HOOGEGENGCG,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ViewerFight__Reset(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_030fd5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_TimeTotalRoundFrames()  [RVA 0x2FFD5B8]
// Nekki.SF2.GUI.Fight.PreFight$$get_TimeTotalRoundFrames @ RVA 0x2FFD5B8

int32_t Nekki_SF2_GUI_Fight_PreFight__get_TimeTotalRoundFrames
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565af5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af5 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      iVar2 = Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotalFrames(pNVar3,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}


// ===== public void ViewerStrike(ECENNHNBAME CAMAHOAFAPK, float LINBBAKAFCP, int JNFKICLFJMG, bool JHMMNIMBIKL, bool JFOKCHFLFJG, bool CPKEPNCILEN, bool JECKCMKCNCH, bool ABOGGPJGIAI)  [RVA 0x2FFD640]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerStrike @ RVA 0x2FFD640

void Nekki_SF2_GUI_Fight_PreFight__ViewerStrike
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,float LINBBAKAFCP,
               int32_t JNFKICLFJMG,bool JHMMNIMBIKL,bool JFOKCHFLFJG,bool CPKEPNCILEN,
               bool JECKCMKCNCH,bool ABOGGPJGIAI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565af6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af6 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__Strike
                (pNVar2,CAMAHOAFAPK,LINBBAKAFCP,JNFKICLFJMG,JHMMNIMBIKL,JFOKCHFLFJG,CPKEPNCILEN,
                 JECKCMKCNCH,ABOGGPJGIAI,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateVS(PJKHAJKEHEL OKBIKHHKOEN, List<PJKHAJKEHEL> DFGLEOANOFI, int FJJJGOHDLBH, bool BAADKMGHNAL, bool BLOEBCBBGBK, bool EOGKCNNHPFL, bool HIOHGCIKLNF)  [RVA 0x2FFD740]
// Nekki.SF2.GUI.Fight.PreFight$$CreateVS @ RVA 0x2FFD740

void Nekki_SF2_GUI_Fight_PreFight__CreateVS
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t FJJJGOHDLBH,
               bool BAADKMGHNAL,bool BLOEBCBBGBK,bool EOGKCNNHPFL,bool HIOHGCIKLNF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565af7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af7 = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateVS
                (pNVar2,OKBIKHHKOEN,DFGLEOANOFI,FJJJGOHDLBH,BAADKMGHNAL,BLOEBCBBGBK,EOGKCNNHPFL,
                 HIOHGCIKLNF,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateRingOut()  [RVA 0x2FFD82C]
// Nekki.SF2.GUI.Fight.PreFight$$CreateRingOut @ RVA 0x2FFD82C

void Nekki_SF2_GUI_Fight_PreFight__CreateRingOut
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565af8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af8 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateRingOut(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateYouLose()  [RVA 0x2FFD8B0]
// Nekki.SF2.GUI.Fight.PreFight$$CreateYouLose @ RVA 0x2FFD8B0

void Nekki_SF2_GUI_Fight_PreFight__CreateYouLose
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565af9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af9 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateYouLose(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateSkipRound()  [RVA 0x2FFD934]
// Nekki.SF2.GUI.Fight.PreFight$$CreateSkipRound @ RVA 0x2FFD934

void Nekki_SF2_GUI_Fight_PreFight__CreateSkipRound
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565afa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afa = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fd9ec;
    Nekki_SF2_GUI_Fight_ScreenFight__CreateSkipRound(pNVar2,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ViewerFight__Reset(pNVar3,(MethodInfo *)0x0);
    return;
  }
LAB_030fd9ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnScreenStop(JLBCMPFKHEI ACCIHBHMFPN)  [RVA 0x2FFD9F0]
// Nekki.SF2.GUI.Fight.PreFight$$OnScreenStop @ RVA 0x2FFD9F0

void Nekki_SF2_GUI_Fight_PreFight__OnScreenStop
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565afb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    DAT_04565afb = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fda98;
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(pNVar2,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).OnStopScreen;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,ACCIHBHMFPN,
               Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    return;
  }
LAB_030fda98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GOJLGHMMDBO GetStatistic(int CJNHFNHJHPE)  [RVA 0x2FFDA9C]
// Nekki.SF2.GUI.Fight.PreFight$$GetStatistic @ RVA 0x2FFDA9C

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_PreFight__GetStatistic
          (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o *pGVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565afc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afc = 1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      pGVar2 = Nekki_SF2_GUI_Fight_ViewerFight__GetStatistic(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      return pGVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (GOJLGHMMDBO_o *)0x0;
}


// ===== public void ClearInscription()  [RVA 0x2FFDB38]
// Nekki.SF2.GUI.Fight.PreFight$$ClearInscription @ RVA 0x2FFDB38

void Nekki_SF2_GUI_Fight_PreFight__ClearInscription
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565afd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afd = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__Clear(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int get_TimePassedFrames()  [RVA 0x2FFDBBC]
// Nekki.SF2.GUI.Fight.PreFight$$get_TimePassedFrames @ RVA 0x2FFDBBC

int32_t Nekki_SF2_GUI_Fight_PreFight__get_TimePassedFrames
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar4;
  
  if ((DAT_04565afe & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565afe = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  pNVar4 = (__this->fields).FLKPJPEAJAJ;
  if (pNVar4 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotalFrames(pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar4 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pNVar4->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
      return iVar2 - iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PauseScreen get_PauseScreen()  [RVA 0x2FFDC5C]
// Nekki.SF2.GUI.Fight.PreFight$$get_PauseScreen @ RVA 0x2FFDC5C

Nekki_SF2_GUI_Fight_PauseScreen_o *
Nekki_SF2_GUI_Fight_PreFight__get_PauseScreen
          (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  return (__this->fields).IHNMJKLMFMA;
}


// ===== public void CreatePointsTable(float OAGELANKMBH, float IOJNHKIPJOK, int NJBICBHLOMO, BGMKDONJFPI OEAIKLMHGOO, int FLHLGFGJDMH)  [RVA 0x2FFDC64]
// Nekki.SF2.GUI.Fight.PreFight$$CreatePointsTable @ RVA 0x2FFDC64

void Nekki_SF2_GUI_Fight_PreFight__CreatePointsTable
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,
               int32_t NJBICBHLOMO,int32_t OEAIKLMHGOO,int32_t FLHLGFGJDMH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565aff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565aff = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__CreatePointsTable
                (pNVar2,OAGELANKMBH,IOJNHKIPJOK,NJBICBHLOMO,OEAIKLMHGOO,FLHLGFGJDMH,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateFightRule()  [RVA 0x2FFDD34]
// Nekki.SF2.GUI.Fight.PreFight$$CreateFightRule @ RVA 0x2FFDD34

void Nekki_SF2_GUI_Fight_PreFight__CreateFightRule
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565b00 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b00 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateFightRule(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateWinner(bool MEDOMNAEFNH)  [RVA 0x2FFDDB8]
// Nekki.SF2.GUI.Fight.PreFight$$CreateWinner @ RVA 0x2FFDDB8

void Nekki_SF2_GUI_Fight_PreFight__CreateWinner
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool MEDOMNAEFNH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar3;
  
  if ((DAT_04565b01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b01 = 1;
  }
  pNVar3 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).LJAILGNLPAB;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fde98;
    Nekki_SF2_GUI_Fight_ScreenFight__CreateWinner(pNVar3,MEDOMNAEFNH,(MethodInfo *)0x0);
  }
  if (MEDOMNAEFNH) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FLKPJPEAJAJ;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) &&
         (__this_00 = Nekki_SF2_GUI_Fight_ViewerFight__GetScreenModel(pNVar2,0,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0)) {
        Nekki_SF2_GUI_Fight_ScreenModel__ShowPerfect(__this_00,(MethodInfo *)0x0);
        return;
      }
LAB_030fde98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public bool IsTimeOut()  [RVA 0x2FFDE9C]
// Nekki.SF2.GUI.Fight.PreFight$$IsTimeOut @ RVA 0x2FFDE9C

bool Nekki_SF2_GUI_Fight_PreFight__IsTimeOut
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565b02 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b02 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pNVar3->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void ViewerPauseVisible(bool CJNHFNHJHPE)  [RVA 0x2FFDF2C]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerPauseVisible @ RVA 0x2FFDF2C

void Nekki_SF2_GUI_Fight_PreFight__ViewerPauseVisible
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b03 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__PauseVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void ClosePauseScreen()  [RVA 0x2FFDFC4]
// Nekki.SF2.GUI.Fight.PreFight$$ClosePauseScreen @ RVA 0x2FFDFC4

void Nekki_SF2_GUI_Fight_PreFight__ClosePauseScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PauseScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  Nekki_SF2_GUI_Fight_PauseScreen_o *x;
  
  if ((DAT_04565b04 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b04 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).IHNMJKLMFMA;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 == (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0) goto LAB_030fe0a4;
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar2,0);
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
LAB_030fe0a4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound(pNVar3,(MethodInfo *)0x0);
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public ScreenFight get_ScreenFight()  [RVA 0x2FFE0A8]
// Nekki.SF2.GUI.Fight.PreFight$$get_ScreenFight @ RVA 0x2FFE0A8

Nekki_SF2_GUI_Fight_ScreenFight_o *
Nekki_SF2_GUI_Fight_PreFight__get_ScreenFight
          (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  return (__this->fields).LJAILGNLPAB;
}


// ===== public void OpenEndFightScreen(IGPDCHBJAPD HPACPFLKHPK)  [RVA 0x2FFE0B0]
// Nekki.SF2.GUI.Fight.PreFight$$OpenEndFightScreen @ RVA 0x2FFE0B0

void Nekki_SF2_GUI_Fight_PreFight__OpenEndFightScreen
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *__this_00;
  Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Fight_EndFightScreen_o *pNVar5;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Nekki_SF2_GUI_Fight_EndPvpFightScreen_o **ppNVar8;
  Nekki_SF2_GUI_Fight_EndFightScreen_o **ppNVar9;
  
  if ((DAT_04565b05 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndPvpFightScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b05 = 1;
  }
  __this_00 = (__this->fields).LJAILGNLPAB;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(__this_00,(MethodInfo *)0x0);
  }
  if (HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) goto LAB_030fe3cc;
  if ((HPACPFLKHPK->fields).ACCIHBHMFPN == 0x11) {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields).endPvpFightScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).endPvpFightScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pNVar2 = (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar7,Method_UnityEngine_GameObject_GetComponent<EndPvpFightScreen>__);
        ppNVar8 = &(__this->fields).LJEDFCFDKAE;
        *ppNVar8 = pNVar2;
        thunk_FUN_01c20e04(ppNVar8,pNVar2);
        if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fe3cc;
              pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            }
            if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar4,pUVar3,false,(MethodInfo *)0x0);
              if ((*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
                if (*ppNVar8 != (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *)0x0) {
                  Nekki_SF2_GUI_Fight_EndPvpFightScreen__Init
                            (*ppNVar8,HPACPFLKHPK,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
LAB_030fe3cc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields).endFightScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).endFightScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_Fight_EndFightScreen_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar7,Method_UnityEngine_GameObject_GetComponent<EndFightScreen>__);
        ppNVar9 = &(__this->fields).GOALBJHEANN;
        *ppNVar9 = pNVar5;
        thunk_FUN_01c20e04(ppNVar9,pNVar5);
        if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_030fe3cc;
              pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
            }
            if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Transform__SetParent(pUVar4,pUVar3,false,(MethodInfo *)0x0);
              if ((*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppNVar9,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
                if (*ppNVar9 != (Nekki_SF2_GUI_Fight_EndFightScreen_o *)0x0) {
                  Nekki_SF2_GUI_Fight_EndFightScreen__Init(*ppNVar9,HPACPFLKHPK,method_00);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_030fe3cc;
    }
  }
  return;
}


// ===== public void Init(AFFHKININGD FBFPLEFCDOK)  [RVA 0x2FFE3D0]
// Nekki.SF2.GUI.Fight.PreFight$$Init @ RVA 0x2FFE3D0

void Nekki_SF2_GUI_Fight_PreFight__Init
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method
               )

{
  MethodInfo *in_x3;
  
  (__this->fields).FBFPLEFCDOK = FBFPLEFCDOK;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Fight_PreFight__InitPreFight(__this,(GOJLGHMMDBO_o *)0x0,(GOJLGHMMDBO_o *)0x0,in_x3)
  ;
  return;
}


// ===== public void VisibleViewer(bool CJNHFNHJHPE)  [RVA 0x2FFCC34]
// Nekki.SF2.GUI.Fight.PreFight$$VisibleViewer @ RVA 0x2FFCC34

void Nekki_SF2_GUI_Fight_PreFight__VisibleViewer
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b06 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b06 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__SetVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetPause(bool CJNHFNHJHPE)  [RVA 0x2FFE3F4]
// Nekki.SF2.GUI.Fight.PreFight$$SetPause @ RVA 0x2FFE3F4

void Nekki_SF2_GUI_Fight_PreFight__SetPause
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565b07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b07 = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).FNHHIEKCLPI = CJNHFNHJHPE;
  }
  return;
}


// ===== public void ViewerPlay()  [RVA 0x2FFE47C]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerPlay @ RVA 0x2FFE47C

void Nekki_SF2_GUI_Fight_PreFight__ViewerPlay
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b08 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__Play(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int get_TimeLeft()  [RVA 0x2FFE500]
// Nekki.SF2.GUI.Fight.PreFight$$get_TimeLeft @ RVA 0x2FFE500

int32_t Nekki_SF2_GUI_Fight_PreFight__get_TimeLeft
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565b09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b09 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pNVar3->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}


// ===== public void UpdatePointsTable(int HLGODJGOMPL, int JJIMOBDENPB)  [RVA 0x2FFE58C]
// Nekki.SF2.GUI.Fight.PreFight$$UpdatePointsTable @ RVA 0x2FFE58C

void Nekki_SF2_GUI_Fight_PreFight__UpdatePointsTable
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t HLGODJGOMPL,int32_t JJIMOBDENPB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b0a = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__UpdatePointsTable
                (pNVar2,HLGODJGOMPL,JJIMOBDENPB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void OpenPauseScreen()  [RVA 0x2FFE62C]
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


// ===== public int get_TimeLeftFrames()  [RVA 0x2FFE8B8]
// Nekki.SF2.GUI.Fight.PreFight$$get_TimeLeftFrames @ RVA 0x2FFE8B8

int32_t Nekki_SF2_GUI_Fight_PreFight__get_TimeLeftFrames
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04565b0c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b0c = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pNVar3->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}


// ===== private void MGOILECPAFE()  [RVA 0x2FFE944]
// Nekki.SF2.GUI.Fight.PreFight$$MGOILECPAFE @ RVA 0x2FFE944

void Nekki_SF2_GUI_Fight_PreFight__MGOILECPAFE
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b0d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    DAT_04565b0d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).OnButtonClick;
  if (__this_00 != (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,1,
               Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x2FFE998]
// Nekki.SF2.GUI.Fight.PreFight$$.ctor @ RVA 0x2FFE998

void Nekki_SF2_GUI_Fight_PreFight___ctor(Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o **ppNVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04565b0e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04565b0e = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields).OnButtonClick;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(__this_01,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnStopScreen;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public JLBCMPFKHEI get_Type()  [RVA 0x2FFEAAC]
// Nekki.SF2.GUI.Fight.PreFight$$get_Type @ RVA 0x2FFEAAC

int32_t Nekki_SF2_GUI_Fight_PreFight__get_Type
                  (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar3;
  
  if ((DAT_04565b0f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b0f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).LJAILGNLPAB;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).Type;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// ===== public void Render()  [RVA 0x2FFEB2C]
// Nekki.SF2.GUI.Fight.PreFight$$Render @ RVA 0x2FFEB2C

void Nekki_SF2_GUI_Fight_PreFight__Render(Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b10 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b10 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__Render(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetVisible(bool CJNHFNHJHPE)  [RVA 0x2FFEBB0]
// Nekki.SF2.GUI.Fight.PreFight$$SetVisible @ RVA 0x2FFEBB0

void Nekki_SF2_GUI_Fight_PreFight__SetVisible
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ViewerFight get_ViewerFight()  [RVA 0x2FFEBD8]
// Nekki.SF2.GUI.Fight.PreFight$$get_ViewerFight @ RVA 0x2FFEBD8

Nekki_SF2_GUI_Fight_ViewerFight_o *
Nekki_SF2_GUI_Fight_PreFight__get_ViewerFight
          (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  return (__this->fields).FLKPJPEAJAJ;
}


// ===== public void RenderComboModel()  [RVA 0x2FFEBE0]
// Nekki.SF2.GUI.Fight.PreFight$$RenderComboModel @ RVA 0x2FFEBE0

void Nekki_SF2_GUI_Fight_PreFight__RenderComboModel
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b11 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__RenderComboModel(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void CreateTimesUp()  [RVA 0x2FFEC64]
// Nekki.SF2.GUI.Fight.PreFight$$CreateTimesUp @ RVA 0x2FFEC64

void Nekki_SF2_GUI_Fight_PreFight__CreateTimesUp
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565b12 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b12 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateTimesUp(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void LOPCEFIAKHF(object IMMNELPBGIF)  [RVA 0x2FFECE8]
// Nekki.SF2.GUI.Fight.PreFight$$LOPCEFIAKHF @ RVA 0x2FFECE8

void Nekki_SF2_GUI_Fight_PreFight__LOPCEFIAKHF
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t *piVar1;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  
  if ((DAT_04565b13 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    DAT_04565b13 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class !=
        (Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c();
    __this_00 = (__this->fields).OnButtonClick;
    if (__this_00 != (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,*piVar1,
                 Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ViewerUpdateVictorys()  [RVA 0x2FFED80]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerUpdateVictorys @ RVA 0x2FFED80

void Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateVictorys
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b14 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b14 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__UpdateVictorys(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void RemovePointsTable()  [RVA 0x2FFEE04]
// Nekki.SF2.GUI.Fight.PreFight$$RemovePointsTable @ RVA 0x2FFEE04

void Nekki_SF2_GUI_Fight_PreFight__RemovePointsTable
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b15 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b15 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__RemovePointsTable(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void NJPEJIFFNHN()  [RVA 0x2FFEE88]
// Nekki.SF2.GUI.Fight.PreFight$$NJPEJIFFNHN @ RVA 0x2FFEE88

void Nekki_SF2_GUI_Fight_PreFight__NJPEJIFFNHN
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b16 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    DAT_04565b16 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).OnButtonClick;
  if (__this_00 != (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void ViewerInit(JIMKCICMMIL ODIAFMNGOLA, PJKHAJKEHEL CGEHDIHFMEE, PJKHAJKEHEL EOBHGAMOGJF, bool BFANHMIHMGA = True)  [RVA 0x2FFEEDC]
// Nekki.SF2.GUI.Fight.PreFight$$ViewerInit @ RVA 0x2FFEEDC

void Nekki_SF2_GUI_Fight_PreFight__ViewerInit
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,JIMKCICMMIL_o *ODIAFMNGOLA,
               PJKHAJKEHEL_o *CGEHDIHFMEE,PJKHAJKEHEL_o *EOBHGAMOGJF,bool BFANHMIHMGA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar2;
  
  if ((DAT_04565b17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b17 = 1;
  }
  pNVar2 = (__this->fields).FLKPJPEAJAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLKPJPEAJAJ;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ViewerFight__Init
                (pNVar2,ODIAFMNGOLA,CGEHDIHFMEE,EOBHGAMOGJF,BFANHMIHMGA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

