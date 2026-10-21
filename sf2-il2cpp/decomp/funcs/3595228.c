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

