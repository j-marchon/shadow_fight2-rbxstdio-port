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
    FUN_01bab630(&StringLiteral_2746);
    FUN_01bab630(&StringLiteral_2743);
    FUN_01bab630(&StringLiteral_2745);
    FUN_01bab630(&StringLiteral_2744);
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
    pIVar4 = StringLiteral_2744;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar4 = StringLiteral_2744;
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
    puVar6 = &StringLiteral_2745;
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
    puVar6 = &StringLiteral_2743;
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
    puVar6 = &StringLiteral_2746;
  }
LAB_032c4d2c:
  pIVar4 = (Il2CppObject *)*puVar6;
LAB_032c4d30:
  UnityEngine_Debug__LogError(pIVar4,(MethodInfo *)0x0);
  return;
}

