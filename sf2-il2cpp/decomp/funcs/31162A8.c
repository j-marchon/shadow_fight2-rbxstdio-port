// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable.PPBEIEICMNF$$MoveNext @ RVA 0x31162A8

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF_o *__this,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  byte bVar3;
  bool bVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar5;
  System_Collections_Generic_List_DPDNFOCBGGD__o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar6;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this_02;
  System_Action_IDGOGBNEGAM__o *pSVar7;
  System_Action_RectTransform__string__o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_c *pNVar10;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_03;
  Il2CppObject **ppIVar11;
  DPDNFOCBGGD_o *DKMMBMBMJBO;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_T__o *local_90;
  int32_t iStack_88;
  int32_t iStack_84;
  DPDNFOCBGGD_o *local_80;
  undefined8 local_78;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF_o **ppNStack_70;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF_o *local_68;
  
  local_68 = __this;
  if ((DAT_045665b8 & 1) == 0) {
                    /* try { // try from 032162e0 to 033163eb has its CatchHandler @ 032162e0
                       catch() { ... } // from try @ 032162e0 with catch @ 032162e0
                       catch() { ... } // from try @ 032164b0 with catch @ 032162e0
                       catch() { ... } // from try @ 032164dc with catch @ 032162e0
                       catch() { ... } // from try @ 0321657c with catch @ 032162e0
                       catch() { ... } // from try @ 0321662c with catch @ 032162e0
                       catch() { ... } // from try @ 03216678 with catch @ 032162e0
                       catch() { ... } // from try @ 032166c0 with catch @ 032162e0
                       catch() { ... } // from try @ 032166e8 with catch @ 032162e0
                       catch() { ... } // from try @ 03216728 with catch @ 032162e0 */
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_get_Current__);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_CHCADLEFDHN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_DFNDNMLDABJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_IOAHHMFLNOL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_KCEMINEPNDF__);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_01bab630(&StringLiteral_8943);
    FUN_01bab630(&StringLiteral_8944);
    DAT_045665b8 = 1;
    method = extraout_x1;
  }
  ppNStack_70 = &local_68;
  local_78 = 0;
  iVar1 = (__this->fields).__1__state;
  __this_03 = (__this->fields).__4__this;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
                    /* try { // try from 032163ec to 033163f3 has its CatchHandler @ 03216658 */
      __this = local_68;
    }
    iVar2 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
    (__this->fields)._isEven_5__4 = false;
    (__this->fields)._hasDelayed_5__5 = false;
    (__this->fields)._portion_5__2 = iVar2;
    (__this->fields)._counter_5__3 = 0;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
                    /* try { // try from 03216410 to 03316417 has its CatchHandler @ 03216644 */
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar5 = &(local_68->fields)._delay_5__6;
    *ppUVar5 = __this_00;
                    /* try { // try from 0321642c to 03316433 has its CatchHandler @ 032164c4 */
    thunk_FUN_01c20e04(ppUVar5,__this_00);
    if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (__this_03->fields).EHNBACPAECJ;
    if (__this_01 == (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03216448 to 03316453 has its CatchHandler @ 032164c0 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
                    /* try { // try from 0321645c to 03316463 has its CatchHandler @ 032164b8 */
    iStack_88 = local_a8.fields._index;
    iStack_84 = local_a8.fields._version;
    local_90 = local_a8.fields._list;
    local_80 = (DPDNFOCBGGD_o *)local_a8.fields._current;
    (local_68->fields).__7__wrap6.fields._current = (DPDNFOCBGGD_o *)local_a8.fields._current;
                    /* try { // try from 03216470 to 03316477 has its CatchHandler @ 032164b4 */
    (local_68->fields).__7__wrap6.fields._index = local_a8.fields._index;
    (local_68->fields).__7__wrap6.fields._version = local_a8.fields._version;
    (local_68->fields).__7__wrap6.fields._list = local_a8.fields._list;
    thunk_FUN_01c20e04(&(local_68->fields).__7__wrap6,0);
    __this = local_68;
  }
  (__this->fields).__1__state = -3;
                    /* try { // try from 0321648c to 03316493 has its CatchHandler @ 03216654 */
                    /* try { // try from 032164ac to 033164af has its CatchHandler @ 032164bc */
                    /* try { // try from 032164b0 to 033164d7 has its CatchHandler @ 032162e0 */
                    /* catch() { ... } // from try @ 03216470 with catch @ 032164b4 */
                    /* catch() { ... } // from try @ 0321645c with catch @ 032164b8 */
                    /* catch() { ... } // from try @ 032164ac with catch @ 032164bc */
                    /* catch() { ... } // from try @ 03216448 with catch @ 032164c0 */
                    /* catch() { ... } // from try @ 0321642c with catch @ 032164c4 */
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)
                       &(__this->fields).__7__wrap6,
                       Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__);
                    /* try { // try from 032164d8 to 033164db has its CatchHandler @ 03216630 */
                    /* try { // try from 032164dc to 0331652f has its CatchHandler @ 032162e0 */
    if (!bVar4) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF__EFDDMENDCDI
                (local_68,method_00);
      (local_68->fields).__7__wrap6.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (local_68->fields).__7__wrap6.fields._index = 0;
      (local_68->fields).__7__wrap6.fields._version = 0;
      (local_68->fields).__7__wrap6.fields._current = (DPDNFOCBGGD_o *)0x0;
      if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN(__this_03,method_01);
      if ((local_68->fields)._hasDelayed_5__5 == false) {
        pNVar6 = (__this_03->fields).PDHMLFAMNCO;
        if (pNVar6 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
                  (pNVar6,(__this_03->fields).NEOEPOAJBFE.fields.value,(MethodInfo *)0x0);
      }
      (__this_03->fields).NEOEPOAJBFE.fields = (System_Nullable_float__Fields)0x0;
      return false;
    }
    DKMMBMBMJBO = (local_68->fields).__7__wrap6.fields._current;
    if (DKMMBMBMJBO == (DPDNFOCBGGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (DKMMBMBMJBO->fields)._EKGDGCHMLME_k__BackingField;
    if (iVar1 == 0) {
      if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar6 = (__this_03->fields).PDHMLFAMNCO;
      if (pNVar6 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03216550 to 03316557 has its CatchHandler @ 032166c8 */
      __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (pNVar6,false,StringLiteral_8943,(MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) break;
      pNVar10 = __this_02->klass;
                    /* try { // try from 03216560 to 03316567 has its CatchHandler @ 03216640 */
      pIVar9 = (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo;
    }
    else {
      if (iVar1 != 1) break;
      if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar6 = (__this_03->fields).PDHMLFAMNCO;
      if (pNVar6 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (pNVar6,false,StringLiteral_8944,(MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) break;
      pNVar10 = __this_02->klass;
      pIVar9 = (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_TypeInfo;
                    /* try { // try from 03216530 to 03316537 has its CatchHandler @ 032166cc */
    }
    bVar3 = (pIVar9->_2).naturalAligment;
    if ((pNVar10->_2).naturalAligment < bVar3) break;
    if ((pNVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar9) {
      __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0;
    }
    if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) break;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell__SetInfo
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell_o *)__this_02,DKMMBMBMJBO,
               __this_03,(MethodInfo *)0x0);
    if ((DKMMBMBMJBO->fields)._EKGDGCHMLME_k__BackingField == 0) {
      (local_68->fields)._isEven_5__4 = (bool_conflict)((local_68->fields)._isEven_5__4 ^ 1);
      bVar3 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo->_2).naturalAligment
      ;
      if (((__this_02->klass->_2).naturalAligment < bVar3) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_02);
      }
                    /* try { // try from 03216600 to 03316613 has its CatchHandler @ 0321673c */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
                    /* try { // try from 03216614 to 03316617 has its CatchHandler @ 032166c4 */
      if (bVar4) {
                    /* try { // try from 03216618 to 0331661b has its CatchHandler @ 032166c0 */
                    /* try { // try from 0321661c to 0331661f has its CatchHandler @ 03216650 */
                    /* try { // try from 03216620 to 03316623 has its CatchHandler @ 0321664c */
                    /* try { // try from 03216624 to 0331662b has its CatchHandler @ 03216648 */
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__SetEven
                  (__this_02,(local_68->fields)._isEven_5__4,(MethodInfo *)0x0);
      }
                    /* try { // try from 0321662c to 03316673 has its CatchHandler @ 032162e0 */
                    /* catch() { ... } // from try @ 032164d8 with catch @ 03216630 */
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
                    /* catch() { ... } // from try @ 03216574 with catch @ 0321663c */
                    /* catch() { ... } // from try @ 03216560 with catch @ 03216640 */
                    /* catch() { ... } // from try @ 03216410 with catch @ 03216644 */
      System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03216624 with catch @ 03216648 */
                    /* catch() { ... } // from try @ 03216620 with catch @ 0321664c */
                    /* catch() { ... } // from try @ 0321661c with catch @ 03216650 */
                    /* catch() { ... } // from try @ 0321648c with catch @ 03216654 */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnKick
                (__this_02,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032163ec with catch @ 03216658 */
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
                    /* try { // try from 03216674 to 03316677 has its CatchHandler @ 0321669c */
                    /* try { // try from 03216678 to 033166ab has its CatchHandler @ 032162e0 */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnKick
                (__this_02,pSVar7,(MethodInfo *)0x0);
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
                    /* catch() { ... } // from try @ 03216674 with catch @ 0321669c */
      System_Action<object>___ctor();
                    /* try { // try from 032166ac to 033166bf has its CatchHandler @ 0321673c */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnRoleUp
                (__this_02,pSVar7,(MethodInfo *)0x0);
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
                    /* catch() { ... } // from try @ 03216618 with catch @ 032166c0
                       try { // try from 032166c0 to 033166e3 has its CatchHandler @ 032162e0 */
                    /* catch() { ... } // from try @ 03216614 with catch @ 032166c4 */
                    /* catch() { ... } // from try @ 03216550 with catch @ 032166c8 */
      System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03216530 with catch @ 032166cc */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnRoleUp
                (__this_02,pSVar7,(MethodInfo *)0x0);
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
                    /* try { // try from 032166e4 to 033166e7 has its CatchHandler @ 03216710 */
                    /* try { // try from 032166e8 to 0331671f has its CatchHandler @ 032162e0 */
      System_Action<object>___ctor();
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnRoleDown
                (__this_02,pSVar7,(MethodInfo *)0x0);
      pSVar7 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
                    /* catch() { ... } // from try @ 032166e4 with catch @ 03216710 */
                    /* try { // try from 03216720 to 03316727 has its CatchHandler @ 0321673c */
      System_Action<object>___ctor();
                    /* try { // try from 03216728 to 03316733 has its CatchHandler @ 032162e0 */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnRoleDown
                (__this_02,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03216734 to 0331673b has its CatchHandler @ 0321673c */
      pSVar8 = (System_Action_RectTransform__string__o *)
               thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
                    /* catch() { ... } // from try @ 03216600 with catch @ 0321673c
                       catch() { ... } // from try @ 032166ac with catch @ 0321673c
                       catch() { ... } // from try @ 03216720 with catch @ 0321673c
                       catch() { ... } // from try @ 03216734 with catch @ 0321673c */
      System_Action<object,_object>___ctor();
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnShowHintRole
                (__this_02,pSVar8,(MethodInfo *)0x0);
      pSVar8 = (System_Action_RectTransform__string__o *)
               thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
      System_Action<object,_object>___ctor();
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__add_OnShowHintRole
                (__this_02,pSVar8,(MethodInfo *)0x0);
    }
    iVar1 = (local_68->fields)._counter_5__3 + 1;
    (local_68->fields)._counter_5__3 = iVar1;
    __this = local_68;
    if ((local_68->fields)._portion_5__2 <= iVar1) {
      (local_68->fields)._hasDelayed_5__5 = true;
                    /* try { // try from 032167b4 to 03316897 has its CatchHandler @ 032167b4
                       catch() { ... } // from try @ 032167b4 with catch @ 032167b4
                       catch() { ... } // from try @ 032168f8 with catch @ 032167b4
                       catch() { ... } // from try @ 03216978 with catch @ 032167b4
                       catch() { ... } // from try @ 032169a0 with catch @ 032167b4
                       catch() { ... } // from try @ 032169d4 with catch @ 032167b4 */
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
      ppIVar11 = &(local_68->fields).__2__current;
      *ppIVar11 = (Il2CppObject *)(local_68->fields)._delay_5__6;
      (local_68->fields)._portion_5__2 = iVar2;
      (local_68->fields)._counter_5__3 = 0;
      thunk_FUN_01c20e04(ppIVar11);
      (local_68->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

