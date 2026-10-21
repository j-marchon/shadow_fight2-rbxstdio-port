// TypeDefIndex 3311
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class RecipePropertiesUI : MonoBehaviour
// Fields:
//   private GameObject _RecipePropertyUIPrefab; // 0x20
//   private int EMPBBAGMIFD; // 0x28
//   private MDLDFLDGLND CJBEIFPMJMH; // 0x30
//   private bool GMIJIENAFJM; // 0x38
//   private List<RecipePropertyUI> DPJGAIPHHLG; // 0x40

// ===== public void Refresh(int HLKBCKLJHHI, MDLDFLDGLND LIMHKIDICNM, bool CHGIJNBBJLN, Action<GameObject> ACOFKBGCMHA)  [RVA 0x35233BC]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$Refresh @ RVA 0x35233BC

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,int32_t HLKBCKLJHHI,
               MDLDFLDGLND_o *LIMHKIDICNM,bool CHGIJNBBJLN,System_Action_GameObject__o *ACOFKBGCMHA,
               MethodInfo *method)

{
  MDLDFLDGLND_o **ppMVar1;
  MethodInfo *method_00;
  
  (__this->fields).EMPBBAGMIFD = HLKBCKLJHHI;
  ppMVar1 = &(__this->fields).CJBEIFPMJMH;
  *ppMVar1 = LIMHKIDICNM;
  thunk_FUN_01c20e04(ppMVar1,LIMHKIDICNM);
  (__this->fields).GMIJIENAFJM = CHGIJNBBJLN;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__FAJIKJIFBOO(__this,method_00);
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__NCMIHHJLDPG
            (__this,ACOFKBGCMHA,(MethodInfo *)LIMHKIDICNM);
  return;
}


// ===== private void NCMIHHJLDPG(Action<GameObject> ACOFKBGCMHA)  [RVA 0x35235B4]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$NCMIHHJLDPG @ RVA 0x35235B4

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__NCMIHHJLDPG
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,
               System_Action_GameObject__o *ACOFKBGCMHA,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  DEKKGJNMFEB_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  MethodInfo *method_00;
  MDLDFLDGLND_o *pMVar6;
  int iVar7;
  
  if ((DAT_045689eb & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689eb = 1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_01 != (ACHLOMELAJE_o *)0x0) &&
     (iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0),
     __this_00 != (DEKKGJNMFEB_o *)0x0)) {
    iVar1 = DEKKGJNMFEB__HNBCOIJFCCA(__this_00,iVar1,(MethodInfo *)0x0);
    if (0 < (__this->fields).EMPBBAGMIFD) {
      iVar7 = 0;
      do {
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._IMHPFEFJIGN_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._INNMKAKBLBD_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._IMHPFEFJIGN_k__BackingField.fields,(MethodInfo *)0x0);
        pMVar6 = (__this->fields).CJBEIFPMJMH;
        if (pMVar6 == (MDLDFLDGLND_o *)0x0) goto LAB_03623770;
        method_00 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar6->fields)._INNMKAKBLBD_k__BackingField.fields,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__GJKBKFHCCPG
                  (__this,ABS((float)(iVar3 + iVar2) * 0.5) + (float)iVar1,(float)(iVar4 + iVar1),
                   (float)(iVar5 + iVar1),ACOFKBGCMHA,method_00);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (__this->fields).EMPBBAGMIFD);
    }
    return;
  }
LAB_03623770:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GJKBKFHCCPG(float IIBAOOAIPOC, float MMMPFDKCLIP, float KJIKHPEEMFC, Action<GameObject> ACOFKBGCMHA)  [RVA 0x3523774]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$GJKBKFHCCPG @ RVA 0x3523774

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__GJKBKFHCCPG
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,float IIBAOOAIPOC,
               float MMMPFDKCLIP,float KJIKHPEEMFC,System_Action_GameObject__o *ACOFKBGCMHA,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *pNVar3;
  UnityEngine_Events_UnityEventBase_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_RecipePropertyUI__o *__this_03;
  MDLDFLDGLND_o *pMVar4;
  long lVar5;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_array *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  void **ppvVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityEvent_o *__this_04;
  
  if ((DAT_045689ec & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH_FOJLCKLPFGB__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RecipePropertyUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9094/*"MiscSprites.random"*/);
    DAT_045689ec = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_CKEPNGDDILH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar9 = __this_00 + 1;
    pIVar9->klass = (Il2CppClass *)ACOFKBGCMHA;
    thunk_FUN_01c20e04(pIVar9,ACOFKBGCMHA);
    pUVar7 = (__this->fields)._RecipePropertyUIPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        pIVar2 = UnityEngine_GameObject__GetComponent<object>
                           (pUVar7,Method_UnityEngine_GameObject_GetComponent<RecipePropertyUI>__);
        ppvVar8 = &__this_00[1].monitor;
        *ppvVar8 = pIVar2;
        thunk_FUN_01c20e04(ppvVar8,pIVar2);
        if (*ppvVar8 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *)0x0) {
          Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__Refresh
                    (*ppvVar8,StringLiteral_9094/*"MiscSprites.random"*/,MMMPFDKCLIP,KJIKHPEEMFC,
                     (__this->fields).GMIJIENAFJM == false,(MethodInfo *)0x0);
          pNVar3 = *ppvVar8;
          if ((__this->fields).GMIJIENAFJM == false) {
            pMVar4 = (__this->fields).CJBEIFPMJMH;
            if ((pMVar4 == (MDLDFLDGLND_o *)0x0) ||
               (pNVar3 == (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *)0x0)) goto LAB_03623a68;
            Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_BarScale
                      (pNVar3,(pMVar4->fields)._AFGGPNHPNHK_k__BackingField,(MethodInfo *)0x0);
            if (*ppvVar8 == (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *)0x0) goto LAB_03623a68;
            Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_Value
                      (*ppvVar8,IIBAOOAIPOC,(MethodInfo *)0x0);
          }
          else {
            if (pNVar3 == (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *)0x0) goto LAB_03623a68;
            Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_ValuePercentage
                      (pNVar3,100.0,(MethodInfo *)0x0);
          }
          if (pIVar9->klass != (Il2CppClass *)0x0) {
            if (((*ppvVar8 == (void *)0x0) || (lVar5 = *(long *)((long)*ppvVar8 + 0x38), lVar5 == 0)
                ) || (__this_02 = *(UnityEngine_Events_UnityEventBase_o **)(lVar5 + 0x100),
                     __this_02 == (UnityEngine_Events_UnityEventBase_o *)0x0)) goto LAB_03623a68;
            UnityEngine_Events_UnityEventBase__RemoveAllListeners(__this_02,(MethodInfo *)0x0);
            if ((*ppvVar8 == (void *)0x0) || (lVar5 = *(long *)((long)*ppvVar8 + 0x38), lVar5 == 0))
            goto LAB_03623a68;
            __this_04 = *(UnityEngine_Events_UnityEvent_o **)(lVar5 + 0x100);
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_04 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03623a68;
            UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
          }
          lVar5 = Method_System_Collections_Generic_List<RecipePropertyUI>_Add__;
          __this_03 = (__this->fields).DPJGAIPHHLG;
          if (__this_03 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0) {
            pNVar3 = *ppvVar8;
            pNVar6 = (__this_03->fields)._items;
            (__this_03->fields)._version = (__this_03->fields)._version + 1;
            if (pNVar6 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_array *)0x0) {
              uVar1 = (__this_03->fields)._size;
              if (uVar1 < (uint)pNVar6->max_length) {
                (__this_03->fields)._size = uVar1 + 1;
                pNVar6->m_Items[(int)uVar1] = pNVar3;
                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,
                         (Il2CppObject *)pNVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
LAB_03623a68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3523A74]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$.ctor @ RVA 0x3523A74

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RecipePropertyUI__o *__this_00;
  System_Collections_Generic_List_RecipePropertyUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689ed & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RecipePropertyUI>_TypeInfo);
    DAT_045689ed = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RecipePropertyUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RecipePropertyUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RecipePropertyUI>__ctor__);
  ppSVar1 = &(__this->fields).DPJGAIPHHLG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FAJIKJIFBOO()  [RVA 0x3523400]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$FAJIKJIFBOO @ RVA 0x3523400

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__FAJIKJIFBOO
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_RecipePropertyUI__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045689ee & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RecipePropertyUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_get_Current__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_GetEnumerator__);
    DAT_045689ee = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).DPJGAIPHHLG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<RecipePropertyUI>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).DPJGAIPHHLG;
  if (pSVar2 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<RecipePropertyUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_MoveNext__
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
               Method_System_Collections_Generic_List_Enumerator<RecipePropertyUI>_Dispose__);
    pSVar2 = (__this->fields).DPJGAIPHHLG;
    if (pSVar2 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<RecipePropertyUI> get_Properties()  [RVA 0x3523AFC]
// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$get_Properties @ RVA 0x3523AFC

System_Collections_Generic_List_RecipePropertyUI__o *
Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__get_Properties
          (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,MethodInfo *method)

{
  return (__this->fields).DPJGAIPHHLG;
}

