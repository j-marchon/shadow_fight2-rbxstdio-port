// NCNJEIBHGBH$$CHNLGNGBPIN @ RVA 0x32F24F4

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__CHNLGNGBPIN
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,HOOAAGABMBL_o *IHGFKLOLPOK,
          NMAHEBEALAB_o *ABAGBODPCCP,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  FKNCNNOOOIO_o *__this_02;
  int64_t iVar2;
  System_String_o **ppSVar3;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Map_MapButton_o *__this_04;
  LIDDCJFOOOI_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_06;
  long lVar6;
  
  if ((DAT_0456768f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HNOMJLNDEOJ_FEENPOLEPPJ__);
    FUN_01bab630(&NCNJEIBHGBH_HNOMJLNDEOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
    FUN_01bab630(&StringLiteral_16223);
    DAT_0456768f = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NCNJEIBHGBH_HNOMJLNDEOJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  __this_01 = (__this->fields).PAFEHLCLKEC;
  if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this_01->fields)._size;
  *(uint *)&__this_00[1].monitor = uVar1;
  lVar6 = Method_System_Collections_Generic_List<string>_Add__;
  if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
  pSVar5 = (__this_01->fields)._items;
  (__this_01->fields)._version = (__this_01->fields)._version + 1;
  if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar1 < (uint)pSVar5->max_length) {
    (__this_01->fields)._size = uVar1 + 1;
    pSVar5->m_Items[(int)uVar1] = pSVar4;
    thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar4,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  pSVar4 = System_String__Concat
                     (StringLiteral_12931,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,
                      StringLiteral_16223,(MethodInfo *)0x0);
  __this_02 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this_02->fields).AIDMEFDEOLJ = 2;
  if (ABAGBODPCCP == (NMAHEBEALAB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar6 = (ABAGBODPCCP->fields).ALLCFABAGOB;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
  (__this_02->fields).ALLCFABAGOB = lVar6 - iVar2;
  (__this_02->fields).JIJLBFGKNJK = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
  thunk_FUN_01c20e04();
  ppSVar3 = &(__this_02->fields).KPDPJONADPJ;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
                    /* try { // try from 033f26fc to 034f2a9b has its CatchHandler @ 033f26fc
                       catch() { ... } // from try @ 033f26fc with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2b44 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2b74 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2f4c with catch @ 033f26fc
                       catch() { ... } // from try @ 033f30c0 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f30d0 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f3124 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f3170 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f321c with catch @ 033f26fc */
  (__this_02->fields).OEFBIKEMBOF = true;
  (__this_02->fields).JHFAAGIPDAJ = (IHGFKLOLPOK->fields)._KNNLLCNGLGO_k__BackingField;
  thunk_FUN_01c20e04();
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_03 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)KCAHJMFOIAG,
                         Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    __this_04 = (Nekki_SF2_GUI_Map_MapButton_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (__this_03,Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    if (__this_04 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_04,__this_02,(MethodInfo *)0x0);
    __this_05 = (__this->fields).GNMGOPAABKE;
    if (__this_05 != (LIDDCJFOOOI_o *)0x0) {
      LIDDCJFOOOI__GFECOLFOILC(__this_05,__this_04,true,(MethodInfo *)0x0);
      __this_06 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_06 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_06,call,(MethodInfo *)0x0);
        return __this_04;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

