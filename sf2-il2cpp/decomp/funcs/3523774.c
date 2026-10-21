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
    FUN_01bab630(&StringLiteral_9094);
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
                    (*ppvVar8,StringLiteral_9094,MMMPFDKCLIP,KJIKHPEEMFC,
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

