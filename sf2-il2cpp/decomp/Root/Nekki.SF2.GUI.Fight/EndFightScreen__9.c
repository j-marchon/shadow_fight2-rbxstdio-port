// TypeDefIndex 9
// Namespace: Nekki.SF2.GUI.Fight
// public class EndFightScreen : MonoBehaviour, HAFLPBGEGCI
// Fields:
//   private GameObject _endFightContentPrefab; // 0x20
//   private GameObject _resistanceContentPrefab; // 0x28
//   private GameObject _forgeMaterialsContentPrefab; // 0x30
//   private ResolutionImage _background; // 0x38
//   private Transform _content; // 0x40
//   private ResolutionImage _resultHeader; // 0x48
//   private Button _animationFinishButton; // 0x50
//   private GameObject _contentLayout; // 0x58
//   private IGPDCHBJAPD CIKGADOJJMG; // 0x60
//   private EndFightContent DBOLEPNBFAD; // 0x68
//   private ResistanceContent EHKAIEBMIFA; // 0x70
//   private ForgeMaterialsContent HABFEMIFKEL; // 0x78
//   private bool IJINDHBBABM; // 0x80
//   private bool FPLAPLIHEGF; // 0x81
//   private bool LDLILPHECLE; // 0x82
//   private List<IGPDCHBJAPD.DHAPBDACLMI> INIAKIIBBHK; // 0x88
//   private List<IGPDCHBJAPD.AKGCHFPLJEC> DIELINNGEBJ; // 0x90
//   private MFFKCPDBFPG OFLMHJHPFJM; // 0x98
//   private const string FCFAIOFPLCO = "FightUI.Label_Win";
//   private const string NCALBKMKDED = "FightUI.Label_Lose";
//   private const string JOJONMOKJOP = "FightUI.Label_Timesup";

// ===== private void Awake()  [RVA 0x2FEF218]
// Nekki.SF2.GUI.Fight.EndFightScreen$$Awake @ RVA 0x2FEF218

void Nekki_SF2_GUI_Fight_EndFightScreen__Awake
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool PKPDECFBAKK(FCJBEKHDLAF MHOFCOHFCGL)  [RVA 0x2FEF240]
// Nekki.SF2.GUI.Fight.EndFightScreen$$PKPDECFBAKK @ RVA 0x2FEF240

bool Nekki_SF2_GUI_Fight_EndFightScreen__PKPDECFBAKK
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,FCJBEKHDLAF_o *MHOFCOHFCGL,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  LPAPAMPGDFN_o *__this_00;
  IGPDCHBJAPD_o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565a56 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565a56 = 1;
  }
  if (MHOFCOHFCGL != (FCJBEKHDLAF_o *)0x0) {
    iVar2 = FCJBEKHDLAF__IHMLDBDLJON(MHOFCOHFCGL,(MethodInfo *)0x0);
    if (iVar2 == 5) {
      return false;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar3->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
      bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_01 = (__this->fields).CIKGADOJJMG;
      if (__this_01 != (IGPDCHBJAPD_o *)0x0) {
        bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_01,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NBLLFEACOJK()  [RVA 0x2FEF324]
// Nekki.SF2.GUI.Fight.EndFightScreen$$NBLLFEACOJK @ RVA 0x2FEF324

void Nekki_SF2_GUI_Fight_EndFightScreen__NBLLFEACOJK
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *pNVar2;
  System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o **ppSVar3;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o **ppNVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar7;
  System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *match;
  
  if ((DAT_04565a57 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ForgeMaterialsContent>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_FindAll__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_<>c_NGIEDLBLNEJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565a57 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).FPLAPLIHEGF != false) {
    (__this->fields).FPLAPLIHEGF = false;
    pUVar4 = (__this->fields)._forgeMaterialsContentPrefab;
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
      pNVar2 = (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar4,Method_UnityEngine_GameObject_GetComponent<ForgeMaterialsContent>__
                         );
      ppNVar5 = &(__this->fields).HABFEMIFKEL;
      *ppNVar5 = pNVar2;
      thunk_FUN_01c20e04(ppNVar5,pNVar2);
      pSVar7 = (__this->fields).DIELINNGEBJ;
      if ((Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields->__9__23_0;
      if (match == (System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_IGPDCHBJAPD_AKGCHFPLJEC__o *)
                thunk_FUN_01bda818(System_Predicate<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields->__9__23_0;
        *ppSVar3 = match;
        thunk_FUN_01c20e04(ppSVar3,match);
      }
      if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
        pSVar7 = (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar7,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_FindAll__
                           );
        if (*ppNVar5 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
          Nekki_SF2_GUI_Fight_ForgeMaterialsContent__Init(*ppNVar5,pSVar7,(MethodInfo *)0x0);
          if (*ppNVar5 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
            __this_00 = ((*ppNVar5)->fields).CloseEvent;
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
  return;
}


// ===== public void Init(IGPDCHBJAPD PNPKEKHEMCD)  [RVA 0x2FEF780]
// Nekki.SF2.GUI.Fight.EndFightScreen$$Init @ RVA 0x2FEF780

void Nekki_SF2_GUI_Fight_EndFightScreen__Init
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar5;
  IGPDCHBJAPD_o *pIVar6;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar7;
  IGPDCHBJAPD_o **ppIVar8;
  MFFKCPDBFPG_o **ppMVar9;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o **ppSVar10;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar11;
  UnityEngine_Color_o endValue;
  
  if ((DAT_04565a58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6364/*"FightUI.Label_Lose"*/);
    FUN_01bab630(&StringLiteral_6365/*"FightUI.Label_Timesup"*/);
    FUN_01bab630(&StringLiteral_6366/*"FightUI.Label_Win"*/);
    DAT_04565a58 = 1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__PLAIIFOBHLP(__this,false,method);
  ppIVar8 = &(__this->fields).CIKGADOJJMG;
  *ppIVar8 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar8,PNPKEKHEMCD);
  pNVar11 = (__this->fields)._resultHeader;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (*ppIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_030ef980;
    bVar3 = IGPDCHBJAPD__DONKDCJLBPN(*ppIVar8,(MethodInfo *)0x0);
    if (*ppIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_030ef980;
    bVar4 = IGPDCHBJAPD__GCJHFPGABKL(*ppIVar8,(MethodInfo *)0x0);
    pNVar11 = (__this->fields)._resultHeader;
    if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_030ef980;
    puVar1 = &StringLiteral_6365/*"FightUI.Label_Timesup"*/;
    if (!bVar4) {
      puVar1 = &StringLiteral_6364/*"FightUI.Label_Lose"*/;
    }
    puVar2 = &StringLiteral_6366/*"FightUI.Label_Win"*/;
    if (!bVar3) {
      puVar2 = puVar1;
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar11,(System_String_o *)*puVar2,(MethodInfo *)0x0);
    pNVar11 = (__this->fields)._resultHeader;
    if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_030ef980;
    (*(pNVar11->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar11,(pNVar11->klass->vtable)._45_SetNativeSize.method);
  }
  if ((*ppIVar8 != (IGPDCHBJAPD_o *)0x0) &&
     (pIVar5 = ((*ppIVar8)->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
    ppMVar9 = &(__this->fields).OFLMHJHPFJM;
    *ppMVar9 = (pIVar5->fields).GPDMCLBBPAD;
    thunk_FUN_01c20e04(ppMVar9);
    pIVar6 = (__this->fields).CIKGADOJJMG;
    if ((pIVar6 != (IGPDCHBJAPD_o *)0x0) &&
       (pIVar5 = (pIVar6->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
      ppSVar10 = &(__this->fields).INIAKIIBBHK;
      *ppSVar10 = (pIVar5->fields).OJFMFMHCPOA;
      thunk_FUN_01c20e04(ppSVar10);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if ((pIVar6 != (IGPDCHBJAPD_o *)0x0) &&
         (pIVar5 = (pIVar6->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
        (__this->fields).DIELINNGEBJ = (pIVar5->fields).GMCEHJAIFBJ;
        thunk_FUN_01c20e04();
        bVar3 = Nekki_SF2_GUI_Fight_EndFightScreen__CBNCGMBFHLN(__this,method_00);
        pSVar7 = (__this->fields).INIAKIIBBHK;
        (__this->fields).FPLAPLIHEGF = bVar3;
        (__this->fields).LDLILPHECLE = true;
        if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
          (__this->fields).IJINDHBBABM = 0 < (pSVar7->fields)._size;
          endValue.fields.b = 1.0;
          endValue.fields.a = 1.0;
          endValue.fields.r = 1.0;
          endValue.fields.g = 1.0;
          DG_Tweening_DOTweenModuleUI__DOColor
                    ((UnityEngine_UI_Image_o *)(__this->fields)._background,endValue,1.0,
                     (MethodInfo *)0x0);
          Nekki_SF2_GUI_Fight_EndFightScreen__CCLILNDOHAB(__this,method_01);
          return;
        }
      }
    }
  }
LAB_030ef980:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIDLDGJLALI()  [RVA 0x2FEFD2C]
// Nekki.SF2.GUI.Fight.EndFightScreen$$EIDLDGJLALI @ RVA 0x2FEFD2C

void Nekki_SF2_GUI_Fight_EndFightScreen__EIDLDGJLALI
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if ((DAT_04565a59 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565a59 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ClearStack
              (pNVar2,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (pNVar2,0x37,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method_00);
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__NEDONKJJDFN((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool EKFIBOAGPNF(FCJBEKHDLAF MHOFCOHFCGL)  [RVA 0x2FEFDE4]
// Nekki.SF2.GUI.Fight.EndFightScreen$$EKFIBOAGPNF @ RVA 0x2FEFDE4

bool Nekki_SF2_GUI_Fight_EndFightScreen__EKFIBOAGPNF
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,FCJBEKHDLAF_o *MHOFCOHFCGL,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OOMHDDBCBJP_o *__this_00;
  System_String_o *__this_01;
  IGPDCHBJAPD_o *__this_02;
  AFFHKININGD_o *pAVar3;
  
  if ((DAT_04565a5a & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_12439/*"Stranger"*/);
    DAT_04565a5a = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = FCJBEKHDLAF__FMHOFPCOKPH((MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if ((MHOFCOHFCGL != (FCJBEKHDLAF_o *)0x0) &&
     (pAVar3 = (MHOFCOHFCGL->fields).FBFPLEFCDOK, pAVar3 != (AFFHKININGD_o *)0x0)) {
    if ((pAVar3->fields).HECJHMJKFGB != false) {
      return false;
    }
    __this_00 = (pAVar3->fields).IFJLLGPGMHM;
    if ((__this_00 != (OOMHDDBCBJP_o *)0x0) &&
       (__this_01 = OOMHDDBCBJP__LOHPFCGCHNH(__this_00,(MethodInfo *)0x0),
       __this_01 != (System_String_o *)0x0)) {
      bVar1 = System_String__Contains(__this_01,StringLiteral_12439/*"Stranger"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_02 = (__this->fields).CIKGADOJJMG;
      if (__this_02 != (IGPDCHBJAPD_o *)0x0) {
        bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_02,(MethodInfo *)0x0);
        if (!bVar1) {
          return true;
        }
        iVar2 = FCJBEKHDLAF__IHMLDBDLJON(MHOFCOHFCGL,(MethodInfo *)0x0);
        return iVar2 == 5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PLAIIFOBHLP(bool CMPKOOEKFKF)  [RVA 0x2FEF984]
// Nekki.SF2.GUI.Fight.EndFightScreen$$PLAIIFOBHLP @ RVA 0x2FEF984

void Nekki_SF2_GUI_Fight_EndFightScreen__PLAIIFOBHLP
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_04565a5b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a5b = 1;
  }
  pUVar2 = (__this->fields)._animationFinishButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._animationFinishButton;
    if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OnDestroy()  [RVA 0x2FEFED4]
// Nekki.SF2.GUI.Fight.EndFightScreen$$OnDestroy @ RVA 0x2FEFED4

void Nekki_SF2_GUI_Fight_EndFightScreen__OnDestroy
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnAnimationFinishButton()  [RVA 0x2FEFEFC]
// Nekki.SF2.GUI.Fight.EndFightScreen$$OnAnimationFinishButton @ RVA 0x2FEFEFC

void Nekki_SF2_GUI_Fight_EndFightScreen__OnAnimationFinishButton
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_EndFightContent_o *pNVar2;
  
  if ((DAT_04565a5c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a5c = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).DBOLEPNBFAD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DBOLEPNBFAD;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_EndFightContent__FinishAnimation(pNVar2,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__PLAIIFOBHLP(__this,false,method_00);
  return;
}


// ===== private void INHOOPJHFPC()  [RVA 0x2FEF594]
// Nekki.SF2.GUI.Fight.EndFightScreen$$INHOOPJHFPC @ RVA 0x2FEF594

void Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar4;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o **ppNVar5;
  Nekki_SF2_GUI_Fight_EndFightContent_o **ppNVar6;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *x;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *x_00;
  Nekki_SF2_GUI_Fight_EndFightContent_o *x_01;
  
  if ((DAT_04565a5d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a5d = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).HABFEMIFKEL;
  x_00 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar5 == (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) goto LAB_030ef77c;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar5 = (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar5,0);
  }
  ppNVar6 = &(__this->fields).DBOLEPNBFAD;
  x_01 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).AnimationEndEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).RetryFightEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).GoToShopEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) goto LAB_030ef77c;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  ppNVar4 = &(__this->fields).EHKAIEBMIFA;
  x = *ppNVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) &&
     (pUVar2 = ((*ppNVar4)->fields).CloseEvent, pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
      *ppNVar4 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0;
      thunk_FUN_01c20e04(ppNVar4,0);
      return;
    }
  }
LAB_030ef77c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KCDFDJJIFGG()  [RVA 0x2FEFF80]
// Nekki.SF2.GUI.Fight.EndFightScreen$$KCDFDJJIFGG @ RVA 0x2FEFF80

void Nekki_SF2_GUI_Fight_EndFightScreen__KCDFDJJIFGG(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x38,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCLILNDOHAB()  [RVA 0x2FEFC00]
// Nekki.SF2.GUI.Fight.EndFightScreen$$CCLILNDOHAB @ RVA 0x2FEFC00

void Nekki_SF2_GUI_Fight_EndFightScreen__CCLILNDOHAB
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  LPGLKMNHELJ_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar1;
  IGPDCHBJAPD_o *pIVar2;
  
  if ((DAT_04565a5e & 1) == 0) {
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565a5e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).FPLAPLIHEGF != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__NBLLFEACOJK(__this,method_00);
    return;
  }
  if ((__this->fields).LDLILPHECLE != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__EKKNAKHCGML(__this,method_00);
    return;
  }
  if ((__this->fields).IJINDHBBABM != false) {
    Nekki_SF2_GUI_Fight_EndFightScreen__DKOJPFEMKDC(__this,method_00);
    return;
  }
  pIVar2 = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__ABOKGFABBOO(pIVar2,(MethodInfo *)0x0);
  if ((__this->fields).OFLMHJHPFJM != (MFFKCPDBFPG_o *)0x0) {
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (LPGLKMNHELJ_o *)0x0) {
      (__this_00->fields).FGCJFGHMIOL = (__this->fields).OFLMHJHPFJM;
      thunk_FUN_01c20e04();
      pIVar2 = (__this->fields).CIKGADOJJMG;
      if ((pIVar2 != (IGPDCHBJAPD_o *)0x0) &&
         (pDVar1 = (pIVar2->fields).DBIAAJNKHLH, pDVar1 != (DNELIPCHKLK_o *)0x0)) {
        (__this_00->fields).JOPIEJMBFHK = (pDVar1->fields).GDPFBDIJNHA;
        thunk_FUN_01c20e04();
        JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void EKKNAKHCGML()  [RVA 0x2FEFFA4]
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


// ===== public void .ctor()  [RVA 0x2FF04D8]
// Nekki.SF2.GUI.Fight.EndFightScreen$$.ctor @ RVA 0x2FF04D8

void Nekki_SF2_GUI_Fight_EndFightScreen___ctor
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void CJNMMGFHMBH()  [RVA 0x2FF04E0]
// Nekki.SF2.GUI.Fight.EndFightScreen$$CJNMMGFHMBH @ RVA 0x2FF04E0

void Nekki_SF2_GUI_Fight_EndFightScreen__CJNMMGFHMBH
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Fight_EndFightScreen__PLAIIFOBHLP(__this,false,in_x2);
  return;
}


// ===== public void OnBackKeyClicked(object OCMMDIHLKMH)  [RVA 0x2FF04E8]
// Nekki.SF2.GUI.Fight.EndFightScreen$$OnBackKeyClicked @ RVA 0x2FF04E8

void Nekki_SF2_GUI_Fight_EndFightScreen__OnBackKeyClicked
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  
  if ((DAT_04565a60 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 030f0514 to 031f051b has its CatchHandler @ 030f07f8 */
    DAT_04565a60 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
                    /* try { // try from 030f051c to 031f054b has its CatchHandler @ 030f03a4 */
  PNPKEKHEMCD = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,OCMMDIHLKMH);
  }
  MGNPHCAAEIO__ABOKGFABBOO(PNPKEKHEMCD,(MethodInfo *)0x0);
  return;
}


// ===== private void DKOJPFEMKDC()  [RVA 0x2FF034C]
// Nekki.SF2.GUI.Fight.EndFightScreen$$DKOJPFEMKDC @ RVA 0x2FF034C

void Nekki_SF2_GUI_Fight_EndFightScreen__DKOJPFEMKDC
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *pNVar2;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  
  if ((DAT_04565a61 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 030f03a4 to 031f0513 has its CatchHandler @ 030f03a4
                       catch() { ... } // from try @ 030f03a4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f051c with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0558 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f07c4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f07f4 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0828 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f0854 with catch @ 030f03a4
                       catch() { ... } // from try @ 030f08a0 with catch @ 030f03a4 */
    DAT_04565a61 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method);
  if ((__this->fields).IJINDHBBABM != false) {
    (__this->fields).IJINDHBBABM = false;
    pUVar3 = (__this->fields)._resistanceContentPrefab;
    pUVar5 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar5 = (__this->fields)._content;
    }
    else {
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,pUVar5,
                        (MethodInfo_1F1EC6C *)Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
      ppNVar4 = &(__this->fields).EHKAIEBMIFA;
      *ppNVar4 = pNVar2;
      thunk_FUN_01c20e04(ppNVar4,pNVar2);
      if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_ResistanceContent__Init(*ppNVar4,(__this->fields).INIAKIIBBHK,method_00)
        ;
        pNVar2 = (__this->fields).EHKAIEBMIFA;
        if (pNVar2 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
          __this_00 = (pNVar2->fields).CloseEvent;
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private bool CBNCGMBFHLN()  [RVA 0x2FEFA28]
// Nekki.SF2.GUI.Fight.EndFightScreen$$CBNCGMBFHLN @ RVA 0x2FEFA28

bool Nekki_SF2_GUI_Fight_EndFightScreen__CBNCGMBFHLN
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_00;
  System_String_o *__this_01;
  MethodInfo *extraout_x1;
  char *pcVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565a62 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_6545/*"ForgeMaterial"*/);
    DAT_04565a62 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                      );
    if (!bVar1) {
      iVar4 = 5;
      goto LAB_030efb2c;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pcVar3 = ((local_50.fields._current[1].klass)->_1).name;
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = *(System_String_o **)(pcVar3 + 0x18);
    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__StartsWith(__this_01,StringLiteral_6545/*"ForgeMaterial"*/,5,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar4 = 4;
LAB_030efb2c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__);
  return bVar1 && iVar4 == 4;
}

