// TypeDefIndex 3468
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidPlayerScreen : MonoBehaviour, JEFOMACMAAD
// Fields:
//   private LabelButton _back; // 0x20
//   private PlayerInfoHeaderView _header; // 0x28
//   private GeneralPlayerInfoView _generalPlayerInfoView; // 0x30
//   private TopMedalsInfoView _topMedalsInfoView; // 0x38
//   private RaidPlayerEquipmentView _playerEquipmentInfoView; // 0x40
//   private List<ResolutionButton> _tabButtons; // 0x48
//   private GameObject _hintPrefab; // 0x50
//   private ModelContainer _modelContainerPrefab; // 0x58
//   private ModelContainer GHNDNPOHEFO; // 0x60
//   private PJKHAJKEHEL HMNHABIBKIK; // 0x68
//   private FEKEAPCCOOB HIOOMAJPEJP; // 0x70
//   private bool OAFGKHIPFOF; // 0x78
//   private Action DKPPMJCLNAB; // 0x80
//   private EOLFEKNCPLM MLAAJICBOAD; // 0x88

// ===== private void EBBMADMCCCG(int DPJIDNBJIBG)  [RVA 0x3569D60]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$EBBMADMCCCG @ RVA 0x3569D60

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__EBBMADMCCCG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3569D64]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$.ctor @ RVA 0x3569D64

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04568c1c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_KIBNOJDJPDF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo);
    DAT_04568c1c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo->static_fields->__9__32_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_<>c_TypeInfo->static_fields->__9__32_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0) {
    ppSVar1 = &(__this->fields).DKPPMJCLNAB;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnHide()  [RVA 0x3569E5C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$OnHide @ RVA 0x3569E5C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OnHide
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c1d & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04568c1d = 1;
    method = extraout_x1;
  }
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo,method);
  }
  MDFGJKBMECA__OIECFKNAJEA((MethodInfo *)0x0);
  return;
}


// ===== private void IDLCAAOONHG()  [RVA 0x3569EAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$IDLCAAOONHG @ RVA 0x3569EAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IDLCAAOONHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568c1e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_OFAOOGMDICD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_11956/*"Settings_Back"*/);
    DAT_04568c1e = 1;
  }
  pLVar1 = (__this->fields)._back;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar1,StringLiteral_11956/*"Settings_Back"*/,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._back;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,0,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._back;
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__RemoveAllEventListener((SFButton_o *)pLVar1,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._back;
        if (pLVar1 != (LabelButton_o *)0x0) {
          __this_00 = (UnityEngine_Events_UnityEvent_o *)
                      (pLVar1->fields).super.super.super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MJCLLBDDLDL()  [RVA 0x3569F88]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$MJCLLBDDLDL @ RVA 0x3569F88

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__MJCLLBDDLDL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_ModelContainer_o **ppNVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *x;
  
  if ((DAT_04568c1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c1f = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).GHNDNPOHEFO;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void LOCGOCHBNFM()  [RVA 0x356A028]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$LOCGOCHBNFM @ RVA 0x356A028

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__LOCGOCHBNFM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_00;
  UnityEngine_Transform_o *parent;
  HJNDPNIMBBG_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_ModelContainer_o **ppNVar4;
  OLKKAIFGGAK_o *__this_02;
  PJKHAJKEHEL_o **ppPVar5;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568c20 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ModelContainer>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    DAT_04568c20 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__MJCLLBDDLDL(__this,method);
  pPVar1 = PEEIMHCMDND__BHNOCDOCAJD((__this->fields).MLAAJICBOAD,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).HMNHABIBKIK;
  *ppPVar5 = pPVar1;
  thunk_FUN_01c20e04(ppPVar5,pPVar1);
  if (*ppPVar5 == (PJKHAJKEHEL_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._modelContainerPrefab;
  if (pNVar2 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      pUVar3 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar3,parent,
                          Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pNVar2 = (Nekki_SF2_Core_Fights_ModelContainer_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar3,Method_UnityEngine_GameObject_GetComponent<ModelContainer>__);
        ppNVar4 = &(__this->fields).GHNDNPOHEFO;
        *ppNVar4 = pNVar2;
        thunk_FUN_01c20e04(ppNVar4,pNVar2);
        if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
          Nekki_SF2_Core_Fights_ModelContainer__Init(*ppNVar4,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_Parameters
                      (*ppNVar4,*ppPVar5,4,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
            if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
              Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition(*ppNVar4,(MethodInfo *)0x0);
              if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
                __this_02 = ((*ppNVar4)->fields).MAODNBMLDEG;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7e == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7e = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
                if ((__this_01 != (HJNDPNIMBBG_o *)0x0) &&
                   (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_01,(MethodInfo *)0x0),
                   __this_02 != (OLKKAIFGGAK_o *)0x0)) {
                  OLKKAIFGGAK__HLCMLOBHLDA(__this_02,EFJKPCADGJH,false,(MethodInfo *)0x0);
                  return;
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


// ===== private void OFAOOGMDICD()  [RVA 0x356A230]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$OFAOOGMDICD @ RVA 0x356A230

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OFAOOGMDICD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).DKPPMJCLNAB;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    JJPNLEPEAFM__HMBOKGADCGK((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private TabView NBMBGKIMBBE(RaidPlayerScreen.OFPFPKMLPGD PAPNCMCIJNN)  [RVA 0x356A25C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$NBMBGKIMBBE @ RVA 0x356A25C

TabView_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,int32_t PAPNCMCIJNN,
          MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *pNVar1;
  PJKHAJKEHEL_o *pPVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **ppNVar5;
  
  if (PAPNCMCIJNN == 3) {
    ppNVar5 = &(__this->fields)._topMedalsInfoView;
    if (*ppNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)0x0) goto LAB_0366a30c;
    Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__Init
              (*ppNVar5,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0);
  }
  else {
    if (PAPNCMCIJNN == 1) {
      ppNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **)
                &(__this->fields)._playerEquipmentInfoView;
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)*ppNVar5;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) {
LAB_0366a30c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pNVar1->klass->vtable)._20_Init.methodPtr)
                (pNVar1,(__this->fields).MLAAJICBOAD,(pNVar1->klass->vtable)._20_Init.method);
      pNVar1 = (__this->fields)._playerEquipmentInfoView;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) goto LAB_0366a30c;
      pPVar2 = (__this->fields).HMNHABIBKIK;
      pIVar4 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _19_UpdateContent.methodPtr;
      pMVar3 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _19_UpdateContent.method;
    }
    else {
      if (PAPNCMCIJNN != 0) {
        return (TabView_o *)0x0;
      }
      ppNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o **)
                &(__this->fields)._generalPlayerInfoView;
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)*ppNVar5;
      if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *)0x0) goto LAB_0366a30c;
      pPVar2 = (PJKHAJKEHEL_o *)(__this->fields).MLAAJICBOAD;
      pIVar4 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _20_Init.methodPtr;
      pMVar3 = (((Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_c *)pNVar1->klass)->vtable).
               _20_Init.method;
    }
    (*pIVar4)(pNVar1,pPVar2,pMVar3);
  }
  return (TabView_o *)*ppNVar5;
}


// ===== private void OnDestroy()  [RVA 0x356A310]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$OnDestroy @ RVA 0x356A310

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c1d & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04568c1d = 1;
    method = extraout_x1;
  }
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo,method);
  }
  MDFGJKBMECA__OIECFKNAJEA((MethodInfo *)0x0);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x356A314]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$RandomizeObscuredVars @ RVA 0x356A314

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__RandomizeObscuredVars
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  __this_00 = (__this->fields).GHNDNPOHEFO;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void BBAAIOMLBKH(int DPJIDNBJIBG)  [RVA 0x356A328]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$BBAAIOMLBKH @ RVA 0x356A328

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__BBAAIOMLBKH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== public void remove_OnClose(Action CJNHFNHJHPE)  [RVA 0x356A32C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$remove_OnClose @ RVA 0x356A32C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__remove_OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568c21 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568c21 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void GKNMDAMGCJG(int DPJIDNBJIBG)  [RVA 0x356A3C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$GKNMDAMGCJG @ RVA 0x356A3C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__GKNMDAMGCJG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== private void AGOFLEMMFNJ(Button PAOPMKEAGBI, TabView EOACICBFBAM, int ACMHJAJPANF, Button BECCOGAMKJL, TabView FNCBJFJMIPB, int OGPGLGPMEPD)  [RVA 0x356A3CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$AGOFLEMMFNJ @ RVA 0x356A3CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__AGOFLEMMFNJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,
               UnityEngine_UI_Button_o *PAOPMKEAGBI,TabView_o *EOACICBFBAM,int32_t ACMHJAJPANF,
               UnityEngine_UI_Button_o *BECCOGAMKJL,TabView_o *FNCBJFJMIPB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  UnityEngine_Transform_o *pUVar3;
  
  if ((DAT_04568c22 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,PAOPMKEAGBI,EOACICBFBAM,ACMHJAJPANF,BECCOGAMKJL,
                 FNCBJFJMIPB,OGPGLGPMEPD);
    FUN_01bab630(&StringLiteral_18775/*"hintInDevelopment"*/);
    DAT_04568c22 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)FNCBJFJMIPB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Transform_o *)(ulong)bVar1;
  if (bVar1) {
    DKIDCBPNMPD = (__this->fields)._hintPrefab;
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = HOKHHGFLMNA;
    if ((BECCOGAMKJL != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)BECCOGAMKJL,(MethodInfo *)0x0),
       pUVar3 = (UnityEngine_Transform_o *)0x0, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      HHPABFGHALF = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)0x0;
      if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                  (__this_01,StringLiteral_18775/*"hintInDevelopment"*/,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((__this->fields).OAFGKHIPFOF == false) {
      uVar2 = EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)(ulong)uVar2;
    }
    if (BECCOGAMKJL != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)BECCOGAMKJL,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)PAOPMKEAGBI,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)(ulong)bVar1;
      if (!bVar1) {
        return;
      }
      if (PAOPMKEAGBI != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)PAOPMKEAGBI,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pUVar3);
}


// ===== private ResolutionButton JDGPBNKJFBK(ResolutionButton BECCOGAMKJL, string DDKFBMKMBOF)  [RVA 0x356A540]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$JDGPBNKJFBK @ RVA 0x356A540

Nekki_SF2_GUI_ResolutionButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,
          Nekki_SF2_GUI_ResolutionButton_o *BECCOGAMKJL,System_String_o *DDKFBMKMBOF,
          MethodInfo *method)

{
  System_String_o *HCAAAAMDCNO;
  System_String_o *HCAAAAMDCNO_00;
  System_String_o *pSVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  if ((DAT_04568c23 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15915/*"_2"*/);
    FUN_01bab630(&StringLiteral_15912/*"_0"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_15914/*"_1"*/);
    FUN_01bab630(&StringLiteral_10864/*"RaidInfoIcons."*/);
    DAT_04568c23 = 1;
  }
  pSVar1 = StringLiteral_10864/*"RaidInfoIcons."*/;
  HCAAAAMDCNO = System_String__Concat
                          (StringLiteral_10864/*"RaidInfoIcons."*/,DDKFBMKMBOF,StringLiteral_15912/*"_0"*/,(MethodInfo *)0x0);
  HCAAAAMDCNO_00 = System_String__Concat(pSVar1,DDKFBMKMBOF,StringLiteral_15914/*"_1"*/,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,DDKFBMKMBOF,StringLiteral_15915/*"_2"*/,(MethodInfo *)0x0);
  if (BECCOGAMKJL != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              (BECCOGAMKJL,StringLiteral_14092/*"UI/Atlases/"*/,HCAAAAMDCNO,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (BECCOGAMKJL,StringLiteral_14092/*"UI/Atlases/"*/,HCAAAAMDCNO_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (BECCOGAMKJL,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (BECCOGAMKJL,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)BECCOGAMKJL,true,(MethodInfo *)0x0);
    __this_00 = (BECCOGAMKJL->fields).super.super.m_OnClick;
    if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      return BECCOGAMKJL;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMGIKOELJFM()  [RVA 0x356A6AC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$IMGIKOELJFM @ RVA 0x356A6AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IMGIKOELJFM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  int32_t iVar3;
  FEKEAPCCOOB_o *pFVar4;
  System_Collections_Generic_List_ResolutionButton__o *pSVar5;
  UnityEngine_UI_Button_o *pUVar6;
  TabView_o *pTVar7;
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *pNVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  VirtualInvokeData *pVVar11;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *pMVar12;
  long lVar13;
  Il2CppClass *pIVar14;
  ulong uVar15;
  int32_t *piVar16;
  FEKEAPCCOOB_o **ppFVar17;
  int DPJIDNBJIBG;
  undefined8 uVar18;
  
  if ((DAT_04568c24 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FEKEAPCCOOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
    FUN_01bab630(&StringLiteral_21395/*"tab_stat4"*/);
    FUN_01bab630(&StringLiteral_18775/*"hintInDevelopment"*/);
    FUN_01bab630(&StringLiteral_21393/*"tab_stat2"*/);
    FUN_01bab630(&StringLiteral_21396/*"tab_stat5"*/);
    FUN_01bab630(&StringLiteral_21392/*"tab_stat1"*/);
    FUN_01bab630(&StringLiteral_21394/*"tab_stat3"*/);
    DAT_04568c24 = 1;
    method = extraout_x1;
  }
  pFVar4 = (FEKEAPCCOOB_o *)thunk_FUN_01bda818(FEKEAPCCOOB_TypeInfo,method);
  FEKEAPCCOOB___ctor(pFVar4,(MethodInfo *)0x0);
  ppFVar17 = &(__this->fields).HIOOMAJPEJP;
  *ppFVar17 = pFVar4;
  thunk_FUN_01c20e04(ppFVar17,pFVar4);
  if (*ppFVar17 != (FEKEAPCCOOB_o *)0x0) {
    FEKEAPCCOOB__GIENGNEGHPJ(*ppFVar17,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._tabButtons;
    if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
      pFVar4 = (__this->fields).HIOOMAJPEJP;
      pUVar6 = (UnityEngine_UI_Button_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
      pMVar12 = StringLiteral_21392/*"tab_stat1"*/;
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                 (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,(System_String_o *)StringLiteral_21392/*"tab_stat1"*/,
                 in_x3);
      pTVar7 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE(__this,1,pMVar12);
      if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,pTVar7,(MethodInfo *)0x0);
        pSVar5 = (__this->fields)._tabButtons;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
          pFVar4 = (__this->fields).HIOOMAJPEJP;
          pUVar6 = (UnityEngine_UI_Button_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,1,
                              Method_System_Collections_Generic_List<ResolutionButton>_get_Item__);
          Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                     (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21393/*"tab_stat2"*/,pMVar12);
          pNVar8 = (__this->fields)._generalPlayerInfoView;
          if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *)0x0) {
            (*(pNVar8->klass->vtable)._20_Init.methodPtr)
                      (pNVar8,(__this->fields).MLAAJICBOAD,(pNVar8->klass->vtable)._20_Init.method);
            if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
              pMVar12 = (MethodInfo *)0x0;
              FEKEAPCCOOB__GDCPIEANEJF
                        (pFVar4,pUVar6,(TabView_o *)(__this->fields)._generalPlayerInfoView,
                         (MethodInfo *)0x0);
              pSVar5 = (__this->fields)._tabButtons;
              if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                pFVar4 = (__this->fields).HIOOMAJPEJP;
                pUVar6 = (UnityEngine_UI_Button_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar5,2,
                                    Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                   );
                Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                          ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                           (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21394/*"tab_stat3"*/,pMVar12);
                if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                  pMVar12 = (MethodInfo *)0x0;
                  FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,(TabView_o *)0x0,(MethodInfo *)0x0);
                  pSVar5 = (__this->fields)._tabButtons;
                  if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                    pFVar4 = (__this->fields).HIOOMAJPEJP;
                    pUVar6 = (UnityEngine_UI_Button_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar5,3,
                                        Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                       );
                    method_00 = StringLiteral_21395/*"tab_stat4"*/;
                    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                              ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                               (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,
                               (System_String_o *)StringLiteral_21395/*"tab_stat4"*/,pMVar12);
                    pTVar7 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__NBMBGKIMBBE
                                       (__this,3,method_00);
                    if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                      pMVar12 = (MethodInfo *)0x0;
                      FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,pTVar7,(MethodInfo *)0x0);
                      pSVar5 = (__this->fields)._tabButtons;
                      if (pSVar5 != (System_Collections_Generic_List_ResolutionButton__o *)0x0) {
                        pFVar4 = (__this->fields).HIOOMAJPEJP;
                        pUVar6 = (UnityEngine_UI_Button_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar5,4,
                                            Method_System_Collections_Generic_List<ResolutionButton>_get_Item__
                                           );
                        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
                                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)pUVar6,
                                   (Nekki_SF2_GUI_ResolutionButton_o *)pUVar6,StringLiteral_21396/*"tab_stat5"*/,
                                   pMVar12);
                        if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                          FEKEAPCCOOB__GDCPIEANEJF(pFVar4,pUVar6,(TabView_o *)0x0,(MethodInfo *)0x0)
                          ;
                          if (*ppFVar17 != (FEKEAPCCOOB_o *)0x0) {
                            iVar3 = FEKEAPCCOOB__KPOBFGCNFAG(*ppFVar17,(MethodInfo *)0x0);
                            if (0 < iVar3) {
                              DPJIDNBJIBG = 0;
                              do {
                                pFVar4 = *ppFVar17;
                                pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                                   (
                                                  Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__
                                                  );
                                lVar10 = Method_System_Array_Empty<string>__;
                                lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                                if (lVar13 == 0) {
                                  FUN_01b8167c(Method_System_Array_Empty<string>__);
                                  lVar13 = *(long *)(lVar10 + 0x38);
                                }
                                lVar13 = *(long *)(lVar13 + 0x10);
                                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                                  lVar13 = FUN_01b81620();
                                }
                                if (*(int *)(lVar13 + 0xe0) == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                                  lVar10 = FUN_01b81620();
                                }
                                uVar2 = StringLiteral_18775/*"hintInDevelopment"*/;
                                if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0366aac4;
                                pIVar14 = pIVar9->klass;
                                uVar18 = **(undefined8 **)(lVar10 + 0xb8);
                                uVar1._0_1_ = (pIVar14->_2).rank;
                                uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
                                uVar15 = (ulong)uVar1;
                                if (uVar15 != 0) {
                                  piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
                                  do {
                                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->
                                        interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                                      pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
                                      goto LAB_0366aa48;
                                    }
                                    uVar15 = uVar15 - 1;
                                    piVar16 = piVar16 + 4;
                                  } while (uVar15 != 0);
                                }
                                pVVar11 = (VirtualInvokeData *)
                                          FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0366aa48:
                                EHNFGMGKCHO = (System_String_o *)
                                              (*pVVar11->methodPtr)
                                                        (pIVar9,uVar2,uVar18,pVVar11->method);
                                if (pFVar4 == (FEKEAPCCOOB_o *)0x0) goto LAB_0366aac4;
                                FEKEAPCCOOB__KPEEOJBFOCH
                                          (pFVar4,DPJIDNBJIBG,EHNFGMGKCHO,(MethodInfo *)0x0);
                                DPJIDNBJIBG = DPJIDNBJIBG + 1;
                              } while (DPJIDNBJIBG != iVar3);
                            }
                            pFVar4 = (__this->fields).HIOOMAJPEJP;
                            (__this->fields).OAFGKHIPFOF = true;
                            if (pFVar4 != (FEKEAPCCOOB_o *)0x0) {
                              FEKEAPCCOOB__AAOLKEFFIIN(pFVar4,0,(MethodInfo *)0x0);
                              (__this->fields).OAFGKHIPFOF = false;
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
    }
  }
LAB_0366aac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x356AAC8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$Init @ RVA 0x356AAC8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  EOLFEKNCPLM_o *ACNOGKFFDEG;
  EOLFEKNCPLM_o **ppEVar2;
  
  ppEVar2 = &(__this->fields).MLAAJICBOAD;
  ACNOGKFFDEG = *ppEVar2;
  *ppEVar2 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar2);
  __this_00 = (__this->fields)._header;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__Init(__this_00,*ppEVar2,(MethodInfo *)0x0);
    bVar1 = PEEIMHCMDND__FJIPCBOKHFC(*ppEVar2,ACNOGKFFDEG,(MethodInfo *)0x0);
    method_01 = method_00;
    if (bVar1) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__LOCGOCHBNFM(__this,method_00);
      method_01 = extraout_x1;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IDLCAAOONHG(__this,method_01);
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IMGIKOELJFM(__this,method_02);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnClose(Action CJNHFNHJHPE)  [RVA 0x356AB34]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$add_OnClose @ RVA 0x356AB34

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__add_OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568c25 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568c25 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

