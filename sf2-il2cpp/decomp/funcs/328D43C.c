// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEKFBGKOIPA @ RVA 0x328D43C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool IEHEOHDHKAI,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  Il2CppObject *item;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *__this_00;
  System_Predicate_DILGLGMKOFG__o **ppSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *__this_02;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar6;
  System_Predicate_DILGLGMKOFG__o *match;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o **ppNVar7;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 0338d470 to 0348d47b has its CatchHandler @ 0338cf50 */
  if ((DAT_045672f2 & 1) == 0) {
                    /* try { // try from 0338d47c to 0348d483 has its CatchHandler @ 0338d484 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_EJBJGMCAION__);
                    /* catch() { ... } // from try @ 0338d400 with catch @ 0338d484
                       catch() { ... } // from try @ 0338d47c with catch @ 0338d484 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_MCJOKGKOPGG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_NAJCALMKONE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_GFOHJAFJIHP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672f2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_TypeInfo);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) {
                    /* try { // try from 0338d59c to 0348d673 has its CatchHandler @ 0338d59c
                       catch() { ... } // from try @ 0338d59c with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d6b0 with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d6dc with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d704 with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d744 with catch @ 0338d59c */
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    (__this_00->fields).needReload = IEHEOHDHKAI;
    pSVar6 = (__this->fields).HPJNLAOAJJE;
    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__74_0;
    if (match == (System_Predicate_DILGLGMKOFG__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_DILGLGMKOFG__o *)
              thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__74_0;
      *ppSVar4 = match;
      thunk_FUN_01c20e04(ppSVar4,match);
    }
    if ((pSVar6 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
       (__this_01 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List<object>__FindAll
                              ((System_Collections_Generic_List_object__o *)pSVar6,
                               (System_Predicate_T__o *)match,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__),
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      if (0 < (__this_01->fields)._size) {
                    /* try { // try from 0338d674 to 0348d67b has its CatchHandler @ 0338d6e8 */
        __this_02 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *)
                    thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_TypeInfo);
        Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 == (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *)0x0)
        goto LAB_0338d8c8;
        ppNVar7 = &(__this_02->fields).CS___8__locals1;
                    /* try { // try from 0338d6a4 to 0348d6af has its CatchHandler @ 0338d6e0 */
                    /* try { // try from 0338d6b0 to 0348d6d7 has its CatchHandler @ 0338d59c */
        *ppNVar7 = __this_00;
        thunk_FUN_01c20e04(ppNVar7,__this_00);
        (__this_02->fields).index = 0;
                    /* try { // try from 0338d6d8 to 0348d6db has its CatchHandler @ 0338d6e4 */
                    /* try { // try from 0338d6dc to 0348d6ff has its CatchHandler @ 0338d59c */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this_01,
                   Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d6a4 with catch @ 0338d6e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d6d8 with catch @ 0338d6e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d674 with catch @ 0338d6e8
                        */
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__
                                 ), item = local_80.fields._current, bVar2) {
                    /* try { // try from 0338d700 to 0348d703 has its CatchHandler @ 0338d72c */
          pSVar6 = (__this->fields).HPJNLAOAJJE;
                    /* try { // try from 0338d704 to 0348d73b has its CatchHandler @ 0338d59c */
          if (pSVar6 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             local_80.fields._current,
                             Method_System_Collections_Generic_List<DILGLGMKOFG>_IndexOf__);
          (__this_02->fields).index = iVar3;
          pSVar6 = (__this->fields).HPJNLAOAJJE;
          if (pSVar6 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 0338d700 with catch @ 0338d72c */
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar6,item,
                     Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
        }
                    /* try { // try from 0338d73c to 0348d743 has its CatchHandler @ 0338d758 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
                    /* try { // try from 0338d744 to 0348d74f has its CatchHandler @ 0338d59c */
        pNVar8 = (__this->fields).NAJKNFGDGGI;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0338d750 to 0348d757 has its CatchHandler @ 0338d758 */
          thunk_FUN_01ba7564();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338d73c with catch @ 0338d758
                       catch(type#2 @ 00000000) { ... } // from try @ 0338d750 with catch @ 0338d758
                        */
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          ppDVar1 = &(__this->fields).AJFGBJDEEIJ;
          (__this->fields).AJFGBJDEEIJ = pDVar5;
          thunk_FUN_01c20e04(ppDVar1,pDVar5);
          pDVar5 = (__this->fields).AJFGBJDEEIJ;
          getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOGetter<Vector3>___ctor();
          setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOSetter<Vector3>___ctor();
          t = DG_Tweening_DOTween__To
                        (getter,setter,(UnityEngine_Vector3_o)ZEXT412(0),1.5,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          pNVar8 = (__this->fields).NAJKNFGDGGI;
          if (pNVar8 == (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) goto LAB_0338d8c8;
          pDVar5 = *ppDVar1;
          t_00 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((UnityEngine_UI_Image_o *)(pNVar8->fields).super.SlotImage,0.0,1.5,
                            (MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Join
                    (pDVar5,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          pDVar5 = *ppDVar1;
          callback = (DG_Tweening_TweenCallback_o *)
                     thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar5,callback,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
LAB_0338d8c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

