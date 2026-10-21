// TypeDefIndex 3058
// Namespace: 
// public class SFButton : Button, EIAAMBLPLDG<object>
// Fields:
//   public static int ClickInvokeFramesOffset; // 0x0
//   private OMLLDCIMLBB<object> CDMKOMBJFLG; // 0x108
//   public ResolutionImage FlashingImage; // 0x110
//   protected bool _EnableClickAnimation; // 0x118
//   private ResolutionImage _glowSprite; // 0x120
//   private bool _WaitBeforeClick; // 0x128
//   private bool BDKMNPCCDNI; // 0x129
//   public bool IsOneShot; // 0x12A
//   private float MLCOHBGHGKF; // 0x12C
//   private float JMCNNEEGMAK; // 0x130
//   private bool DBGMEKCEBCO; // 0x134
//   private const float LECPGFPPHBK = 250;
//   private const bool HCBBOCOMJJP = False;
//   private const float BDPGLKHNHPC = 0.3;
//   private Nullable<Selectable.SelectionState> NLGFKIHALIG; // 0x138
//   private IEnumerator MIOHIAODHDI; // 0x140
//   private RectTransform AFJEBPELENH; // 0x148
//   private bool HGLJOEEEGNL; // 0x150
//   public float _glowTime; // 0x154
//   private Sequence HCLACPMIFEB; // 0x158
//   public int ButtonId; // 0x160

// ===== private IEnumerator DGIMIOFPGCI(PointerEventData MELGPLLNBGH)  [RVA 0x34BAA8C]
// SFButton$$DGIMIOFPGCI @ RVA 0x34BAA8C

System_Collections_IEnumerator_o *
SFButton__DGIMIOFPGCI
          (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045685c8 & 1) == 0) {
    FUN_01bab630(&SFButton_NLBDFBJDJDH_TypeInfo);
    DAT_045685c8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_NLBDFBJDJDH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = MELGPLLNBGH;
  thunk_FUN_01c20e04(&__this_00[2].monitor,MELGPLLNBGH);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== protected void DFCBNJJOHDA(float DLMEGIDOGPE)  [RVA 0x34BAB3C]
// SFButton$$DFCBNJJOHDA @ RVA 0x34BAB3C

void SFButton__DFCBNJJOHDA(SFButton_o *__this,float DLMEGIDOGPE,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar3;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_045685c9 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_SFButton_BJEJCCMFMJH__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_045685c9 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._glowSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((DLMEGIDOGPE != 0.0) && (!bVar1)) {
    SFButton__BJEJCCMFMJH(__this,method_00);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    (__this->fields).HCLACPMIFEB = pDVar2;
    thunk_FUN_01c20e04(&(__this->fields).HCLACPMIFEB);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((UnityEngine_UI_Image_o *)(__this->fields)._glowSprite,1.0,0.0,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              ((__this->fields).HCLACPMIFEB,1.0,(MethodInfo *)0x0);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((UnityEngine_UI_Image_o *)(__this->fields)._glowSprite,0.0,DLMEGIDOGPE,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int RemoveEventListener(int KGLJICLJHEL, Action<object> IELDNEAAPBE)  [RVA 0x34BAD08]
// SFButton$$RemoveEventListener @ RVA 0x34BAD08

int32_t SFButton__RemoveEventListener
                  (SFButton_o *__this,int32_t KGLJICLJHEL,System_Action_object__o *IELDNEAAPBE,
                  MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685ca & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    DAT_045685ca = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__RemoveEventListener
                      (__this_00,KGLJICLJHEL,(System_Action_T__o *)IELDNEAAPBE,
                       Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x34BAD70]
// SFButton$$Awake @ RVA 0x34BAD70

void SFButton__Awake(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  System_Nullable_Selectable_SelectionState__Fields local_28;
  
  if ((DAT_045685cb & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>__ctor__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_SFButton_CAPDHGIOBAK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045685cb = 1;
  }
  UnityEngine_UI_Selectable__Awake((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) {
LAB_035baeec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
    value = UnityEngine_UI_Selectable__get_currentSelectionState
                      ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_28,value,
               Method_System_Nullable<Selectable_SelectionState>__ctor__);
    (__this->fields).NLGFKIHALIG.fields = local_28;
    pNVar2 = (__this->fields).FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FlashingImage;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035baeec;
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields)._glowSprite;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields)._glowSprite,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== public int AddEventListener(int KGLJICLJHEL, Action<object> IELDNEAAPBE)  [RVA 0x34A6D3C]
// SFButton$$AddEventListener @ RVA 0x34A6D3C

int32_t SFButton__AddEventListener
                  (SFButton_o *__this,int32_t KGLJICLJHEL,System_Action_object__o *IELDNEAAPBE,
                  MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
                    /* catch() { ... } // from try @ 035a6d20 with catch @ 035a6d3c
                       catch() { ... } // from try @ 035a6d34 with catch @ 035a6d3c */
                    /* try { // try from 035a6d58 to 036a6dfb has its CatchHandler @ 035a6d58
                       catch() { ... } // from try @ 035a6d58 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e20 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e54 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e7c with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6eac with catch @ 035a6d58 */
  if ((DAT_045685cc & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_AddEventListener__);
    DAT_045685cc = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__AddEventListener
                      (__this_00,KGLJICLJHEL,(System_Action_T__o *)IELDNEAAPBE,
                       Method_OMLLDCIMLBB<object>_AddEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnPointerClick(PointerEventData MELGPLLNBGH)  [RVA 0x34BAEF0]
// SFButton$$OnPointerClick @ RVA 0x34BAEF0

void SFButton__OnPointerClick
               (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *in_x3;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045685cd & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&SFButton_TypeInfo);
    DAT_045685cd = 1;
  }
  if (SFButton_TypeInfo->static_fields->ClickInvokeFramesOffset < 1) {
    if ((__this->fields).super.super.m_Interactable != false) {
      (*(__this->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                (__this,(__this->klass->vtable)._48_DHDHDICMLCD.method);
    }
                    /* WARNING: Could not recover jumptable at 0x035bafa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._50_OnClick.methodPtr)
              (__this,MELGPLLNBGH,(__this->klass->vtable)._50_OnClick.method);
    return;
  }
  if ((__this->fields).HGLJOEEEGNL != false) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = SFButton__JBPDECOFFNG
                     (__this,MELGPLLNBGH,SFButton_TypeInfo->static_fields->ClickInvokeFramesOffset,
                      in_x3);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_035bb024;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035bb024:
                    /* WARNING: Could not recover jumptable at 0x035bb040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}


// ===== public void OriginateChangeState()  [RVA 0x34BB0D8]
// SFButton$$OriginateChangeState @ RVA 0x34BB0D8

void SFButton__OriginateChangeState(SFButton_o *__this,MethodInfo *method)

{
  System_Nullable_Selectable_SelectionState__o *__this_00;
  uint uVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685ce & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    DAT_045685ce = 1;
    method = extraout_x1;
  }
  SFButton__BJBKCBEEKLB(__this,method);
  __this_00 = &(__this->fields).NLGFKIHALIG;
  if ((__this->fields).NLGFKIHALIG.fields.hasValue != false) {
    uVar1 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)__this_00,
                       Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,(ulong)uVar1,0,(__this->klass->vtable)._26_DoStateTransition.method);
  }
  __this_00->fields = (System_Nullable_Selectable_SelectionState__Fields)0x0;
  return;
}


// ===== protected override void DoStateTransition(Selectable.SelectionState HJEBKCDDBAB, bool BPHNPNCDLOA)  [RVA 0x34BB240]
// SFButton$$DoStateTransition @ RVA 0x34BB240

void SFButton__DoStateTransition
               (SFButton_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,MethodInfo *method)

{
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void DHDHDICMLCD()  [RVA 0x34BB24C]
// SFButton$$DHDHDICMLCD @ RVA 0x34BB24C

void SFButton__DHDHDICMLCD(SFButton_o *__this,MethodInfo *method)

{
  return;
}


// ===== public int RemoveAllEventListener()  [RVA 0x34A6CEC]
// SFButton$$RemoveAllEventListener @ RVA 0x34A6CEC

int32_t SFButton__RemoveAllEventListener(SFButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685cf & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
                    /* catch() { ... } // from try @ 035a6ce4 with catch @ 035a6d10 */
    DAT_045685cf = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
                    /* try { // try from 035a6d20 to 036a6d27 has its CatchHandler @ 035a6d3c */
                    /* try { // try from 035a6d28 to 036a6d33 has its CatchHandler @ 035a6884 */
                    /* try { // try from 035a6d34 to 036a6d3b has its CatchHandler @ 035a6d3c */
    iVar1 = OMLLDCIMLBB<object>__RemoveAllEventListener
                      (__this_00,Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public override void OnPointerUp(PointerEventData MELGPLLNBGH)  [RVA 0x34BB250]
// SFButton$$OnPointerUp @ RVA 0x34BB250

void SFButton__OnPointerUp
               (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
               MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_045685d0 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045685d0 = 1;
  }
  UnityEngine_UI_Selectable__OnPointerUp
            ((UnityEngine_UI_Selectable_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
  local_24 = (__this->fields).ButtonId;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  SFButton__CallEvent(__this,1,PLPFOJADDML,in_x3);
  return;
}


// ===== private void BJBKCBEEKLB()  [RVA 0x34BB164]
// SFButton$$BJBKCBEEKLB @ RVA 0x34BB164

void SFButton__BJBKCBEEKLB(SFButton_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045685d1 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045685d1 = 1;
  }
  if ((__this->fields).MIOHIAODHDI == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  ppSVar1 = &(__this->fields).MIOHIAODHDI;
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_035bb214;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_035bb214:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public void set_IsFlashing(bool CJNHFNHJHPE)  [RVA 0x34BB354]
// SFButton$$set_IsFlashing @ RVA 0x34BB354

void SFButton__set_IsFlashing(SFButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_045685d2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045685d2 = 1;
  }
  (__this->fields).BDKMNPCCDNI = CJNHFNHJHPE;
  pNVar2 = (__this->fields).FlashingImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FlashingImage;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BDKMNPCCDNI,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void KJKDAHGENPM(Selectable.SelectionState HJEBKCDDBAB, bool IHAOMFJCMFP)  [RVA 0x34BB3FC]
// SFButton$$KJKDAHGENPM @ RVA 0x34BB3FC

void SFButton__KJKDAHGENPM
               (SFButton_o *__this,int32_t HJEBKCDDBAB,bool IHAOMFJCMFP,MethodInfo *method)

{
  ushort uVar1;
  int32_t value;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  Il2CppMethodPointer *ppIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  float NDPMILBBAPD;
  System_Nullable_Selectable_SelectionState__Fields local_38;
  
  if ((DAT_045685d3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>__ctor__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045685d3 = 1;
  }
  value = UnityEngine_UI_Selectable__get_currentSelectionState
                    ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_38,value,
             Method_System_Nullable<Selectable_SelectionState>__ctor__);
  (__this->fields).NLGFKIHALIG.fields = local_38;
  SFButton__BJBKCBEEKLB(__this,method_00);
  (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
            (__this,(ulong)(uint)HJEBKCDDBAB,0,(__this->klass->vtable)._26_DoStateTransition.method)
  ;
  if (IHAOMFJCMFP) {
    if ((__this->fields).super.super.m_Transition == 1) {
      NDPMILBBAPD = (__this->fields).super.super.m_Colors.fields.m_FadeDuration;
      if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
    }
    else {
      NDPMILBBAPD = 0.1;
    }
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = SFButton__NOFDGKIEHKD(__this,NDPMILBBAPD,method_01);
    if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar5 = pPVar2->klass;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          ppIVar4 = &pPVar5->vtable[*piVar7].methodPtr;
          goto LAB_035bb550;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    ppIVar4 = (Il2CppMethodPointer *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035bb550:
    (**ppIVar4)(pPVar2,pSVar3,1,(MethodInfo *)ppIVar4[1]);
  }
  return;
}


// ===== protected virtual void Update()  [RVA 0x34BB5F8]
// SFButton$$Update @ RVA 0x34BB5F8

void SFButton__Update(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_045685d4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045685d4 = 1;
  }
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar2 = (__this->fields).FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FlashingImage;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BDKMNPCCDNI,(MethodInfo *)0x0);
        if ((__this->fields).BDKMNPCCDNI == false) {
          return;
        }
        pNVar2 = (__this->fields).FlashingImage;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
          pNVar2 = (__this->fields).FlashingImage;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._23_set_color.method);
            fVar4 = (__this->fields).MLCOHBGHGKF;
            fVar5 = (__this->fields).JMCNNEEGMAK;
            if ((__this->fields).DBGMEKCEBCO == false) {
              fVar4 = fVar4 - fVar5;
              (__this->fields).MLCOHBGHGKF = fVar4;
              if (0.0 < fVar4) {
                return;
              }
              (__this->fields).DBGMEKCEBCO = true;
              (__this->fields).MLCOHBGHGKF = 0.0;
              return;
            }
            fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar4 = fVar4 + fVar5 * 60.0 * fVar3;
            (__this->fields).MLCOHBGHGKF = fVar4;
            if (fVar4 < 250.0) {
              return;
            }
            (__this->fields).MLCOHBGHGKF = 250.0;
            (__this->fields).DBGMEKCEBCO = false;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public int RemoveEvent(int KGLJICLJHEL)  [RVA 0x34BB74C]
// SFButton$$RemoveEvent @ RVA 0x34BB74C

int32_t SFButton__RemoveEvent(SFButton_o *__this,int32_t KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685d5 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEvent__);
    DAT_045685d5 = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__RemoveEvent
                      (__this_00,KGLJICLJHEL,Method_OMLLDCIMLBB<object>_RemoveEvent__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_ActiveAndInteractable()  [RVA 0x34BB7A4]
// SFButton$$get_ActiveAndInteractable @ RVA 0x34BB7A4

bool SFButton__get_ActiveAndInteractable(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).super.super.m_Interactable != false)) {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void AddFlashImage(string HCAAAAMDCNO)  [RVA 0x34BB7EC]
// SFButton$$AddFlashImage @ RVA 0x34BB7EC

void SFButton__AddFlashImage(SFButton_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_045685d6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_6496/*"FlashingImage"*/);
    DAT_045685d6 = 1;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,StringLiteral_6496/*"FlashingImage"*/,(MethodInfo *)0x0);
    __this_01 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)__this_00,
                          Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
      ppNVar1 = &(__this->fields).FlashingImage;
      (__this->fields).FlashingImage = pNVar2;
      thunk_FUN_01c20e04(ppNVar1,pNVar2);
      pNVar2 = (__this->fields).FlashingImage;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,HCAAAAMDCNO,(MethodInfo *)0x0);
        pNVar2 = *ppNVar1;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035bb900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnPointerDown(PointerEventData MELGPLLNBGH)  [RVA 0x34BB908]
// SFButton$$OnPointerDown @ RVA 0x34BB908

void SFButton__OnPointerDown
               (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
               MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_045685d7 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045685d7 = 1;
  }
  UnityEngine_UI_Selectable__OnPointerDown
            ((UnityEngine_UI_Selectable_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
  local_24 = (__this->fields).ButtonId;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  SFButton__CallEvent(__this,0,PLPFOJADDML,in_x3);
  return;
}


// ===== public void .ctor()  [RVA 0x34BB988]
// SFButton$$.ctor @ RVA 0x34BB988

void SFButton___ctor(SFButton_o *__this,MethodInfo *method)

{
  OMLLDCIMLBB_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685d8 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&OMLLDCIMLBB<object>_TypeInfo);
    DAT_045685d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (OMLLDCIMLBB_object__o *)thunk_FUN_01bda818(OMLLDCIMLBB<object>_TypeInfo,method);
  OMLLDCIMLBB<object>___ctor(__this_00,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).CDMKOMBJFLG = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).CDMKOMBJFLG,__this_00);
  (__this->fields)._EnableClickAnimation = true;
  (__this->fields)._WaitBeforeClick = true;
  (__this->fields).JMCNNEEGMAK = 10.0;
  (__this->fields).ButtonId = -1;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CreateAdditionalTouchZone(Vector2 PGFAIJMMOHJ, Vector2 MJBMLNKAPGC)  [RVA 0x34BBA2C]
// SFButton$$CreateAdditionalTouchZone @ RVA 0x34BBA2C

void SFButton__CreateAdditionalTouchZone
               (SFButton_o *__this,UnityEngine_Vector2_o PGFAIJMMOHJ,
               UnityEngine_Vector2_o MJBMLNKAPGC,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *p;
  UnityEngine_CanvasRenderer_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar4;
  
  if ((DAT_045685d9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_11521/*"SFButton-Created TouchZone"*/);
    DAT_045685d9 = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).AFJEBPELENH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).AFJEBPELENH;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_11521/*"SFButton-Created TouchZone"*/,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_035bbc38;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_035bbc38;
    UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_035bbc38;
    UnityEngine_Transform__set_localScale
              (pUVar3,(UnityEngine_Vector3_o)
                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pUVar4 = (UnityEngine_RectTransform_o *)
             Util__OHBILOGJCLA<object>(__this_00,Method_Util_OHBILOGJCLA<RectTransform>__);
    *ppUVar1 = pUVar4;
    thunk_FUN_01c20e04(ppUVar1,pUVar4);
    __this_01 = (UnityEngine_CanvasRenderer_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_00,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    if (__this_01 == (UnityEngine_CanvasRenderer_o *)0x0) goto LAB_035bbc38;
    UnityEngine_CanvasRenderer__set_cullTransparentMesh(__this_01,true,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this_00,Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
  }
  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(*ppUVar1,MJBMLNKAPGC,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(*ppUVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035bbc38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OnClick(PointerEventData MELGPLLNBGH)  [RVA 0x34BBC3C]
// SFButton$$OnClick @ RVA 0x34BBC3C

void SFButton__OnClick(SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
                      MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *PLPFOJADDML;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_045685da & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045685da = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    UnityEngine_UI_Button__OnPointerClick
              ((UnityEngine_UI_Button_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
    local_24 = (__this->fields).ButtonId;
    PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    SFButton__CallEvent(__this,2,PLPFOJADDML,in_x3);
    SFButton__DFCBNJJOHDA(__this,(__this->fields)._glowTime,method_00);
  }
  return;
}


// ===== public bool get_IsFlashing()  [RVA 0x34BBCD8]
// SFButton$$get_IsFlashing @ RVA 0x34BBCD8

bool SFButton__get_IsFlashing(SFButton_o *__this,MethodInfo *method)

{
  return (__this->fields).BDKMNPCCDNI;
}


// ===== public int CallEvent(int KGLJICLJHEL, object PLPFOJADDML)  [RVA 0x34BB2D0]
// SFButton$$CallEvent @ RVA 0x34BB2D0

int32_t SFButton__CallEvent(SFButton_o *__this,int32_t KGLJICLJHEL,Il2CppObject *PLPFOJADDML,
                           MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685db & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045685db = 1;
  }
  if ((__this->fields).super.super.m_Interactable != false) {
    __this_00 = (__this->fields).CDMKOMBJFLG;
    if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
      iVar1 = OMLLDCIMLBB<object>__CallEvent
                        (__this_00,KGLJICLJHEL,PLPFOJADDML,Method_OMLLDCIMLBB<object>_CallEvent__);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 1;
}


// ===== protected override void OnDestroy()  [RVA 0x34BBCE0]
// SFButton$$OnDestroy @ RVA 0x34BBCE0

void SFButton__OnDestroy(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  SFButton__BJEJCCMFMJH(__this,method);
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields).super.m_OnClick;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_EnableClickAnimation(bool CJNHFNHJHPE)  [RVA 0x34BBD28]
// SFButton$$set_EnableClickAnimation @ RVA 0x34BBD28

void SFButton__set_EnableClickAnimation(SFButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EnableClickAnimation = CJNHFNHJHPE;
  return;
}


// ===== private void BJEJCCMFMJH()  [RVA 0x34BACCC]
// SFButton$$BJEJCCMFMJH @ RVA 0x34BACCC

void SFButton__BJEJCCMFMJH(SFButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  
  t = (__this->fields).HCLACPMIFEB;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).HCLACPMIFEB;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void SetStatePressed()  [RVA 0x34BBD34]
// SFButton$$SetStatePressed @ RVA 0x34BBD34

void SFButton__SetStatePressed(SFButton_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x035bbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,2,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}


// ===== public void ChangeStatePressed(bool IHAOMFJCMFP)  [RVA 0x34BBD58]
// SFButton$$ChangeStatePressed @ RVA 0x34BBD58

void SFButton__ChangeStatePressed(SFButton_o *__this,bool IHAOMFJCMFP,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  SFButton__KJKDAHGENPM(__this,2,IHAOMFJCMFP,in_x3);
  return;
}


// ===== private IEnumerator NOFDGKIEHKD(float NDPMILBBAPD)  [RVA 0x34BB57C]
// SFButton$$NOFDGKIEHKD @ RVA 0x34BB57C

System_Collections_IEnumerator_o *
SFButton__NOFDGKIEHKD(SFButton_o *__this,float NDPMILBBAPD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685dc & 1) == 0) {
    FUN_01bab630(&SFButton_JPGCLGHFPFI_TypeInfo);
    DAT_045685dc = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_JPGCLGHFPFI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(float *)&__this_00[2].monitor = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void SetStateNormal()  [RVA 0x34BBD8C]
// SFButton$$SetStateNormal @ RVA 0x34BBD8C

void SFButton__SetStateNormal(SFButton_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x035bbda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,0,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}


// ===== public bool get_EnableClickAnimation()  [RVA 0x34BBDB0]
// SFButton$$get_EnableClickAnimation @ RVA 0x34BBDB0

bool SFButton__get_EnableClickAnimation(SFButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnableClickAnimation;
}


// ===== private void CAPDHGIOBAK()  [RVA 0x34BBDB8]
// SFButton$$CAPDHGIOBAK @ RVA 0x34BBDB8

void SFButton__CAPDHGIOBAK(SFButton_o *__this,MethodInfo *method)

{
  if ((__this->fields).IsOneShot != false) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private IEnumerator JBPDECOFFNG(PointerEventData MELGPLLNBGH, int ABKNPBMGHKH)  [RVA 0x34BB048]
// SFButton$$JBPDECOFFNG @ RVA 0x34BB048

System_Collections_IEnumerator_o *
SFButton__JBPDECOFFNG
          (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
          int32_t ABKNPBMGHKH,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045685dd & 1) == 0) {
    FUN_01bab630(&SFButton_FLGPNLOPAJN_TypeInfo);
    DAT_045685dd = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_FLGPNLOPAJN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[3].klass = (Il2CppClass *)MELGPLLNBGH;
  thunk_FUN_01c20e04(__this_00 + 3,MELGPLLNBGH);
  *(int32_t *)&__this_00[2].monitor = ABKNPBMGHKH;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x34BBDF8]
// SFButton$$get_RectTransform @ RVA 0x34BBDF8

UnityEngine_RectTransform_o * SFButton__get_RectTransform(SFButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_045685de & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_045685de = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pUVar1;
}

