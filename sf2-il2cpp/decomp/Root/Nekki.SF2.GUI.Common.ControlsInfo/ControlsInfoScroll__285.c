// TypeDefIndex 285
// Namespace: Nekki.SF2.GUI.Common.ControlsInfo
// public class ControlsInfoScroll : UIModule
// Fields:
//   private HorizontalLayoutGroup _TabsLayout; // 0x28
//   private GameObject _TabPrefab; // 0x30
//   private List<ControlsInfoCategoryTab> HCJLLBHBLBE; // 0x38
//   private ControlsInfoCategoryTab PDGBIIFJGDO; // 0x40
//   private List<ControlsInfoCategoryContent> GJACCPEHHFL; // 0x48

// ===== private void BDGMIPJPICN(ControlsInfoCategoryTab BCJJJBOCPJJ)  [RVA 0x3234D80]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BDGMIPJPICN @ RVA 0x3234D80

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,
               Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN(__this,BCJJJBOCPJJ,true,in_x3);
  return;
}


// ===== private void EKFHHAGJBFB()  [RVA 0x3234F9C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$EKFHHAGJBFB @ RVA 0x3234F9C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EKFHHAGJBFB
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
  if ((DAT_04567019 & 1) == 0) {
    FUN_01bab630(&
                 Method_UnityEngine_Component_GetComponentsInChildren<ControlsInfoCategoryContent>__
                );
    auVar1 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_Clear__
                         );
    DAT_04567019 = 1;
  }
  result = (__this->fields).GJACCPEHHFL;
  if (result != (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields).GJACCPEHHFL;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<ControlsInfoCategoryContent>__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}


// ===== protected override void BJBEBBGINAH()  [RVA 0x323502C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BJBEBBGINAH @ RVA 0x323502C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BJBEBBGINAH
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0456701a & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    DAT_0456701a = 1;
  }
  Nekki_SF2_GUI_UIModule__BJBEBBGINAH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  ENCPFKDEPJB__CCOOIIPKJNI(1,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 1;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        local_38 = 1;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MNKFDLHJPAA(FEEECOADFNH AEIKGKKKFMM)  [RVA 0x3235198]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$MNKFDLHJPAA @ RVA 0x3235198

bool Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t AEIKGKKKFMM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *__this_00;
  
  if ((DAT_0456701b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456701b = 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
              Nekki_SF2_GUI_UIModule__GetModule<object>
                        (Method_Nekki_SF2_GUI_UIModule_GetModule<HintList>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333521c to 034352ef has its CatchHandler @ 0333521c
                       catch() { ... } // from try @ 0333521c with catch @ 0333521c
                       catch() { ... } // from try @ 033353e0 with catch @ 0333521c
                       catch() { ... } // from try @ 03335498 with catch @ 0333521c
                       catch() { ... } // from try @ 033354a0 with catch @ 0333521c
                       catch() { ... } // from try @ 03335560 with catch @ 0333521c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive
                      (__this_00,AEIKGKKKFMM,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BDGMIPJPICN(ControlsInfoCategoryTab BCJJJBOCPJJ, bool OFKBEIFPFMN)  [RVA 0x3234D88]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BDGMIPJPICN @ RVA 0x3234D88

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,
               Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ,
               bool OFKBEIFPFMN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o **ppNVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *x;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456701c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_GetEnumerator__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456701c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  ppNVar3 = &(__this->fields).PDGBIIFJGDO;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0)
    goto LAB_03334f20;
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Unselect(*ppNVar3,(MethodInfo *)0x0);
  }
  *ppNVar3 = BCJJJBOCPJJ;
  thunk_FUN_01c20e04(ppNVar3,BCJJJBOCPJJ);
  if (*ppNVar3 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Select
              (*ppNVar3,OFKBEIFPFMN,(MethodInfo *)0x0);
    __this_00 = (__this->fields).GJACCPEHHFL;
    if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_GetEnumerator__
                );
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_Dispose__
                    );
          return;
        }
        if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0
                              );
        if (*ppNVar3 == (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive
                  (__this_01,
                   *(int *)&((UnityEngine_Component_o *)((long)pIVar1 + 0x18))->monitor ==
                   ((*ppNVar3)->fields)._Category,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_03334f20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FBFDADNNGKI()  [RVA 0x3235268]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$FBFDADNNGKI @ RVA 0x3235268

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__FBFDADNNGKI
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456701d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    DAT_0456701d = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HCJLLBHBLBE;
  if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
                    /* try { // try from 033352f0 to 03435317 has its CatchHandler @ 033354c4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__)
    ;
    pSVar2 = (__this->fields).HCJLLBHBLBE;
    if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      length = (pSVar2->fields)._size;
                    /* try { // try from 0333534c to 03435377 has its CatchHandler @ 033354c0 */
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ODEBFIFHLBF(MHMFGIIOGBA NMLPMBCLOHA)  [RVA 0x32353F8]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$ODEBFIFHLBF @ RVA 0x32353F8

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__ODEBFIFHLBF
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t NMLPMBCLOHA,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *call;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_02;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_array *pNVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_04;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_0456701e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_BDGMIPJPICN__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ControlsInfoCategoryTab>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ControlsInfoCategoryTab>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_AddListener__);
    DAT_0456701e = 1;
  }
  if (NMLPMBCLOHA != -1) {
                    /* try { // try from 03335488 to 0343548f has its CatchHandler @ 033354c8 */
    pUVar4 = (__this->fields)._TabPrefab;
                    /* try { // try from 03335490 to 03435493 has its CatchHandler @ 033354bc */
                    /* try { // try from 03335494 to 03435497 has its CatchHandler @ 033354b8 */
                    /* try { // try from 03335498 to 0343549b has its CatchHandler @ 0333521c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333549c to 0343549f has its CatchHandler @ 033354a8 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033354a0 to 034354df has its CatchHandler @ 0333521c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333549c with catch @ 033354a8
                        */
    pUVar4 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353d0 with catch @ 033354ac
                        */
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353b4 with catch @ 033354b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353c0 with catch @ 033354b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335494 with catch @ 033354b8
                        */
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335490 with catch @ 033354bc
                        */
      __this_03 = (__this->fields)._TabsLayout;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333534c with catch @ 033354c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033352f0 with catch @ 033354c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335488 with catch @ 033354c8
                        */
      if ((__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 033354e0 to 034354e3 has its CatchHandler @ 033354f0 */
                    /* catch() { ... } // from try @ 033354e0 with catch @ 033354f0 */
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
                    /* try { // try from 033354f8 to 0343555f has its CatchHandler @ 03335574 */
        __this_01 = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar4,
                               Method_UnityEngine_GameObject_GetComponent<ControlsInfoCategoryTab>__
                              );
        if (__this_01 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
          Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__set_Category
                    (__this_01,NMLPMBCLOHA,(MethodInfo *)0x0);
          __this_04 = (__this_01->fields)._OnClicked;
          call = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ControlsInfoCategoryTab>_TypeInfo
                                   );
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_04 !=
              (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_04,call,
                       Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_AddListener__);
            lVar2 = Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Add__;
                    /* try { // try from 03335560 to 0343556b has its CatchHandler @ 0333521c */
            __this_02 = (__this->fields).HCJLLBHBLBE;
            if (__this_02 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
                    /* try { // try from 0333556c to 03435573 has its CatchHandler @ 03335574 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033354f8 with catch @ 03335574
                       catch(type#2 @ 00000000) { ... } // from try @ 0333556c with catch @ 03335574
                        */
              pNVar3 = (__this_02->fields)._items;
              (__this_02->fields)._version = (__this_02->fields)._version + 1;
              if (pNVar3 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_array *)0x0)
              {
                uVar1 = (__this_02->fields)._size;
                if (uVar1 < (uint)pNVar3->max_length) {
                  (__this_02->fields)._size = uVar1 + 1;
                  pNVar3->m_Items[(int)uVar1] = __this_01;
                  thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
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


// ===== private void EIOBMJIMBPM()  [RVA 0x32355F4]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$EIOBMJIMBPM @ RVA 0x32355F4

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EIOBMJIMBPM
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  
  if ((DAT_0456701d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    DAT_0456701d = 1;
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HCJLLBHBLBE;
  if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&SStack_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&SStack_38,
                              Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)SStack_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)SStack_38.fields._current,
                               (MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&SStack_38,
               Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__)
    ;
    pSVar2 = (__this->fields).HCJLLBHBLBE;
    if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x32355F8]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$GKHAKLDEIJI @ RVA 0x32355F8

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  method_02 = (MethodInfo *)(ulong)(uint)OPHMGAKOJLP;
  if (AAJGEHHPMGH == 1) {
    bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA(__this,500,method_02);
    if (!bVar1) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else if (AAJGEHHPMGH == 0x15) {
    bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA
                      (__this,0x1f9,method_02);
    if (!bVar1) {
      Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BKPCNIBCIJD(__this,method_01);
      return;
    }
  }
  else if ((AAJGEHHPMGH == 0x13) &&
          (bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA
                             (__this,0x1f9,method_02), !bVar1)) {
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EODGBHJEKCE(__this,method_00);
    return;
  }
  return;
}


// ===== private void BKPCNIBCIJD()  [RVA 0x323571C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BKPCNIBCIJD @ RVA 0x323571C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BKPCNIBCIJD
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ;
  MethodInfo *in_x3;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar4;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  
  if ((DAT_0456701f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__);
    DAT_0456701f = 1;
  }
  __this_00 = (__this->fields).HCJLLBHBLBE;
  if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
    iVar3 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)(__this->fields).PDGBIIFJGDO,
                       Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    pSVar4 = (__this->fields).HCJLLBHBLBE;
    if (pSVar4 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar3 + 1) / iVar1;
      }
      BCJJJBOCPJJ = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (iVar3 + 1) - iVar2 * iVar1,
                               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__
                              );
      Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
                (__this,BCJJJBOCPJJ,true,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EODGBHJEKCE()  [RVA 0x323566C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$EODGBHJEKCE @ RVA 0x323566C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EODGBHJEKCE
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ;
  MethodInfo *in_x3;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar5;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  
  if ((DAT_04567020 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__);
    DAT_04567020 = 1;
  }
  __this_00 = (__this->fields).HCJLLBHBLBE;
  if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
    iVar4 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)(__this->fields).PDGBIIFJGDO,
                       Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    pSVar5 = (__this->fields).HCJLLBHBLBE;
    if (pSVar5 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      iVar1 = (pSVar5->fields)._size;
      iVar3 = iVar4 + iVar1 + -1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      BCJJJBOCPJJ = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               iVar3 - iVar2 * iVar1,
                               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__
                              );
      Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
                (__this,BCJJJBOCPJJ,true,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void JHJCCHBOMHP()  [RVA 0x32357C8]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$JHJCCHBOMHP @ RVA 0x32357C8

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__JHJCCHBOMHP
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04567021 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    DAT_04567021 = 1;
  }
  Nekki_SF2_GUI_UIModule__JHJCCHBOMHP((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          ENCPFKDEPJB__EAJCLBBOBDH(1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x32358E4]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$GIENGNEGHPJ @ RVA 0x32358E4

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__FBFDADNNGKI(__this,method_00);
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EKFHHAGJBFB(__this,method_01);
  return;
}


// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x3235908]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BEBGOPNMHON @ RVA 0x3235908

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x323590C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$.ctor @ RVA 0x323590C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll___ctor
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o **ppSVar1;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *__this_01;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567022 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryContent>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ControlsInfoCategoryContent>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ControlsInfoCategoryTab>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567022 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ControlsInfoCategoryTab>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ControlsInfoCategoryTab>__ctor__);
  ppSVar1 = &(__this->fields).HCJLLBHBLBE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<ControlsInfoCategoryContent>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ControlsInfoCategoryContent>__ctor__);
  ppSVar2 = &(__this->fields).GJACCPEHHFL;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3235A0C]
// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$CLNAOMIIBLH @ RVA 0x3235A0C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

