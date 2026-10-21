// TypeDefIndex 364
// Namespace: Nekki.SF2.GUI.Map
// public class BattleButton : ResolutionButton
// Fields:
//   private LabelAlias _NameLabel; // 0x1A8
//   private TutorialNode _TutorialNode; // 0x1B0
//   private CircleCollider2D _Collider; // 0x1B8
//   private OOMHDDBCBJP CLMFOMEABFA; // 0x1C0
//   private bool KAKCIFAKCBG; // 0x1C8
//   private bool GEOICCNOABO; // 0x1C9
//   private float JDELEHBCIHA; // 0x1CC
//   private Tween IDMFMIPALLP; // 0x1D0
//   private const string NHDBIMHCAMF = "_raid";
//   private string PNDBLOIHIJJ; // 0x1D8

// ===== public void set_Locked(bool CJNHFNHJHPE)  [RVA 0x3474904]
// Nekki.SF2.GUI.Map.BattleButton$$set_Locked @ RVA 0x3474904

void Nekki_SF2_GUI_Map_BattleButton__set_Locked
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KAKCIFAKCBG = CJNHFNHJHPE;
  return;
}


// ===== public override void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x3474910]
// Nekki.SF2.GUI.Map.BattleButton$$OnPointerClick @ RVA 0x3474910

void Nekki_SF2_GUI_Map_BattleButton__OnPointerClick
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Hidden(bool CJNHFNHJHPE)  [RVA 0x347492C]
// Nekki.SF2.GUI.Map.BattleButton$$set_Hidden @ RVA 0x347492C

void Nekki_SF2_GUI_Map_BattleButton__set_Hidden
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool value;
  UnityEngine_GameObject_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  (__this->fields).GEOICCNOABO = CJNHFNHJHPE;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).CLMFOMEABFA;
  if (pOVar1 != (OOMHDDBCBJP_o *)0x0) {
    if ((pOVar1->fields).HHDBIGKBMEC == false) {
      value = false;
    }
    else {
      value = (__this->fields).GEOICCNOABO == false;
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetAlpha(float HFEIFAJHLCK, float LFJGFLNMBMC = 0)  [RVA 0x347497C]
// Nekki.SF2.GUI.Map.BattleButton$$SetAlpha @ RVA 0x347497C

void Nekki_SF2_GUI_Map_BattleButton__SetAlpha
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,float HFEIFAJHLCK,float LFJGFLNMBMC,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456831e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_AJEEBHALGCM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_GFFKCDMGLNJ__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_0456831e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_BattleButton__CCPABLFBFFA(__this,method);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((0.0 < LFJGFLNMBMC) && (bVar1)) {
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__To(getter,setter,HFEIFAJHLCK,LFJGFLNMBMC,(MethodInfo *)0x0);
    (__this->fields).IDMFMIPALLP = (DG_Tweening_Tween_o *)pDVar2;
    thunk_FUN_01c20e04(&(__this->fields).IDMFMIPALLP);
    return;
  }
  Nekki_SF2_GUI_Map_BattleButton__CNOCKOGHKJO(__this,HFEIFAJHLCK,method_00);
  return;
}


// ===== public bool get_Locked()  [RVA 0x3474C0C]
// Nekki.SF2.GUI.Map.BattleButton$$get_Locked @ RVA 0x3474C0C

bool Nekki_SF2_GUI_Map_BattleButton__get_Locked
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return (__this->fields).KAKCIFAKCBG;
}


// ===== public void SetActiveBattle(bool OPNIEBGMEPI)  [RVA 0x3474C14]
// Nekki.SF2.GUI.Map.BattleButton$$SetActiveBattle @ RVA 0x3474C14

void Nekki_SF2_GUI_Map_BattleButton__SetActiveBattle
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,bool OPNIEBGMEPI,MethodInfo *method)

{
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this,(bool)(~OPNIEBGMEPI & 1),(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,2,(MethodInfo *)0x0);
  return;
}


// ===== public CircleCollider2D get_Collider()  [RVA 0x3474C40]
// Nekki.SF2.GUI.Map.BattleButton$$get_Collider @ RVA 0x3474C40

UnityEngine_CircleCollider2D_o *
Nekki_SF2_GUI_Map_BattleButton__get_Collider
          (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Collider;
}


// ===== public void CorrectLabel()  [RVA 0x3474C48]
// Nekki.SF2.GUI.Map.BattleButton$$CorrectLabel @ RVA 0x3474C48

void Nekki_SF2_GUI_Map_BattleButton__CorrectLabel
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3474C4C]
// Nekki.SF2.GUI.Map.BattleButton$$.ctor @ RVA 0x3474C4C

void Nekki_SF2_GUI_Map_BattleButton___ctor
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  (__this->fields).JDELEHBCIHA = 1.0;
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public OOMHDDBCBJP get_Battle()  [RVA 0x3474C5C]
// Nekki.SF2.GUI.Map.BattleButton$$get_Battle @ RVA 0x3474C5C

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_BattleButton__get_Battle
          (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return (__this->fields).CLMFOMEABFA;
}


// ===== private float AJEEBHALGCM()  [RVA 0x3474C64]
// Nekki.SF2.GUI.Map.BattleButton$$AJEEBHALGCM @ RVA 0x3474C64

float Nekki_SF2_GUI_Map_BattleButton__AJEEBHALGCM
                (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return (__this->fields).JDELEHBCIHA;
}


// ===== public void Shake(Vector2 CJGKODCGPGM)  [RVA 0x3474C6C]
// Nekki.SF2.GUI.Map.BattleButton$$Shake @ RVA 0x3474C6C

void Nekki_SF2_GUI_Map_BattleButton__Shake
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,UnityEngine_Vector2_o CJGKODCGPGM,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3____Vector3ArrayOptions__o *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o direction;
  
  fVar3 = CJGKODCGPGM.fields.y;
  fVar4 = CJGKODCGPGM.fields.x;
  if ((DAT_0456831f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_HJMEGMDAINK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_LOIMEFPOLCL__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_0456831f = 1;
  }
  EDFDANKEBGF__AEBGICHHJED((MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector3>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector3>___ctor();
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar2 <= 1e-05) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  }
  else {
    fVar4 = fVar4 / fVar2;
    fVar3 = fVar3 / fVar2;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  direction.fields.y = fVar3 * 10.0;
  direction.fields.x = fVar4 * 10.0;
  direction.fields.z = 0.0;
  pDVar1 = DG_Tweening_DOTween__Punch(getter,setter,direction,0.4,0x10,1.0,(MethodInfo *)0x0);
  (__this->fields).IDMFMIPALLP = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).IDMFMIPALLP);
  return;
}


// ===== private void CNOCKOGHKJO(float HFEIFAJHLCK)  [RVA 0x3474B0C]
// Nekki.SF2.GUI.Map.BattleButton$$CNOCKOGHKJO @ RVA 0x3474B0C

/* WARNING: Removing unreachable block (ram,0x03574bcc) */

void Nekki_SF2_GUI_Map_BattleButton__CNOCKOGHKJO
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,float HFEIFAJHLCK,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568320 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    DAT_04568320 = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).JDELEHBCIHA;
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo,method);
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(fVar4);
  if (fVar2 <= ABS(HFEIFAJHLCK)) {
    fVar2 = ABS(HFEIFAJHLCK);
  }
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar1 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar1 = fVar3;
  }
  if (fVar1 <= ABS(HFEIFAJHLCK - fVar4)) {
    if (HFEIFAJHLCK < 0.0) {
      HFEIFAJHLCK = 0.0;
    }
    (__this->fields).JDELEHBCIHA = HFEIFAJHLCK;
    __this_00 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_00,(__this->fields).JDELEHBCIHA,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void GFFKCDMGLNJ(float KEFILECBPMF)  [RVA 0x3474E40]
// Nekki.SF2.GUI.Map.BattleButton$$GFFKCDMGLNJ @ RVA 0x3474E40

/* WARNING: Removing unreachable block (ram,0x03574bcc) */

void Nekki_SF2_GUI_Map_BattleButton__GFFKCDMGLNJ
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,float KEFILECBPMF,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568320 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    DAT_04568320 = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).JDELEHBCIHA;
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo,method);
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(fVar4);
  if (fVar2 <= ABS(KEFILECBPMF)) {
    fVar2 = ABS(KEFILECBPMF);
  }
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar1 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar1 = fVar3;
  }
  if (fVar1 <= ABS(KEFILECBPMF - fVar4)) {
    if (KEFILECBPMF < 0.0) {
      KEFILECBPMF = 0.0;
    }
    (__this->fields).JDELEHBCIHA = KEFILECBPMF;
    __this_00 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_00,(__this->fields).JDELEHBCIHA,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== internal static string AIHEAPNKCIG(BattleButton.PCAAFEMIPKD NKIAFKKEOBI, bool AOMBONOOJFP)  [RVA 0x3474E44]
// Nekki.SF2.GUI.Map.BattleButton$$AIHEAPNKCIG @ RVA 0x3474E44

System_String_o *
Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(int32_t NKIAFKKEOBI,bool AOMBONOOJFP,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  System_String_StaticFields *pSVar2;
  int32_t local_34;
  
  if ((DAT_04568321 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3431/*"BattleBtn"*/);
    FUN_01bab630(&StringLiteral_22453/*"{0}{1}{2}"*/);
    FUN_01bab630(&StringLiteral_16217/*"_raid"*/);
    DAT_04568321 = 1;
  }
  local_34 = NKIAFKKEOBI;
  arg1 = (Il2CppObject *)
         thunk_FUN_01bda448(Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo,&local_34);
  if (AOMBONOOJFP) {
    pSVar2 = (System_String_StaticFields *)&StringLiteral_16217/*"_raid"*/;
  }
  else {
    pSVar2 = string_TypeInfo->static_fields;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_22453/*"{0}{1}{2}"*/,StringLiteral_3431/*"BattleBtn"*/,arg1,(Il2CppObject *)pSVar2->Empty,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void set_Battle(OOMHDDBCBJP CJNHFNHJHPE)  [RVA 0x3474F24]
// Nekki.SF2.GUI.Map.BattleButton$$set_Battle @ RVA 0x3474F24

void Nekki_SF2_GUI_Map_BattleButton__set_Battle
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,OOMHDDBCBJP_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  OOMHDDBCBJP_o *pOVar2;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar3;
  System_String_o **ppSVar4;
  
  (__this->fields).CLMFOMEABFA = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).CLMFOMEABFA);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pOVar2 = (__this->fields).CLMFOMEABFA;
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) && (__this_00 != (UnityEngine_Object_o *)0x0)) {
    UnityEngine_Object__set_name(__this_00,(pOVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    pOVar2 = (__this->fields).CLMFOMEABFA;
    if (pOVar2 != (OOMHDDBCBJP_o *)0x0) {
      pNVar3 = (__this->fields)._TutorialNode;
      pSVar1 = OOMHDDBCBJP__LOHPFCGCHNH(pOVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
        ppSVar4 = &(pNVar3->fields)._ID;
        *ppSVar4 = pSVar1;
        thunk_FUN_01c20e04(ppSVar4,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3474F8C]
// Nekki.SF2.GUI.Map.BattleButton$$Init @ RVA 0x3474F8C

void Nekki_SF2_GUI_Map_BattleButton__Init
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool AOMBONOOJFP;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  System_String_o *str0_00;
  System_String_o *str0_01;
  MethodInfo *method_00;
  int32_t iVar4;
  uint NKIAFKKEOBI;
  
  if ((DAT_04568322 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    FUN_01bab630(&StringLiteral_16217/*"_raid"*/);
    DAT_04568322 = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(BANHBMINMMP,(MethodInfo *)0x0);
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,(MethodInfo *)0x0);
    NKIAFKKEOBI = (uint)bVar1;
    if (NKIAFKKEOBI == 0) {
      pSVar3 = OOMHDDBCBJP__JKFEMMGGLGJ(BANHBMINMMP,(MethodInfo *)0x0);
      str2 = OOMHDDBCBJP__ACJJCGLDLAP(BANHBMINMMP,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = OOMHDDBCBJP__IOJBCFGAGKJ(BANHBMINMMP,(MethodInfo *)0x0);
      str2 = OOMHDDBCBJP__KJHGGFNOHCE(BANHBMINMMP,(MethodInfo *)0x0);
    }
    if (pSVar3 != (System_String_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      AOMBONOOJFP = System_String__EndsWith(pSVar3,StringLiteral_16217/*"_raid"*/,(MethodInfo *)0x0);
      if (bVar2) {
        iVar4 = 3;
        if (bVar1) {
          iVar4 = 4;
        }
        str0 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG((uint)bVar1,AOMBONOOJFP,method_00);
        str0_00 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(2,AOMBONOOJFP,method_00);
        str0_01 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(iVar4,AOMBONOOJFP,method_00);
      }
      else {
        iVar4 = 3;
        if (NKIAFKKEOBI != 0) {
          iVar4 = 4;
        }
        str0 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                         ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,NKIAFKKEOBI,method_00);
        str0_00 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                            ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,2,method_00);
        str0_01 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                            ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,iVar4,method_00);
      }
      pSVar3 = System_String__Concat(str0,StringLiteral_1377/*"."*/,pSVar3,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_01,StringLiteral_1377/*"."*/,str2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = OOMHDDBCBJP__FNGDEJNOBPK(BANHBMINMMP,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_00,StringLiteral_1377/*"."*/,pSVar3,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_01,StringLiteral_1377/*"."*/,str2,(MethodInfo *)0x0);
      (__this->fields).PNDBLOIHIJJ = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields).PNDBLOIHIJJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetAlias(string NDGNHGIGAFD)  [RVA 0x3475238]
// Nekki.SF2.GUI.Map.BattleButton$$SetAlias @ RVA 0x3475238

void Nekki_SF2_GUI_Map_BattleButton__SetAlias
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,System_String_o *NDGNHGIGAFD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._NameLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,NDGNHGIGAFD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static string BIDLPMOMPND(string BJGIKNDJJFO, BattleButton.PCAAFEMIPKD NKIAFKKEOBI)  [RVA 0x34751B8]
// Nekki.SF2.GUI.Map.BattleButton$$BIDLPMOMPND @ RVA 0x34751B8

System_String_o *
Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
          (System_String_o *BJGIKNDJJFO,int32_t NKIAFKKEOBI,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568323 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo);
    DAT_04568323 = 1;
  }
  local_48.klass = (System_Enum_c *)Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = NKIAFKKEOBI;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(BJGIKNDJJFO,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool get_Hidden()  [RVA 0x3475254]
// Nekki.SF2.GUI.Map.BattleButton$$get_Hidden @ RVA 0x3475254

bool Nekki_SF2_GUI_Map_BattleButton__get_Hidden
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  return (__this->fields).GEOICCNOABO;
}


// ===== public override void OnPointerDown(PointerEventData OHNNFPGGEFK)  [RVA 0x347525C]
// Nekki.SF2.GUI.Map.BattleButton$$OnPointerDown @ RVA 0x347525C

void Nekki_SF2_GUI_Map_BattleButton__OnPointerDown
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568324 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04568324 = 1;
  }
  SFButton__OnPointerDown((SFButton_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).PNDBLOIHIJJ,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092/*"UI/Atlases/"*/,
             (__this->fields).PNDBLOIHIJJ,(MethodInfo *)0x0);
  return;
}


// ===== public override void OnPointerExit(PointerEventData OHNNFPGGEFK)  [RVA 0x34752DC]
// Nekki.SF2.GUI.Map.BattleButton$$OnPointerExit @ RVA 0x34752DC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Map_BattleButton__OnPointerExit
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_UI_SpriteState_o local_50;
  UnityEngine_Sprite_o *local_30;
  UnityEngine_Sprite_o *pUStack_28;
  UnityEngine_Sprite_o *pUStack_20;
  UnityEngine_Sprite_o *pUStack_18;
  
  UnityEngine_UI_Selectable__OnPointerExit
            ((UnityEngine_UI_Selectable_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pUStack_28 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 8);
  pUStack_18 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x18);
  pUStack_20 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x10);
  local_30 = (UnityEngine_Sprite_o *)0x0;
  thunk_FUN_01c20e04(&local_30,0);
  local_50.fields.m_PressedSprite = pUStack_28;
  local_50.fields.m_HighlightedSprite = local_30;
  local_50.fields.m_DisabledSprite = pUStack_18;
  local_50.fields.m_SelectedSprite = pUStack_20;
  UnityEngine_UI_Selectable__set_spriteState
            ((UnityEngine_UI_Selectable_o *)__this,&local_50,(MethodInfo *)0x0);
  return;
}


// ===== private Vector3 LOIMEFPOLCL()  [RVA 0x347532C]
// Nekki.SF2.GUI.Map.BattleButton$$LOIMEFPOLCL @ RVA 0x347532C

UnityEngine_Vector3_o
Nekki_SF2_GUI_Map_BattleButton__LOIMEFPOLCL
          (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJMEGMDAINK(Vector3 KEFILECBPMF)  [RVA 0x347534C]
// Nekki.SF2.GUI.Map.BattleButton$$HJMEGMDAINK @ RVA 0x347534C

void Nekki_SF2_GUI_Map_BattleButton__HJMEGMDAINK
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,UnityEngine_Vector3_o KEFILECBPMF,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localPosition(__this_00,KEFILECBPMF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCPABLFBFFA()  [RVA 0x3474AD0]
// Nekki.SF2.GUI.Map.BattleButton$$CCPABLFBFFA @ RVA 0x3474AD0

void Nekki_SF2_GUI_Map_BattleButton__CCPABLFBFFA
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).IDMFMIPALLP;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).IDMFMIPALLP;
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

