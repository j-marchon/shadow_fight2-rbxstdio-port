// TypeDefIndex 526
// Namespace: 
// public class DebugSimpleScroll : MonoBehaviour
// Fields:
//   public List<DebugSimpleScroll.ScrollItem> ScrollItems; // 0x20
//   private BaseScrollItem _scrollItemPrefab; // 0x28
//   private Button _add10Btn; // 0x30
//   private Button _add5Btn; // 0x38
//   private Button _add1Btn; // 0x40
//   private Button _removeBtn; // 0x48
//   private Button _moveP1Btn; // 0x50
//   private Button _moveM1Btn; // 0x58
//   private Button _selectScrollBtn; // 0x60
//   private Button _startContinuousAddBtn; // 0x68
//   private Button _stopContinuousAddBtn; // 0x70
//   private Button _snapBtn; // 0x78
//   private Text LBCNOLDLOAJ; // 0x80
//   private Button _loopBtn; // 0x88
//   private Text JGMNBBKLENN; // 0x90
//   private Ease _ease; // 0x98
//   private float _move1Time; // 0x9C
//   private float _continuousAddDelay; // 0xA0
//   private int ALCCHKDCBEN; // 0xA4
//   private IEnumerator BBKNKHOJFOG; // 0xA8

// ===== private void Update()  [RVA 0x3594F10]
// DebugSimpleScroll$$Update @ RVA 0x3594F10

void DebugSimpleScroll__Update(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  byte bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *pUVar5;
  
  if ((DAT_04568d97 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LabelAlias_TypeInfo);
    FUN_01bab630(&StringLiteral_8665/*"Loop "*/);
    FUN_01bab630(&StringLiteral_12197/*"Snap "*/);
    FUN_01bab630(&StringLiteral_9681/*"ON"*/);
    FUN_01bab630(&StringLiteral_9675/*"OFF"*/);
                    /* try { // try from 03694f68 to 03794f6f has its CatchHandler @ 036952c4 */
    DAT_04568d97 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields).LBCNOLDLOAJ;
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method);
  if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_036950a4;
                    /* try { // try from 03694f88 to 03794f8f has its CatchHandler @ 036952bc */
                    /* try { // try from 03694fa4 to 03794fab has its CatchHandler @ 03695050 */
  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_LabelAlias_TypeInfo->_2).naturalAligment;
    if ((pUVar5->klass->_2).naturalAligment < bVar2) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
    else if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_LabelAlias_TypeInfo) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
  }
  puVar1 = &StringLiteral_9675/*"OFF"*/;
  if (*(char *)&(pNVar3->fields)._visibilityChecker != '\0') {
    puVar1 = &StringLiteral_9681/*"ON"*/;
  }
  pSVar4 = System_String__Concat(StringLiteral_12197/*"Snap "*/,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                    /* try { // try from 03694ff4 to 0379500f has its CatchHandler @ 0369504c */
  if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto LAB_036950a4;
  (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
            (pUVar5,pSVar4,(pUVar5->klass->vtable)._75_set_text.method);
  pUVar5 = (__this->fields).JGMNBBKLENN;
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_00);
  if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_036950a4;
                    /* try { // try from 03695020 to 03795027 has its CatchHandler @ 036952b8 */
  if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) {
LAB_0369504c:
                    /* catch() { ... } // from try @ 03694ff4 with catch @ 0369504c */
    pUVar5 = (UnityEngine_UI_Text_o *)0x0;
                    /* catch() { ... } // from try @ 03694fa4 with catch @ 03695050 */
  }
  else {
                    /* try { // try from 0369503c to 03795047 has its CatchHandler @ 03695054 */
    bVar2 = (Nekki_SF2_GUI_LabelAlias_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03695048 to 0379506f has its CatchHandler @ 0369430c */
    if ((pUVar5->klass->_2).naturalAligment < bVar2) goto LAB_0369504c;
                    /* catch() { ... } // from try @ 0369503c with catch @ 03695054 */
    if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_LabelAlias_TypeInfo) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
  }
  puVar1 = &StringLiteral_9675/*"OFF"*/;
  if (*(char *)((long)&(pNVar3->fields)._visibilityChecker + 1) != '\0') {
    puVar1 = &StringLiteral_9681/*"ON"*/;
  }
                    /* try { // try from 03695070 to 03795073 has its CatchHandler @ 036952a4 */
                    /* try { // try from 03695074 to 0379527b has its CatchHandler @ 0369430c */
  pSVar4 = System_String__Concat(StringLiteral_8665/*"Loop "*/,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036950a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
              (pUVar5,pSVar4,(pUVar5->klass->vtable)._75_set_text.method);
    return;
  }
LAB_036950a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NHICLAPKBOO()  [RVA 0x3595108]
// DebugSimpleScroll$$NHICLAPKBOO @ RVA 0x3595108

void DebugSimpleScroll__NHICLAPKBOO(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = DebugSimpleScroll__CKPKMBBIMOP(__this,method);
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCIPBALFIOB()  [RVA 0x3595124]
// DebugSimpleScroll$$CCIPBALFIOB @ RVA 0x3595124

void DebugSimpleScroll__CCIPBALFIOB(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  System_Action_DebugSimpleScroll_ScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  System_Action_DebugSimpleScroll_ScrollItem__o *action;
  
  if ((DAT_04568d98 & 1) == 0) {
    FUN_01bab630(&System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    FUN_01bab630(&Method_DebugSimpleScroll_<>c_OJPMOCDNLIH__);
    FUN_01bab630(&DebugSimpleScroll_<>c_TypeInfo);
    DAT_04568d98 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).ScrollItems;
  if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__31_0;
  if (action == (System_Action_DebugSimpleScroll_ScrollItem__o *)0x0) {
    if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    }
    action = (System_Action_DebugSimpleScroll_ScrollItem__o *)
             thunk_FUN_01bda818(System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__31_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x3595228]
// DebugSimpleScroll$$Awake @ RVA 0x3595228

void DebugSimpleScroll__Awake(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o **ppUVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568d99 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    FUN_01bab630(&Method_DebugSimpleScroll_AELEBOMBMDL__);
    FUN_01bab630(&Method_DebugSimpleScroll_CCIPBALFIOB__);
                    /* try { // try from 0369527c to 0379528f has its CatchHandler @ 036953a8 */
    FUN_01bab630(&Method_DebugSimpleScroll_DHLFPKECJCF__);
    FUN_01bab630(&Method_DebugSimpleScroll_DKCJBAGGHEK__);
                    /* try { // try from 03695290 to 03795293 has its CatchHandler @ 03695334 */
                    /* try { // try from 03695294 to 0379529b has its CatchHandler @ 036952c0 */
    FUN_01bab630(&Method_DebugSimpleScroll_DKPCBGDEOKA__);
                    /* try { // try from 0369529c to 0379529f has its CatchHandler @ 036952b4 */
                    /* try { // try from 036952a0 to 037952a3 has its CatchHandler @ 036952b0 */
                    /* catch() { ... } // from try @ 03695070 with catch @ 036952a4
                       try { // try from 036952a4 to 037952df has its CatchHandler @ 0369430c */
    FUN_01bab630(&Method_DebugSimpleScroll_GEHOLGHDEOP__);
                    /* catch() { ... } // from try @ 036952a0 with catch @ 036952b0 */
    FUN_01bab630(&Method_DebugSimpleScroll_KMENJMLOABF__);
                    /* catch() { ... } // from try @ 0369529c with catch @ 036952b4 */
                    /* catch() { ... } // from try @ 03695020 with catch @ 036952b8 */
                    /* catch() { ... } // from try @ 03694f88 with catch @ 036952bc */
    FUN_01bab630(&Method_DebugSimpleScroll_LFENGGKOJDO__);
                    /* catch() { ... } // from try @ 03695294 with catch @ 036952c0 */
                    /* catch() { ... } // from try @ 03694f68 with catch @ 036952c4 */
    FUN_01bab630(&Method_DebugSimpleScroll_NHICLAPKBOO__);
    FUN_01bab630(&Method_DebugSimpleScroll_OLCEJFDGOKG__);
                    /* try { // try from 036952e0 to 037952e3 has its CatchHandler @ 0369530c */
    FUN_01bab630(&Method_DebugSimpleScroll_OLHIMOOJEKP__);
                    /* try { // try from 036952e4 to 0379531b has its CatchHandler @ 0369430c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DebugSimpleScroll_ScrollItem>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DebugSimpleScroll_ScrollItem>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DebugSimpleScroll_ScrollItem>_get_Current__
                );
                    /* catch() { ... } // from try @ 036952e0 with catch @ 0369530c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_GetEnumerator__
                );
                    /* try { // try from 0369531c to 0379532f has its CatchHandler @ 036953a8 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568d99 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 03694834 with catch @ 03695330
                       try { // try from 03695330 to 0379534f has its CatchHandler @ 0369430c */
  pUVar2 = (__this->fields)._snapBtn;
                    /* catch() { ... } // from try @ 03695290 with catch @ 03695334 */
  if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                    /* catch() { ... } // from try @ 03694820 with catch @ 03695338 */
    pUVar3 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)pUVar2,
                        Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    ppUVar5 = &(__this->fields).LBCNOLDLOAJ;
    *ppUVar5 = pUVar3;
                    /* try { // try from 03695350 to 03795353 has its CatchHandler @ 0369537c */
                    /* try { // try from 03695354 to 0379538b has its CatchHandler @ 0369430c */
    thunk_FUN_01c20e04(ppUVar5,pUVar3);
    pUVar2 = (__this->fields)._loopBtn;
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar3 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)pUVar2,
                          Method_UnityEngine_Component_GetComponentInChildren<Text>__);
      ppUVar5 = &(__this->fields).JGMNBBKLENN;
      *ppUVar5 = pUVar3;
                    /* catch() { ... } // from try @ 03695350 with catch @ 0369537c */
      thunk_FUN_01c20e04(ppUVar5,pUVar3);
      __this_00 = (__this->fields).ScrollItems;
      if (__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
                    /* try { // try from 0369538c to 03795393 has its CatchHandler @ 036953a8 */
                    /* try { // try from 03695394 to 0379539f has its CatchHandler @ 0369430c */
                    /* try { // try from 036953a0 to 037953a7 has its CatchHandler @ 036953a8 */
                    /* catch() { ... } // from try @ 0369527c with catch @ 036953a8
                       catch() { ... } // from try @ 0369531c with catch @ 036953a8
                       catch() { ... } // from try @ 0369538c with catch @ 036953a8
                       catch() { ... } // from try @ 036953a0 with catch @ 036953a8 */
                    /* try { // try from 036953ac to 037954ab has its CatchHandler @ 036953ac
                       catch() { ... } // from try @ 036953ac with catch @ 036953ac
                       catch() { ... } // from try @ 036955a4 with catch @ 036953ac
                       catch() { ... } // from try @ 036955cc with catch @ 036953ac
                       catch() { ... } // from try @ 03695630 with catch @ 036953ac
                       catch() { ... } // from try @ 03695664 with catch @ 036953ac
                       catch() { ... } // from try @ 03695698 with catch @ 036953ac */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<DebugSimpleScroll_ScrollItem>_MoveNext__
                            );
          if (!bVar1) break;
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (local_80.fields._current[1].monitor == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_SimpleScroll__Init(local_80.fields._current[1].monitor,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<DebugSimpleScroll_ScrollItem>_Dispose__
                  );
        (__this->fields).ALCCHKDCBEN = -1;
        DebugSimpleScroll__DHLFPKECJCF(__this,method_00);
        pUVar2 = (__this->fields)._add10Btn;
        if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
          pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick;
          pUVar4 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar4,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._add5Btn;
            if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
              pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick;
              pUVar4 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 036954ac to 037954b3 has its CatchHandler @ 03695650 */
                UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar4,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._add1Btn;
                if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 036954c4 to 037954cf has its CatchHandler @ 03695640 */
                  pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick;
                  pUVar4 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 036954e4 to 037954eb has its CatchHandler @ 036955b8 */
                  if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar4,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._removeBtn;
                    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                      pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick;
                      pUVar4 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar4,(MethodInfo *)0x0);
                        pUVar2 = (__this->fields)._moveM1Btn;
                        if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                          pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick;
                          pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 03695548 to 0379556b has its CatchHandler @ 036955a8 */
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener
                                      (pUVar6,pUVar4,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields)._moveP1Btn;
                            if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 03695578 to 0379557f has its CatchHandler @ 0369564c */
                              pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick
                              ;
                              pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 03695588 to 0379558b has its CatchHandler @ 036955b4 */
                    /* try { // try from 03695590 to 03795593 has its CatchHandler @ 036955b0 */
                              UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 03695598 to 037955a3 has its CatchHandler @ 036955ac */
                              if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 036955a4 to 037955c7 has its CatchHandler @ 036953ac */
                    /* catch() { ... } // from try @ 03695548 with catch @ 036955a8 */
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar6,pUVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03695598 with catch @ 036955ac */
                                pUVar2 = (__this->fields)._selectScrollBtn;
                    /* catch() { ... } // from try @ 03695590 with catch @ 036955b0 */
                                if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                    /* catch() { ... } // from try @ 03695588 with catch @ 036955b4 */
                    /* catch() { ... } // from try @ 036954e4 with catch @ 036955b8 */
                                  pUVar6 = (UnityEngine_Events_UnityEvent_o *)
                                           (pUVar2->fields).m_OnClick;
                                  pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                           thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 036955c8 to 037955cb has its CatchHandler @ 03695634 */
                    /* try { // try from 036955cc to 03795607 has its CatchHandler @ 036953ac */
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar6,pUVar4,(MethodInfo *)0x0);
                                    pUVar2 = (__this->fields)._startContinuousAddBtn;
                                    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                                      pUVar6 = (UnityEngine_Events_UnityEvent_o *)
                                               (pUVar2->fields).m_OnClick;
                                      pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 03695608 to 03795623 has its CatchHandler @ 036956ac */
                                      UnityEngine_Events_UnityAction___ctor();
                                      if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03695624 to 0379562b has its CatchHandler @ 03695648 */
                                        UnityEngine_Events_UnityEvent__AddListener
                                                  (pUVar6,pUVar4,(MethodInfo *)0x0);
                    /* try { // try from 0369562c to 0379562f has its CatchHandler @ 03695644 */
                                        pUVar2 = (__this->fields)._stopContinuousAddBtn;
                    /* try { // try from 03695630 to 0379565f has its CatchHandler @ 036953ac */
                                        if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                    /* catch() { ... } // from try @ 036955c8 with catch @ 03695634 */
                                          pUVar6 = (UnityEngine_Events_UnityEvent_o *)
                                                   (pUVar2->fields).m_OnClick;
                                          pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                                   thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 036954c4 with catch @ 03695640 */
                    /* catch() { ... } // from try @ 0369562c with catch @ 03695644 */
                    /* catch() { ... } // from try @ 03695624 with catch @ 03695648 */
                    /* catch() { ... } // from try @ 03695578 with catch @ 0369564c */
                    /* catch() { ... } // from try @ 036954ac with catch @ 03695650 */
                                          UnityEngine_Events_UnityAction___ctor();
                                          if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03695660 to 03795663 has its CatchHandler @ 03695688 */
                    /* try { // try from 03695664 to 0379568f has its CatchHandler @ 036953ac */
                                            UnityEngine_Events_UnityEvent__AddListener
                                                      (pUVar6,pUVar4,(MethodInfo *)0x0);
                                            pUVar2 = (__this->fields)._snapBtn;
                                            if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                                              pUVar6 = (UnityEngine_Events_UnityEvent_o *)
                                                       (pUVar2->fields).m_OnClick;
                                              pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                                       thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 03695660 with catch @ 03695688 */
                    /* try { // try from 03695690 to 03795697 has its CatchHandler @ 036956ac */
                    /* try { // try from 03695698 to 037956a3 has its CatchHandler @ 036953ac */
                                              UnityEngine_Events_UnityAction___ctor();
                                              if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                              {
                    /* try { // try from 036956a4 to 037956ab has its CatchHandler @ 036956ac */
                    /* catch() { ... } // from try @ 03695608 with catch @ 036956ac
                       catch() { ... } // from try @ 03695690 with catch @ 036956ac
                       catch() { ... } // from try @ 036956a4 with catch @ 036956ac */
                                                UnityEngine_Events_UnityEvent__AddListener
                                                          (pUVar6,pUVar4,(MethodInfo *)0x0);
                                                pUVar2 = (__this->fields)._loopBtn;
                                                if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
                                                  pUVar6 = (UnityEngine_Events_UnityEvent_o *)
                                                           (pUVar2->fields).m_OnClick;
                                                  pUVar4 = (UnityEngine_Events_UnityAction_o *)
                                                           thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)
                                                                0x0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar6,pUVar4,(MethodInfo *)0x0);
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


// ===== private void KMENJMLOABF()  [RVA 0x359590C]
// DebugSimpleScroll$$KMENJMLOABF @ RVA 0x359590C

void DebugSimpleScroll__KMENJMLOABF(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  DebugSimpleScroll__JJONOCGMEMK(__this,-1,in_x2);
  return;
}


// ===== public void .ctor()  [RVA 0x359594C]
// DebugSimpleScroll$$.ctor @ RVA 0x359594C

void DebugSimpleScroll___ctor(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  (__this->fields)._ease = 8;
  (__this->fields)._move1Time = 0.7;
  (__this->fields)._continuousAddDelay = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private SimpleScroll CKPKMBBIMOP()  [RVA 0x35950A8]
// DebugSimpleScroll$$CKPKMBBIMOP @ RVA 0x35950A8

Nekki_SF2_GUI_SimpleScroll_o *
DebugSimpleScroll__CKPKMBBIMOP(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04568d9a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__);
    DAT_04568d9a = 1;
  }
  __this_00 = (__this->fields).ScrollItems;
  if ((__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this->fields).ALCCHKDCBEN,
                          Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__
                         ), pIVar1 != (Il2CppObject *)0x0)) {
    return pIVar1[1].monitor;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFENGGKOJDO()  [RVA 0x3595968]
// DebugSimpleScroll$$LFENGGKOJDO @ RVA 0x3595968

void DebugSimpleScroll__LFENGGKOJDO(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  System_String_o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar6;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar7;
  UnityEngine_Object_o *__this_00;
  uint uVar8;
  int local_34;
  
  if ((DAT_04568d9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<BaseScrollItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_171/*"  "*/);
    FUN_01bab630(&StringLiteral_18911/*"id"*/);
    FUN_01bab630(&StringLiteral_645/*"# "*/);
    DAT_04568d9b = 1;
    method = extraout_x1;
  }
  pNVar7 = (__this->fields)._scrollItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pNVar7 = (Nekki_SF2_GUI_BaseScrollItem_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar7,Method_UnityEngine_Object_Instantiate<BaseScrollItem>__
                     );
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_00);
  if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (lVar6 = *(long *)&(pNVar3->fields)._snapEase, lVar6 != 0)) {
    local_34 = *(int *)(lVar6 + 0x18) + 1;
    pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_171/*"  "*/,pSVar4,(MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pNVar7,pSVar4,(MethodInfo *)0x0);
      pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_01);
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__AddItem(pNVar3,pNVar7,true,(MethodInfo *)0x0);
        pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pNVar7,
                            Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar1 = (uint)pSVar5->max_length;
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              __this_00 = (UnityEngine_Object_o *)pSVar5->m_Items[(int)uVar8];
              if ((__this_00 == (UnityEngine_Object_o *)0x0) ||
                 (pSVar4 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
                 pSVar4 == (System_String_o *)0x0)) goto LAB_03695b64;
              pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18911/*"id"*/,(MethodInfo *)0x0);
              if (bVar2) {
                pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                pSVar4 = System_String__Concat(StringLiteral_645/*"# "*/,pSVar4,(MethodInfo *)0x0);
                (*__this_00->klass[4]._1.gc_desc)(__this_00,pSVar4,__this_00->klass[4]._1.name);
              }
              uVar1 = (uint)pSVar5->max_length;
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          return;
        }
      }
    }
  }
LAB_03695b64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DHLFPKECJCF()  [RVA 0x3595798]
// DebugSimpleScroll$$DHLFPKECJCF @ RVA 0x3595798

void DebugSimpleScroll__DHLFPKECJCF(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Action_DebugSimpleScroll_ScrollItem__o **ppSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *pSVar6;
  System_Action_DebugSimpleScroll_ScrollItem__o *action;
  
  if ((DAT_04568d9c & 1) == 0) {
    FUN_01bab630(&System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__);
    FUN_01bab630(&Method_DebugSimpleScroll_<>c_HLHKOPBGNBE__);
    FUN_01bab630(&DebugSimpleScroll_<>c_TypeInfo);
    DAT_04568d9c = 1;
    method = extraout_x1;
  }
  pSVar6 = (__this->fields).ScrollItems;
  iVar1 = (__this->fields).ALCCHKDCBEN + 1;
  (__this->fields).ALCCHKDCBEN = iVar1;
  if (pSVar6 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
    iVar2 = (pSVar6->fields)._size;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    (__this->fields).ALCCHKDCBEN = iVar1 - iVar3 * iVar2;
    if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    action = DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__34_0;
    if (action == (System_Action_DebugSimpleScroll_ScrollItem__o *)0x0) {
      if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
      }
      action = (System_Action_DebugSimpleScroll_ScrollItem__o *)
               thunk_FUN_01bda818(System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__34_0;
      *ppSVar4 = action;
      thunk_FUN_01c20e04(ppSVar4,action);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar6,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    pSVar6 = (__this->fields).ScrollItems;
    if (((pSVar6 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) &&
        (pIVar5 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             (__this->fields).ALCCHKDCBEN,
                             Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__
                            ), pIVar5 != (Il2CppObject *)0x0)) &&
       (pIVar5[1].klass != (Il2CppClass *)0x0)) {
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)pIVar5[1].klass,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DKCJBAGGHEK()  [RVA 0x3595B6C]
// DebugSimpleScroll$$DKCJBAGGHEK @ RVA 0x3595B6C

void DebugSimpleScroll__DKCJBAGGHEK(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  int iVar1;
  
  iVar1 = 5;
  do {
    DebugSimpleScroll__LFENGGKOJDO(__this,method);
    iVar1 = iVar1 + -1;
    method = extraout_x1;
  } while (iVar1 != 0);
  return;
}


// ===== private void AELEBOMBMDL()  [RVA 0x3595B98]
// DebugSimpleScroll$$AELEBOMBMDL @ RVA 0x3595B98

void DebugSimpleScroll__AELEBOMBMDL(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  int iVar1;
  
  iVar1 = 10;
  do {
    DebugSimpleScroll__LFENGGKOJDO(__this,method);
    iVar1 = iVar1 + -1;
    method = extraout_x1;
  } while (iVar1 != 0);
  return;
}


// ===== private void DKPCBGDEOKA()  [RVA 0x3595BC4]
// DebugSimpleScroll$$DKPCBGDEOKA @ RVA 0x3595BC4

void DebugSimpleScroll__DKPCBGDEOKA(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  float fVar10;
  
  if ((DAT_04568d9d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DebugSimpleScroll_LFENGGKOJDO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568d9d = 1;
    method = extraout_x1;
  }
  DebugSimpleScroll__GEHOLGHDEOP(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar2->klass;
  fVar10 = (__this->fields)._continuousAddDelay;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + (*piVar8 + 3);
        goto LAB_03695cb4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,3);
LAB_03695cb4:
  pSVar5 = (System_Collections_IEnumerator_o *)
           (*pVVar4->methodPtr)((ulong)(uint)fVar10,pPVar2,uVar3,1,pVVar4->method);
  ppSVar9 = &(__this->fields).BBKNKHOJFOG;
  *ppSVar9 = pSVar5;
  thunk_FUN_01c20e04(ppSVar9,pSVar5);
  return;
}


// ===== private void GEHOLGHDEOP()  [RVA 0x3595CF0]
// DebugSimpleScroll$$GEHOLGHDEOP @ RVA 0x3595CF0

void DebugSimpleScroll__GEHOLGHDEOP(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04568d9e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568d9e = 1;
  }
  ppSVar7 = &(__this->fields).BBKNKHOJFOG;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03695d9c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03695d9c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void JJONOCGMEMK(int MJBMLNKAPGC)  [RVA 0x3595914]
// DebugSimpleScroll$$JJONOCGMEMK @ RVA 0x3595914

void DebugSimpleScroll__JJONOCGMEMK
               (DebugSimpleScroll_o *__this,int32_t MJBMLNKAPGC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = DebugSimpleScroll__CKPKMBBIMOP(__this,(MethodInfo *)(ulong)(uint)MJBMLNKAPGC);
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems
              (__this_00,MJBMLNKAPGC,(__this->fields)._move1Time,(__this->fields)._ease,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLCEJFDGOKG()  [RVA 0x3595DC8]
// DebugSimpleScroll$$OLCEJFDGOKG @ RVA 0x3595DC8

void DebugSimpleScroll__OLCEJFDGOKG(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  System_Action_DebugSimpleScroll_ScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  System_Action_DebugSimpleScroll_ScrollItem__o *action;
  
  if ((DAT_04568d9f & 1) == 0) {
    FUN_01bab630(&System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    FUN_01bab630(&Method_DebugSimpleScroll_<>c_DOPKNGACNIE__);
    FUN_01bab630(&DebugSimpleScroll_<>c_TypeInfo);
    DAT_04568d9f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).ScrollItems;
  if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__32_0;
  if (action == (System_Action_DebugSimpleScroll_ScrollItem__o *)0x0) {
    if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    }
    action = (System_Action_DebugSimpleScroll_ScrollItem__o *)
             thunk_FUN_01bda818(System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__32_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLHIMOOJEKP()  [RVA 0x3595ECC]
// DebugSimpleScroll$$OLHIMOOJEKP @ RVA 0x3595ECC

void DebugSimpleScroll__OLHIMOOJEKP(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  DebugSimpleScroll__JJONOCGMEMK(__this,1,in_x2);
  return;
}

