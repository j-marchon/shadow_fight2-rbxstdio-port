// TypeDefIndex 3163
// Namespace: Nekki.SF2.GUI.Fight
// public abstract class EndRaidFightScreenBase : MonoBehaviour, HAFLPBGEGCI
// Fields:
//   public string _WinSpriteName; // 0x20
//   public string _LoseSpriteName; // 0x28
//   public string _TimesUpSpriteName; // 0x30
//   private CanvasGroup _screenCanvasGroup; // 0x38
//   private ResolutionImage _background; // 0x40
//   protected Transform _Content; // 0x48
//   protected ResolutionImage _ResultHeader; // 0x50
//   private EndRaidFightScreenBase.AKEAFNEFBKC IAAABJBDEMK; // 0x58
//   private IMessage MGDEMNBPGIO; // 0x60
//   private bool HCOEDJGHJNA; // 0x68
//   private int FOCJNAFIFDF; // 0x6C
//   private float ENDOPBGIIBE; // 0x70
//   protected IGPDCHBJAPD KNEAEEIMDGH; // 0x78
//   private RaidEndFightBaseContent KCPNAKKMEGA; // 0x80

// ===== private void ProcessState()  [RVA 0x34DB944]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$ProcessState @ RVA 0x34DB944

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__ProcessState
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *IMMNELPBGIF;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *pNVar6;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  int32_t iVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  int32_t local_24;
  
  if ((DAT_04568716 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_AKEAFNEFBKC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_FBADHJLMHPG__);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5742/*"EndRaidFightDialog unknown state: %i"*/);
    DAT_04568716 = 1;
    method = extraout_x1;
  }
  switch((__this->fields).IAAABJBDEMK) {
  case 0:
  case 3:
  case 7:
    break;
  case 1:
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (KKLJIDJBFEI_o *)0x0) {
LAB_035dbc94:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar2->fields)._CPLKKCAJOJJ_k__BackingField != false) {
      return;
    }
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dbc94;
    if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField == false) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__PGGACFIAGDA(__this,method_00);
      return;
    }
    iVar7 = 2;
    goto LAB_035dbc6c;
  case 2:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__AJNEBENFIAJ(__this,method);
    return;
  case 4:
    if ((__this->fields).HCOEDJGHJNA == false) {
      return;
    }
    (__this->fields).HCOEDJGHJNA = false;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff1 == '\0') {
      FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
      DAT_04565ff1 = '\x01';
    }
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
      pNVar6 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)
               (*(__this->klass->vtable)._5_unknown.methodPtr)
                         (__this,(__this->klass->vtable)._5_unknown.method);
      (__this->fields).KCPNAKKMEGA = pNVar6;
    }
    else {
      (__this->fields).KCPNAKKMEGA = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
      pNVar6 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
    }
    thunk_FUN_01c20e04(&(__this->fields).KCPNAKKMEGA,pNVar6);
    pNVar6 = (__this->fields).KCPNAKKMEGA;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar6 = (__this->fields).KCPNAKKMEGA;
      if (pNVar6 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) {
        __this_00 = (pNVar6->fields).NHNIOGOEAJB;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_035dbc94;
    }
    iVar7 = 5;
LAB_035dbc6c:
    (__this->fields).IAAABJBDEMK = iVar7;
    break;
  case 5:
switchD_035db9e8_caseD_5:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnClose(__this,(Il2CppObject *)method,in_x2);
    return;
  case 6:
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__DIGPCFKCCBK(__this,method);
    method = extraout_x1_00;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    if (DAT_04565ff1 == '\0') {
      FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
      DAT_04565ff1 = '\x01';
      method = extraout_x1_02;
    }
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_03;
    }
    if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false)
    goto switchD_035db9e8_caseD_5;
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).IAAABJBDEMK;
    pIVar3 = (Il2CppObject *)
             thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_AKEAFNEFBKC_TypeInfo,
                                &local_24);
    if (args == (System_Object_array *)0x0) goto LAB_035dbc94;
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar3;
    thunk_FUN_01c20e04(args->m_Items,pIVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_01 = (MethodInfo *)0x0;
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5742/*"EndRaidFightDialog unknown state: %i"*/,args,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnClose(__this,IMMNELPBGIF,method_01);
  }
  return;
}


// ===== public virtual void Init(IGPDCHBJAPD PNPKEKHEMCD)  [RVA 0x34DC00C]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$Init @ RVA 0x34DC00C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__Init
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  IGPDCHBJAPD_o **ppIVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  float time;
  
  if ((DAT_04568717 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10483/*"ProcessState"*/);
    DAT_04568717 = 1;
  }
  ppIVar4 = &(__this->fields).KNEAEEIMDGH;
  *ppIVar4 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar4,PNPKEKHEMCD);
  pNVar5 = (__this->fields)._ResultHeader;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if (*ppIVar4 != (IGPDCHBJAPD_o *)0x0) {
      bVar1 = IGPDCHBJAPD__DONKDCJLBPN(*ppIVar4,(MethodInfo *)0x0);
      if (*ppIVar4 != (IGPDCHBJAPD_o *)0x0) {
        bVar2 = IGPDCHBJAPD__GCJHFPGABKL(*ppIVar4,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._ResultHeader;
        if (bVar1) {
          ppSVar3 = &(__this->fields)._WinSpriteName;
        }
        else if (bVar2) {
          ppSVar3 = &(__this->fields)._TimesUpSpriteName;
        }
        else {
          ppSVar3 = &(__this->fields)._LoseSpriteName;
        }
        if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (pNVar5->fields)._TexturePath = *ppSVar3;
          thunk_FUN_01c20e04(&(pNVar5->fields)._TexturePath);
          (*(pNVar5->klass->vtable)._91_RefreshSprite.methodPtr)
                    (pNVar5,(pNVar5->klass->vtable)._91_RefreshSprite.method);
          pNVar5 = (__this->fields)._ResultHeader;
          if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
            method_00 = extraout_x1_00;
            goto LAB_035dc118;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dc118:
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,method_00);
  time = (__this->fields).ENDOPBGIIBE;
  UnityEngine_MonoBehaviour__InvokeRepeating
            ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_10483/*"ProcessState"*/,time,time,(MethodInfo *)0x0);
  return;
}


// ===== private void PGGACFIAGDA()  [RVA 0x34DBCA8]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$PGGACFIAGDA @ RVA 0x34DBCA8

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__PGGACFIAGDA
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04568718 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_NJOFMEIDDAH__);
    FUN_01bab630(&StringLiteral_4302/*"CheckInternetDamageReject"*/);
    FUN_01bab630(&StringLiteral_17829/*"dlgServiceBtnRetry"*/);
    FUN_01bab630(&StringLiteral_4601/*"ConnectionLost"*/);
    FUN_01bab630(&StringLiteral_17787/*"dlgExitButton"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568718 = 1;
    method = extraout_x1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_4601/*"ConnectionLost"*/,StringLiteral_4302/*"CheckInternetDamageReject"*/,StringLiteral_17829/*"dlgServiceBtnRetry"*/,StringLiteral_17787/*"dlgExitButton"*/,
             IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF(__this,method_00);
  (__this->fields).IAAABJBDEMK = 7;
  return;
}


// ===== public void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x34DC280]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$OnBackKeyClicked @ RVA 0x34DC280

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnBackKeyClicked
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  if ((__this->fields).IAAABJBDEMK == 4) {
    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__FBADHJLMHPG(__this,(MethodInfo *)IMMNELPBGIF);
    return;
  }
  return;
}


// ===== private void NLMPHGFNKBA(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x34DC358]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$NLMPHGFNKBA @ RVA 0x34DC358

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__NLMPHGFNKBA
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF(__this,(MethodInfo *)IDCGLBOIAFJ);
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._8_unknown.methodPtr)
              (__this,IDCGLBOIAFJ,(__this->klass->vtable)._8_unknown.method);
    (__this->fields).IAAABJBDEMK = 4;
    (__this->fields).HCOEDJGHJNA = true;
    return;
  }
  iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
  if (iVar1 == 1) {
    iVar3 = (*__this->klass[1]._1.image)(__this,IDCGLBOIAFJ,__this->klass[1]._1.gc_desc);
  }
  else {
    if (iVar1 == 0) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,method_00);
      return;
    }
    if (1 < iVar1 - 0x2711U) goto LAB_035dc3f8;
    iVar3 = 0x29c6;
  }
  (__this->fields).FOCJNAFIFDF = iVar3;
LAB_035dc3f8:
  (__this->fields).IAAABJBDEMK = 6;
  return;
}


// ===== private void AJNEBENFIAJ()  [RVA 0x34DBDF4]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$AJNEBENFIAJ @ RVA 0x34DBDF4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__AJNEBENFIAJ
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  Google_Protobuf_IMessage_o *pGVar1;
  KKLJIDJBFEI_o *__this_00;
  System_String_o *CELOLGNMKCG;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  int32_t iVar2;
  Google_Protobuf_IMessage_o **ppGVar3;
  
  if ((DAT_04568719 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_NLMPHGFNKBA__);
    DAT_04568719 = 1;
  }
  ppGVar3 = &(__this->fields).MGDEMNBPGIO;
  if (*ppGVar3 == (Google_Protobuf_IMessage_o *)0x0) {
    pGVar1 = (Google_Protobuf_IMessage_o *)
             (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
    (__this->fields).MGDEMNBPGIO = pGVar1;
    thunk_FUN_01c20e04(ppGVar3,pGVar1);
    if ((__this->fields).MGDEMNBPGIO == (Google_Protobuf_IMessage_o *)0x0) {
      iVar2 = 5;
      goto LAB_035dbee0;
    }
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CELOLGNMKCG = (System_String_o *)
                (*(__this->klass->vtable)._7_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._7_unknown.method);
  pGVar1 = (__this->fields).MGDEMNBPGIO;
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this_00,CELOLGNMKCG,pGVar1,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
             (MethodInfo *)0x0);
  iVar2 = 3;
LAB_035dbee0:
  (__this->fields).IAAABJBDEMK = iVar2;
  return;
}


// ===== private void MFGPEJCIEEE()  [RVA 0x34DC410]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$MFGPEJCIEEE @ RVA 0x34DC410

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__MFGPEJCIEEE
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  if ((DAT_0456871a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456871a = 1;
  }
  DG_Tweening_ShortcutExtensions__DOKill
            ((UnityEngine_Component_o *)(__this->fields)._background,false,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._screenCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x34DC490]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$.ctor @ RVA 0x34DC490

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase___ctor
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  (__this->fields).ENDOPBGIIBE = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EAEOCPNBDME()  [RVA 0x34DC17C]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$EAEOCPNBDME @ RVA 0x34DC17C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  int32_t iVar2;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__MFGPEJCIEEE(__this,method);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 == (KKLJIDJBFEI_o *)0x0) {
LAB_035dc1e0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pKVar1->fields)._CPLKKCAJOJJ_k__BackingField == false) {
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dc1e0;
    if ((pKVar1->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      iVar2 = 2;
      goto LAB_035dc1bc;
    }
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dc1e0;
    KKLJIDJBFEI__CDKAPIKLDJI(pKVar1,(MethodInfo *)0x0);
  }
  iVar2 = 1;
LAB_035dc1bc:
  (__this->fields).IAAABJBDEMK = iVar2;
  return;
}


// ===== private void FBADHJLMHPG()  [RVA 0x34DC294]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$FBADHJLMHPG @ RVA 0x34DC294

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__FBADHJLMHPG
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o **ppNVar2;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *x;
  
  if ((DAT_0456871b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456871b = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).KCPNAKKMEGA;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar2 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) &&
       (__this_00 = ((*ppNVar2)->fields).NHNIOGOEAJB,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      if (*ppNVar2 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) {
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        *ppNVar2 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
        thunk_FUN_01c20e04(ppNVar2,0);
        goto LAB_035dc33c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dc33c:
  (__this->fields).HCOEDJGHJNA = true;
  return;
}


// ===== private void DIGPCFKCCBK()  [RVA 0x34DBF5C]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$DIGPCFKCCBK @ RVA 0x34DBF5C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__DIGPCFKCCBK
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  int32_t CEOLOKFCKIG;
  CPNHNIKFGFB_o *__this_00;
  System_Action_object__o *CPECAEHDDDB;
  
  if ((DAT_0456871c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OnClose__);
    DAT_0456871c = 1;
  }
  __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
  CEOLOKFCKIG = (__this->fields).FOCJNAFIFDF;
  CPECAEHDDDB = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_00,CEOLOKFCKIG,CPECAEHDDDB,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJOFMEIDDAH(object IMMNELPBGIF)  [RVA 0x34DC4A4]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$NJOFMEIDDAH @ RVA 0x34DC4A4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__NJOFMEIDDAH
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  undefined1 auVar1 [16];
  
  if ((DAT_0456871d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456871d = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    auVar1 = thunk_FUN_01bda96c();
    if (*auVar1._0_8_ == 1) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,auVar1._8_8_);
      return;
    }
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnClose(object IMMNELPBGIF)  [RVA 0x34DBF00]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$OnClose @ RVA 0x34DBF00

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OnClose
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  
  if ((DAT_0456871e & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456871e = 1;
    IMMNELPBGIF = extraout_x1;
  }
  PNPKEKHEMCD = (__this->fields).KNEAEEIMDGH;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,IMMNELPBGIF);
  }
  MGNPHCAAEIO__ABOKGFABBOO(PNPKEKHEMCD,(MethodInfo *)0x0);
  return;
}


// ===== private void BGJLGOKOABF()  [RVA 0x34DC1E4]
// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$BGJLGOKOABF @ RVA 0x34DC1E4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Color_o endValue;
  
  if ((DAT_0456871f & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456871f = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
  __this_00 = (__this->fields)._screenCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._background,0.0,(MethodInfo *)0x0);
    endValue.fields.b = 1.0;
    endValue.fields.a = 1.0;
    endValue.fields.r = 1.0;
    endValue.fields.g = 1.0;
    DG_Tweening_DOTweenModuleUI__DOColor
              ((UnityEngine_UI_Image_o *)(__this->fields)._background,endValue,1.0,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

