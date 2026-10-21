// TypeDefIndex 278
// Namespace: Nekki.SF2.GUI.Common
// public class HintCanvas : MonoBehaviour, CLMJPODNPKB
// Fields:
//   private float _hintBoxWidth; // 0x20
//   private float _hintBoxHeight; // 0x24
//   private float _timeToHide; // 0x28
//   private GameObject _hintBoxPrefab; // 0x30
//   private HintBox DMKLEIPIGKO; // 0x38
//   private GameObject EMFLDKEFCLG; // 0x40
//   private readonly SerialDisposable MEKKEAIEELM; // 0x48
//   private static HintCanvas CBDMFFMCJBK; // 0x0

// ===== private void PKEJAJKKOAN(bool CJNHFNHJHPE)  [RVA 0x3233244]
// Nekki.SF2.GUI.Common.HintCanvas$$PKEJAJKKOAN @ RVA 0x3233244

void Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_HintBox_o *pNVar2;
  
  if ((DAT_04566ff5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff5 = 1;
  }
  pNVar2 = (__this->fields).DMKLEIPIGKO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DMKLEIPIGKO;
    if ((pNVar2 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void Update()  [RVA 0x32332E8]
// Nekki.SF2.GUI.Common.HintCanvas$$Update @ RVA 0x32332E8

void Nekki_SF2_GUI_Common_HintCanvas__Update
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  
  if ((DAT_04566ff6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff6 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint(__this,method);
  if ((bVar1) &&
     ((iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2 ||
      (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), bVar1)))) {
    x = (UnityEngine_Object_o *)(__this->fields).EMFLDKEFCLG;
    if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    y = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_00);
      return;
    }
  }
  return;
}


// ===== private void ODPFCGPCMJJ(long HOKBHLPPCAH)  [RVA 0x32334E4]
// Nekki.SF2.GUI.Common.HintCanvas$$ODPFCGPCMJJ @ RVA 0x32334E4

void Nekki_SF2_GUI_Common_HintCanvas__ODPFCGPCMJJ
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,int64_t HOKBHLPPCAH,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04566ffe & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04566ffe = 1;
  }
  Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,false,method);
  ppUVar1 = &(__this->fields).EMFLDKEFCLG;
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  thunk_FUN_01c20e04(ppUVar1,0);
  __this_00 = (__this->fields).MEKKEAIEELM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32334E8]
// Nekki.SF2.GUI.Common.HintCanvas$$.ctor @ RVA 0x32334E8

void Nekki_SF2_GUI_Common_HintCanvas___ctor
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ff7 & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_04566ff7 = 1;
    method = extraout_x1;
  }
  (__this->fields)._timeToHide = 5.0;
  (__this->fields)._hintBoxWidth = 700.0;
  (__this->fields)._hintBoxHeight = 200.0;
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).MEKKEAIEELM;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x3233568]
// Nekki.SF2.GUI.Common.HintCanvas$$OnDestroy @ RVA 0x3233568

void Nekki_SF2_GUI_Common_HintCanvas__OnDestroy
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  UnityEngine_GameObject_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04566ffe & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04566ffe = 1;
  }
  Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,false,in_x2);
  ppUVar1 = &(__this->fields).EMFLDKEFCLG;
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  thunk_FUN_01c20e04(ppUVar1,0);
  __this_00 = (__this->fields).MEKKEAIEELM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool IsInstanceExists()  [RVA 0x323356C]
// Nekki.SF2.GUI.Common.HintCanvas$$IsInstanceExists @ RVA 0x323356C

bool Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_HintCanvas_o *x;
  
  if ((DAT_04566ff8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_HintCanvas_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff8 = 1;
  }
  x = Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool ShowHint(MMDPHPGAGAP FDLJCNLNCOC)  [RVA 0x32335E4]
// Nekki.SF2.GUI.Common.HintCanvas$$ShowHint @ RVA 0x32335E4

bool Nekki_SF2_GUI_Common_HintCanvas__ShowHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MMDPHPGAGAP_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_HintBox_o *pNVar3;
  UnityEngine_Transform_o *__this_00;
  System_TimeSpan_o dueTime;
  System_IObservable_long__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Object_o *pUVar4;
  UniRx_SerialDisposable_o *__this_01;
  UnityEngine_GameObject_o **ppUVar5;
  UnityEngine_Object_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if ((DAT_04566ff9 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_HintCanvas_ODPFCGPCMJJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566ff9 = 1;
  }
  ppUVar5 = &(__this->fields).EMFLDKEFCLG;
  pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
  if (FDLJCNLNCOC == (MMDPHPGAGAP_o *)0x0) goto LAB_033338b0;
  pUVar6 = (UnityEngine_Object_o *)(FDLJCNLNCOC->fields).LLMLOCGKBHH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar4,pUVar6,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_00);
    goto LAB_03333890;
  }
  pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
    pUVar6 = (UnityEngine_Object_o *)(FDLJCNLNCOC->fields).LLMLOCGKBHH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,pUVar6,(MethodInfo *)0x0);
    if ((bVar2) &&
       (bVar2 = Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint(__this,method_01), bVar2)) {
      Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_02);
    }
  }
  (__this->fields).EMFLDKEFCLG = (FDLJCNLNCOC->fields).LLMLOCGKBHH;
  thunk_FUN_01c20e04(ppUVar5);
  pNVar3 = (__this->fields).DMKLEIPIGKO;
  if (pNVar3 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
    method_04 = (MethodInfo *)(FDLJCNLNCOC->fields).BPCADJLKKGA;
    Nekki_SF2_GUI_HintBox__SetText
              (pNVar3,(FDLJCNLNCOC->fields).IKIINEOIIAK,(System_String_o *)method_04,
               (FDLJCNLNCOC->fields).BODPNOBPJDK,(FDLJCNLNCOC->fields).KEBFGEPCBMC,
               (FDLJCNLNCOC->fields).CPPABOCOPAD,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_Common_HintCanvas__NPJLDEDLLCE
                      (__this,(UnityEngine_Vector2_o)(FDLJCNLNCOC->fields).NMFDFHKAIHG.fields,
                       (UnityEngine_Vector2_o)(FDLJCNLNCOC->fields).BOICIIOEOKN.fields,method_03);
    pNVar3 = (__this->fields).DMKLEIPIGKO;
    if (pNVar3 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      fVar7 = (FDLJCNLNCOC->fields).NMFDFHKAIHG.fields.x;
      fVar8 = (FDLJCNLNCOC->fields).NMFDFHKAIHG.fields.y;
      fVar9 = (FDLJCNLNCOC->fields).BOICIIOEOKN.fields.x;
      fVar10 = (FDLJCNLNCOC->fields).BOICIIOEOKN.fields.y;
      if (bVar2) {
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_033338b0;
        value_00.fields.y = fVar8 - fVar10;
        value_00.fields.x = fVar7 - fVar9;
        value_00.fields.z = 0.0;
        UnityEngine_Transform__set_position(__this_00,value_00,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).DMKLEIPIGKO;
        if (pNVar3 == (Nekki_SF2_GUI_HintBox_o *)0x0) goto LAB_033338b0;
        Nekki_SF2_GUI_HintBox__Flip(pNVar3,(MethodInfo *)0x0);
      }
      else {
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_033338b0;
        value_01.fields.y = fVar8 + fVar10;
        value_01.fields.x = fVar7 + fVar9;
        value_01.fields.z = 0.0;
        UnityEngine_Transform__set_position(__this_00,value_01,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).DMKLEIPIGKO;
        if (pNVar3 == (Nekki_SF2_GUI_HintBox_o *)0x0) goto LAB_033338b0;
        Nekki_SF2_GUI_HintBox__ResetFlip(pNVar3,(MethodInfo *)0x0);
      }
      Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,true,method_04);
      if ((FDLJCNLNCOC->fields).HDNPGLLCNEF == false) {
        __this_01 = (__this->fields).MEKKEAIEELM;
        fVar7 = (__this->fields)._timeToHide;
        if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        dueTime = System_TimeSpan__FromSeconds((double)fVar7,(MethodInfo *)0x0);
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
        }
        source = UniRx_Observable__Timer(dueTime,(MethodInfo *)0x0);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 0333385c to 03433923 has its CatchHandler @ 0333385c
                       catch() { ... } // from try @ 0333385c with catch @ 0333385c
                       catch() { ... } // from try @ 033339fc with catch @ 0333385c
                       catch() { ... } // from try @ 03333ab0 with catch @ 0333385c
                       catch() { ... } // from try @ 03333ab8 with catch @ 0333385c
                       catch() { ... } // from try @ 03333b74 with catch @ 0333385c */
        System_Action<long>___ctor();
        value = UniRx_ObservableExtensions__Subscribe<long>
                          ((System_IObservable_T__o *)source,onNext,
                           Method_UniRx_ObservableExtensions_Subscribe<long>__);
        if (__this_01 == (UniRx_SerialDisposable_o *)0x0) goto LAB_033338b0;
        UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
      }
LAB_03333890:
      return (bool)(~bVar1 & 1);
    }
  }
LAB_033338b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static CLMJPODNPKB get_Instance()  [RVA 0x32339F4]
// Nekki.SF2.GUI.Common.HintCanvas$$get_Instance @ RVA 0x32339F4

CLMJPODNPKB_o * Nekki_SF2_GUI_Common_HintCanvas__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_HintCanvas_o *pNVar2;
  
                    /* try { // try from 033339fc to 03433a9f has its CatchHandler @ 0333385c */
  if ((DAT_04566ffa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintCanvas>__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_HintCanvas_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10396/*"Prefabs/Common/HintCanvas"*/);
    FUN_01bab630(&StringLiteral_15482/*"[HintCanvas]"*/);
    DAT_04566ffa = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03333aa0 to 03433aa7 has its CatchHandler @ 03333adc */
  if (bVar1) {
                    /* try { // try from 03333aa8 to 03433aab has its CatchHandler @ 03333ac8 */
                    /* try { // try from 03333aac to 03433aaf has its CatchHandler @ 03333ac4 */
                    /* try { // try from 03333ab0 to 03433ab3 has its CatchHandler @ 0333385c */
                    /* try { // try from 03333ab4 to 03433ab7 has its CatchHandler @ 03333ac0 */
                    /* try { // try from 03333ab8 to 03433af3 has its CatchHandler @ 0333385c */
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10396/*"Prefabs/Common/HintCanvas"*/,Method_UnityEngine_Resources_Load<GameObject>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333ab4 with catch @ 03333ac0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aac with catch @ 03333ac4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aa8 with catch @ 03333ac8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033339e4 with catch @ 03333acc
                        */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033339f0 with catch @ 03333ad0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333980 with catch @ 03333ad4
                        */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333924 with catch @ 03333ad8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aa0 with catch @ 03333adc
                        */
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03333af4 to 03433af7 has its CatchHandler @ 03333b04 */
                    /* catch() { ... } // from try @ 03333af4 with catch @ 03333b04 */
    UnityEngine_Object__set_name(__this,StringLiteral_15482/*"[HintCanvas]"*/,(MethodInfo *)0x0);
                    /* try { // try from 03333b0c to 03433b73 has its CatchHandler @ 03333b88 */
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_HintCanvas_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<HintCanvas>__);
    Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields,pNVar2);
  }
  return (CLMJPODNPKB_o *)Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public bool get_IsShowingAnyHint()  [RVA 0x32333C4]
// Nekki.SF2.GUI.Common.HintCanvas$$get_IsShowingAnyHint @ RVA 0x32333C4

bool Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_HintBox_o *pNVar2;
  
  if ((DAT_04566ffb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffb = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).DMKLEIPIGKO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DMKLEIPIGKO;
    if ((pNVar2 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private void Awake()  [RVA 0x3233B60]
// Nekki.SF2.GUI.Common.HintCanvas$$Awake @ RVA 0x3233B60

void Nekki_SF2_GUI_Common_HintCanvas__Awake
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_HintBox_o *pNVar1;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_HintBox_o **ppNVar3;
  
                    /* try { // try from 03333b74 to 03433b7f has its CatchHandler @ 0333385c */
                    /* try { // try from 03333b80 to 03433b87 has its CatchHandler @ 03333b88 */
  if ((DAT_04566ffc & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03333b0c with catch @ 03333b88
                       catch(type#2 @ 00000000) { ... } // from try @ 03333b80 with catch @ 03333b88
                        */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintBox>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffc = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._hintBoxPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pUVar2 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 03333bfc to 03433ccb has its CatchHandler @ 03333bfc
                       catch() { ... } // from try @ 03333bfc with catch @ 03333bfc
                       catch() { ... } // from try @ 03333cd8 with catch @ 03333bfc
                       catch() { ... } // from try @ 03333d64 with catch @ 03333bfc
                       catch() { ... } // from try @ 03333df4 with catch @ 03333bfc */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_HintBox_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<HintBox>__);
      ppNVar3 = &(__this->fields).DMKLEIPIGKO;
      *ppNVar3 = pNVar1;
      thunk_FUN_01c20e04(ppNVar3,pNVar1);
      pNVar1 = *ppNVar3;
      if (pNVar1 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03333c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar1->klass->vtable)._4_Init.methodPtr)
                  ((__this->fields)._hintBoxWidth,(__this->fields)._hintBoxHeight,pNVar1,
                   (pNVar1->klass->vtable)._4_Init.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool NPJLDEDLLCE(Vector2 BLEOKMIDGIK, Vector2 MJBMLNKAPGC)  [RVA 0x32338B4]
// Nekki.SF2.GUI.Common.HintCanvas$$NPJLDEDLLCE @ RVA 0x32338B4

bool Nekki_SF2_GUI_Common_HintCanvas__NPJLDEDLLCE
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,UnityEngine_Vector2_o BLEOKMIDGIK,
               UnityEngine_Vector2_o MJBMLNKAPGC,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_HintBox_o *pNVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((DAT_04566ffd & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffd = 1;
  }
  __this_00 = (__this->fields).EMFLDKEFCLG;
                    /* try { // try from 03333924 to 0343394b has its CatchHandler @ 03333ad8 */
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
                    /* try { // try from 033339e4 to 034339eb has its CatchHandler @ 03333acc */
      return false;
    }
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03333980 to 034339ab has its CatchHandler @ 03333ad4 */
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar7.fields.y = BLEOKMIDGIK.fields.y + MJBMLNKAPGC.fields.y;
        UVar7.fields.x = BLEOKMIDGIK.fields.x + MJBMLNKAPGC.fields.x;
        UVar7.fields.z = 0.0;
        UVar7 = UnityEngine_Transform__InverseTransformPoint(pUVar2,UVar7,(MethodInfo *)0x0);
        pNVar4 = (__this->fields).DMKLEIPIGKO;
        if ((pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
           (pUVar3 = (pNVar4->fields)._RectTransform, pUVar3 != (UnityEngine_RectTransform_o *)0x0))
        {
          UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          return ABS(UVar5.fields.y * -0.5 - UVar7.fields.y) < UVar6.fields.y;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033339f0 to 034339fb has its CatchHandler @ 03333ad0 */
  FUN_01bab8c8();
}


// ===== public void HideHint()  [RVA 0x3233458]
// Nekki.SF2.GUI.Common.HintCanvas$$HideHint @ RVA 0x3233458

void Nekki_SF2_GUI_Common_HintCanvas__HideHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  UnityEngine_GameObject_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04566ffe & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04566ffe = 1;
  }
  Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,false,in_x2);
  ppUVar1 = &(__this->fields).EMFLDKEFCLG;
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  thunk_FUN_01c20e04(ppUVar1,0);
  __this_00 = (__this->fields).MEKKEAIEELM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsShowingHint(GameObject LKMJPHDHCID)  [RVA 0x3233C60]
// Nekki.SF2.GUI.Common.HintCanvas$$IsShowingHint @ RVA 0x3233C60

bool Nekki_SF2_GUI_Common_HintCanvas__IsShowingHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,UnityEngine_GameObject_o *LKMJPHDHCID,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566fff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fff = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).EMFLDKEFCLG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)LKMJPHDHCID,(MethodInfo *)0x0);
  return bVar1;
}

