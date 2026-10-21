// TypeDefIndex 1654
// Namespace: Nekki.SF2.GUI.Fight
// public class ActivePerkModel : MonoBehaviour
// Fields:
//   private ActivePerkModel.HPPIGDKEJAN _align; // 0x20
//   private GameObject _activePerkItemPrefab; // 0x28
//   private GameObject _activePerkItemContainerPrefab; // 0x30
//   private Quaternion MKKLGLAFMCB; // 0x38
//   private Vector2 KPGBDEPEHJD; // 0x48
//   private List<ActivePerkItem> DOKOOFIPJGJ; // 0x50
//   private List<ActivePerkItemContainer> MHHBMNPJOOF; // 0x58

// ===== public void RemoveActivePerkItem(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x31C40D4]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$RemoveActivePerkItem @ RVA 0x31C40D4

void Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveActivePerkItem
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB
               ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* catch() { ... } // from try @ 032c4070 with catch @ 032c40d4 */
                    /* catch() { ... } // from try @ 032c3d84 with catch @ 032c40d8 */
                    /* catch() { ... } // from try @ 032c4064 with catch @ 032c40dc */
                    /* catch() { ... } // from try @ 032c3dc0 with catch @ 032c40e0 */
                    /* catch() { ... } // from try @ 032c3dd4 with catch @ 032c40e4 */
                    /* catch() { ... } // from try @ 032c3d74 with catch @ 032c40e8 */
                    /* catch() { ... } // from try @ 032c3d90 with catch @ 032c40ec */
                    /* catch() { ... } // from try @ 032c3e14 with catch @ 032c40f0
                       catch() { ... } // from try @ 032c3f94 with catch @ 032c40f0 */
  if ((DAT_04566c25 & 1) == 0) {
                    /* catch() { ... } // from try @ 032c3cf4 with catch @ 032c40f4 */
                    /* catch() { ... } // from try @ 032c3c98 with catch @ 032c40f8 */
                    /* catch() { ... } // from try @ 032c405c with catch @ 032c40fc
                       catch() { ... } // from try @ 032c4068 with catch @ 032c40fc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
                    /* try { // try from 032c411c to 033c411f has its CatchHandler @ 032c412c */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    DAT_04566c25 = 1;
  }
                    /* catch() { ... } // from try @ 032c411c with catch @ 032c412c */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    __this_00 = (__this->fields).DOKOOFIPJGJ;
                    /* try { // try from 032c413c to 033c41ab has its CatchHandler @ 032c41c0 */
    if (__this_00 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c41b8 to 033c41bf has its CatchHandler @ 032c41c0 */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                        );
      if (!bVar1) goto LAB_032c4198;
      if ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((Nekki_SF2_GUI_Fight_ActivePerkItem_Fields *)((long)local_38.fields._current + 0x10))
             ->_EKIGEJEMNNN_k__BackingField != CPECAEHDDDB);
    Nekki_SF2_GUI_Fight_ActivePerkItem__set_Show
              ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_38.fields._current,false,
               (MethodInfo *)0x0);
LAB_032c4198:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
              );
  }
                    /* try { // try from 032c41ac to 033c41b7 has its CatchHandler @ 032c3b18 */
  return;
}


// ===== public void Render()  [RVA 0x31C4238]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$Render @ RVA 0x31C4238

void Nekki_SF2_GUI_Fight_ActivePerkModel__Render
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItemContainer__o *pSVar1;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  int iVar4;
  
  if ((DAT_04566c26 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Item__);
    DAT_04566c26 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).MHHBMNPJOOF;
  if (pSVar1 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
    iVar4 = 0;
    do {
      if ((pSVar1->fields)._size <= iVar4) {
        pSVar2 = (__this->fields).DOKOOFIPJGJ;
        if (pSVar2 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
          iVar4 = 0;
          goto LAB_032c4338;
        }
        break;
      }
      __this_00 = (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                             Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Item__
                            );
      if (__this_00 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) break;
      Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Render(__this_00,(MethodInfo *)0x0);
      method = extraout_x1_00;
      if ((__this_00->fields)._PBMMCACCKNJ_k__BackingField != false) {
        pSVar1 = (__this->fields).MHHBMNPJOOF;
        if (pSVar1 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                   Method_System_Collections_Generic_List<ActivePerkItemContainer>_RemoveAt__);
        iVar4 = iVar4 + -1;
        method = extraout_x1_01;
      }
      pSVar1 = (__this->fields).MHHBMNPJOOF;
      iVar4 = iVar4 + 1;
    } while (pSVar1 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0);
  }
  goto LAB_032c4380;
  while( true ) {
    pSVar2 = (__this->fields).DOKOOFIPJGJ;
    iVar4 = iVar4 + 1;
    if (pSVar2 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) break;
LAB_032c4338:
    if ((pSVar2->fields)._size <= iVar4) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__HKDMNNDDAEP(__this,method);
      return;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                        Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    if (pIVar3 == (Il2CppObject *)0x0) break;
    method = extraout_x1_02;
    if (*(char *)&pIVar3[4].monitor != '\0') {
      pSVar2 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar2 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) break;
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                 Method_System_Collections_Generic_List<ActivePerkItem>_RemoveAt__);
      iVar4 = iVar4 + -1;
      method = extraout_x1_03;
    }
  }
LAB_032c4380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DestroyAllPerkItems()  [RVA 0x31C45BC]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$DestroyAllPerkItems @ RVA 0x31C45BC

void Nekki_SF2_GUI_Fight_ActivePerkModel__DestroyAllPerkItems
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Action_ActivePerkItem__o **ppSVar2;
  System_Action_ActivePerkItemContainer__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  System_Collections_Generic_List_ActivePerkItemContainer__o *pSVar5;
  System_Action_ActivePerkItem__o *action;
  System_Action_ActivePerkItemContainer__o *action_00;
  
                    /* try { // try from 032c45bc to 033c45e3 has its CatchHandler @ 032c4490 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4564 with catch @ 032c45c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4550 with catch @ 032c45c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c45b8 with catch @ 032c45c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4538 with catch @ 032c45cc
                        */
  if ((DAT_04566c27 & 1) == 0) {
                    /* try { // try from 032c45e4 to 033c45e7 has its CatchHandler @ 032c4610 */
                    /* try { // try from 032c45e8 to 033c461f has its CatchHandler @ 032c4490 */
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&System_Action<ActivePerkItemContainer>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_Clear__);
                    /* catch() { ... } // from try @ 032c45e4 with catch @ 032c4610 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_ForEach__);
                    /* try { // try from 032c4620 to 033c4627 has its CatchHandler @ 032c463c */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
                    /* try { // try from 032c4628 to 033c4633 has its CatchHandler @ 032c4490 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_BEJBCPLFCPG__);
                    /* try { // try from 032c4634 to 033c463b has its CatchHandler @ 032c463c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032c4620 with catch @ 032c463c
                       catch(type#2 @ 00000000) { ... } // from try @ 032c4634 with catch @ 032c463c
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_ODEMJMABDKA__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo);
    DAT_04566c27 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).DOKOOFIPJGJ;
  if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_0;
  if (action == (System_Action_ActivePerkItem__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    }
    action = (System_Action_ActivePerkItem__o *)
             thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar2 = action;
    thunk_FUN_01c20e04(ppSVar2,action);
  }
  if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar4,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    pSVar4 = (__this->fields).DOKOOFIPJGJ;
    if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).MHHBMNPJOOF;
      if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_1;
      if (action_00 == (System_Action_ActivePerkItemContainer__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_00 = (System_Action_ActivePerkItemContainer__o *)
                    thunk_FUN_01bda818(System_Action<ActivePerkItemContainer>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_1;
        *ppSVar3 = action_00;
        thunk_FUN_01c20e04(ppSVar3,action_00);
      }
      if (pSVar5 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   (System_Action_T__o *)action_00,
                   Method_System_Collections_Generic_List<ActivePerkItemContainer>_ForEach__);
        pSVar5 = (__this->fields).MHHBMNPJOOF;
        if (pSVar5 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKDMNNDDAEP()  [RVA 0x31C439C]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$HKDMNNDDAEP @ RVA 0x31C439C

void Nekki_SF2_GUI_Fight_ActivePerkModel__HKDMNNDDAEP
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ActivePerkItemContainer__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o UVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566c28 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566c28 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MHHBMNPJOOF;
  if (__this_00 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  fVar2 = (__this->fields).KPGBDEPEHJD.fields.x;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ActivePerkItemContainer>_GetEnumerator__);
  fVar3 = 0.0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_MoveNext__
                      );
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<ActivePerkItemContainer>_Dispose__
                );
      return;
    }
    if ((UnityEngine_Component_o *)local_70.fields._current == (UnityEngine_Component_o *)0x0)
    break;
    *(float *)&((UnityEngine_Component_o *)((long)local_70.fields._current + 0x30))->klass = fVar3;
                    /* try { // try from 032c4490 to 033c4537 has its CatchHandler @ 032c4490
                       catch() { ... } // from try @ 032c4490 with catch @ 032c4490
                       catch() { ... } // from try @ 032c456c with catch @ 032c4490
                       catch() { ... } // from try @ 032c45bc with catch @ 032c4490
                       catch() { ... } // from try @ 032c45e8 with catch @ 032c4490
                       catch() { ... } // from try @ 032c4628 with catch @ 032c4490 */
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)local_70.fields._current,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) {
      __this_01 = (UnityEngine_RectTransform_o *)0x0;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    fVar3 = fVar2 + fVar3;
    if (bVar1) {
      if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c4538 to 033c453f has its CatchHandler @ 032c45cc */
        FUN_01bab8c8();
      }
      UVar4 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      UVar5 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar3 = fVar3 + UVar4.fields.m_Width * UVar5.fields.x * 0.5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x31C47FC]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$Init @ RVA 0x31C47FC

void Nekki_SF2_GUI_Fight_ActivePerkModel__Init
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  if (DAT_04566c70 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566c70 = '\x01';
  }
  (__this->fields).KPGBDEPEHJD.fields =
       (OCAJCDIOMKB_TypeInfo->static_fields->_BDJJHPAGEEM_k__BackingField).fields;
  return;
}


// ===== public void AddEffectPerk(MMDDDDFHOLG.DOCBHLNBECF DKAENNPDMIH, MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x31C484C]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$AddEffectPerk @ RVA 0x31C484C

void Nekki_SF2_GUI_Fight_ActivePerkModel__AddEffectPerk
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DKAENNPDMIH
               ,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  NILLKLHKLHG_o *__this_01;
  MMFIDKMDADC_o *__this_02;
  HJNEOLCKEMD_o *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566c29 & 1) == 0) {
    FUN_01bab630(&ABHILFLLPOD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    DAT_04566c29 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar6 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar6 != (HJNEOLCKEMD_o *)0x0)) {
    bVar2 = (ABHILFLLPOD_TypeInfo->_2).naturalAligment;
    if (((pHVar6->klass->_2).naturalAligment < bVar2) ||
       ((pHVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)ABHILFLLPOD_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar6);
    }
    __this_00 = (__this->fields).DOKOOFIPJGJ;
    if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
      iVar1 = *(int *)&pHVar6[1].monitor;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_60,
                               Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                              );
            pIVar3 = local_60.fields._current;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
                        );
              return;
            }
            if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while (local_60.fields._current[4].klass != (Il2CppClass *)DKAENNPDMIH);
          if (iVar1 == 2) break;
          if (iVar1 == 1) {
            *(int *)((long)&local_60.fields._current[5].monitor + 4) =
                 *(int *)((long)&local_60.fields._current[5].monitor + 4) + 1;
          }
        }
        __this_01 = *(NILLKLHKLHG_o **)&pHVar6[1].fields.super;
        if (__this_01 == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = NILLKLHKLHG__CHKGAHCDFJF(__this_01,false,(MethodInfo *)0x0);
        if (__this_02 == (MMFIDKMDADC_o *)0x0) break;
        iVar5 = MMFIDKMDADC__JBGCINPPLAC(__this_02,(MethodInfo *)0x0);
        *(int32_t *)((long)&pIVar3[6].klass + 4) = iVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31C4A64]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$.ctor @ RVA 0x31C4A64

void Nekki_SF2_GUI_Fight_ActivePerkModel___ctor
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o **ppSVar1;
  System_Collections_Generic_List_ActivePerkItemContainer__o *__this_01;
  System_Collections_Generic_List_ActivePerkItemContainer__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItemContainer>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
    DAT_04566c2a = 1;
    method = extraout_x1;
  }
  (__this->fields).MKKLGLAFMCB.fields.z = 0.0;
  (__this->fields).MKKLGLAFMCB.fields.w = 0.0;
  (__this->fields).KPGBDEPEHJD.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields).MKKLGLAFMCB.fields.x = 0.0;
  (__this->fields).MKKLGLAFMCB.fields.y = 180.0;
  __this_00 = (System_Collections_Generic_List_ActivePerkItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
  ppSVar1 = &(__this->fields).DOKOOFIPJGJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ActivePerkItemContainer__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItemContainer>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ActivePerkItemContainer>__ctor__);
  ppSVar2 = &(__this->fields).MHHBMNPJOOF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AddActivePerkItem(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x31C4B50]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$AddActivePerkItem @ RVA 0x31C4B50

void Nekki_SF2_GUI_Fight_ActivePerkModel__AddActivePerkItem
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB
               ,MethodInfo *method)

{
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    Nekki_SF2_GUI_Fight_ActivePerkModel__JFOPMGDBDDJ(__this,CPECAEHDDDB,method);
    return;
  }
  return;
}


// ===== private void JFOPMGDBDDJ(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x31C4B5C]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$JFOPMGDBDDJ @ RVA 0x31C4B5C

void Nekki_SF2_GUI_Fight_ActivePerkModel__JFOPMGDBDDJ
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB
               ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_ActivePerkItem__o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  undefined8 *puVar6;
  Nekki_SF2_GUI_Fight_ActivePerkItem_array *pNVar7;
  OCAJCDIOMKB_StaticFields *pOVar8;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer_array *pNVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this_02;
  System_Collections_Generic_List_ActivePerkItemContainer__o *pSVar12;
  float EDCGCMAKCOM;
  
  if ((DAT_04566c2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ActivePerkItemContainer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ActivePerkItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_Find__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI_CCGNBDIIKLM__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI_TypeInfo);
    FUN_01bab630(&System_Predicate<ActivePerkItemContainer>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2746/*"ActivePerkModel.CreateActivePerkItem: itemContainer is null"*/);
    FUN_01bab630(&StringLiteral_2743/*"ActivePerkModel.CreateActivePerkItem: _activePerkItemContainerPrefab is null"*/);
    FUN_01bab630(&StringLiteral_2745/*"ActivePerkModel.CreateActivePerkItem: item is null"*/);
    FUN_01bab630(&StringLiteral_2744/*"ActivePerkModel.CreateActivePerkItem: _activePerkItemPrefab is null"*/);
    DAT_04566c2b = 1;
  }
  pIVar4 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ActivePerkModel_PFENGGNDFDI_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Object_o *)(__this->fields)._activePerkItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar4 = StringLiteral_2744/*"ActivePerkModel.CreateActivePerkItem: _activePerkItemPrefab is null"*/;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar4 = StringLiteral_2744/*"ActivePerkModel.CreateActivePerkItem: _activePerkItemPrefab is null"*/;
    }
    goto LAB_032c4d30;
  }
  pUVar11 = (__this->fields)._activePerkItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar11 = (UnityEngine_GameObject_o *)
            UnityEngine_Object__Instantiate<object>
                      ((Il2CppObject *)pUVar11,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto LAB_032c50cc;
  __this_00 = (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)
              UnityEngine_GameObject__GetComponent<object>
                        (pUVar11,Method_UnityEngine_GameObject_GetComponent<ActivePerkItem>__);
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar6 = &StringLiteral_2745/*"ActivePerkModel.CreateActivePerkItem: item is null"*/;
    goto LAB_032c4d2c;
  }
  if (((__this_00 == (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) ||
      (Nekki_SF2_GUI_Fight_ActivePerkItem__Init(__this_00,CPECAEHDDDB,(MethodInfo *)0x0),
      CPECAEHDDDB == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0)) || (pIVar4 == (Il2CppObject *)0x0))
  goto LAB_032c50cc;
  pIVar4 = pIVar4 + 1;
  pIVar4->klass = (Il2CppClass *)(CPECAEHDDDB->fields).GPFDBPGPKFM;
  thunk_FUN_01c20e04(pIVar4);
  if (pIVar4->klass == (Il2CppClass *)0x0) goto LAB_032c50cc;
  bVar3 = System_String__Equals
                    ((System_String_o *)pIVar4->klass,string_TypeInfo->static_fields->Empty,
                     (MethodInfo *)0x0);
  __this_02 = (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0;
  if (!bVar3) {
    pSVar12 = (__this->fields).MHHBMNPJOOF;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<ActivePerkItemContainer>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar12 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0)
    goto LAB_032c50cc;
    __this_02 = (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)
                System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)pSVar12,match,
                           Method_System_Collections_Generic_List<ActivePerkItemContainer>_Find__);
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar3) {
    if (__this_02 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) goto LAB_032c50cc;
LAB_032c4e68:
    Nekki_SF2_GUI_Fight_ActivePerkItemContainer__AddActivePerk
              (__this_02,__this_00,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<ActivePerkItem>_Add__;
    __this_01 = (__this->fields).DOKOOFIPJGJ;
    if (__this_01 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
      pNVar7 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pNVar7 != (Nekki_SF2_GUI_Fight_ActivePerkItem_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if ((uint)pNVar7->max_length <= uVar1) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (__this_01->fields)._size = uVar1 + 1;
        pNVar7->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_00);
        return;
      }
    }
LAB_032c50cc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar10 = (UnityEngine_Object_o *)(__this->fields)._activePerkItemContainerPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar6 = &StringLiteral_2743/*"ActivePerkModel.CreateActivePerkItem: _activePerkItemContainerPrefab is null"*/;
  }
  else {
    pUVar11 = (__this->fields)._activePerkItemContainerPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar11 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pUVar11,Method_UnityEngine_Object_Instantiate<GameObject>__
                        );
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto LAB_032c50cc;
    __this_02 = (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar11,
                           Method_UnityEngine_GameObject_GetComponent<ActivePerkItemContainer>__);
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      if ((__this->fields)._align == 1) {
        if ((__this_02 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_032c50cc;
        UnityEngine_Transform__set_localRotation
                  (pUVar5,(UnityEngine_Quaternion_o)(__this->fields).MKKLGLAFMCB.fields,
                   (MethodInfo *)0x0);
      }
      else if (__this_02 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) goto LAB_032c50cc;
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_032c50cc;
      UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
      if (DAT_04566c71 == '\0') {
        FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
        DAT_04566c71 = '\x01';
      }
      pOVar8 = OCAJCDIOMKB_TypeInfo->static_fields;
      EDCGCMAKCOM = pOVar8->_BJHEHECNLOC_k__BackingField;
      if (DAT_04566c72 == '\0') {
        FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
        DAT_04566c72 = '\x01';
        pOVar8 = OCAJCDIOMKB_TypeInfo->static_fields;
      }
      Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Init
                (__this_02,EDCGCMAKCOM,pOVar8->_PJBFHCHGIDP_k__BackingField,(MethodInfo *)0x0);
      (__this_02->fields)._FOMKDILDPCJ_k__BackingField = (System_String_o *)pIVar4->klass;
      thunk_FUN_01c20e04();
      lVar2 = Method_System_Collections_Generic_List<ActivePerkItemContainer>_Add__;
      pSVar12 = (__this->fields).MHHBMNPJOOF;
      if (pSVar12 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0)
      goto LAB_032c50cc;
      pNVar9 = (pSVar12->fields)._items;
      (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
      if (pNVar9 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_array *)0x0) goto LAB_032c50cc;
      uVar1 = (pSVar12->fields)._size;
      if (uVar1 < (uint)pNVar9->max_length) {
        (pSVar12->fields)._size = uVar1 + 1;
        pNVar9->m_Items[(int)uVar1] = __this_02;
        thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar1,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_032c4e68;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar6 = &StringLiteral_2746/*"ActivePerkModel.CreateActivePerkItem: itemContainer is null"*/;
  }
LAB_032c4d2c:
  pIVar4 = (Il2CppObject *)*puVar6;
LAB_032c4d30:
  UnityEngine_Debug__LogError(pIVar4,(MethodInfo *)0x0);
  return;
}


// ===== public void RemoveAllActivePerkItem()  [RVA 0x31C50D8]
// Nekki.SF2.GUI.Fight.ActivePerkModel$$RemoveAllActivePerkItem @ RVA 0x31C50D8

void Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveAllActivePerkItem
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Action_ActivePerkItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Action_ActivePerkItem__o *action;
  
  if ((DAT_04566c2c & 1) == 0) {
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_MMGBICLDKCM__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo);
    DAT_04566c2c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DOKOOFIPJGJ;
  if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__13_0;
  if (action == (System_Action_ActivePerkItem__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    }
    action = (System_Action_ActivePerkItem__o *)
             thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

