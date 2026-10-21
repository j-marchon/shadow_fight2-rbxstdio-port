// Nekki.SF2.GUI.Map.ProgressBricksPanel$$GBCCLPCBNPJ @ RVA 0x32B62DC

void Nekki_SF2_GUI_Map_ProgressBricksPanel__GBCCLPCBNPJ
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,int32_t DFIBGGDJPLM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_IndicatorFight_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *__this_02;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar3;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_array *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_Map_IndicatorFight_o **ppNVar6;
  int iVar7;
  
  if ((DAT_04567458 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<IndicatorFight>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Count__
                );
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567458 = 1;
  }
  pSVar3 = (__this->fields).FBAIPCAJMEN;
  if (pSVar3 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
LAB_033b64c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar7 = (pSVar3->fields)._size;
  if ((iVar7 < DFIBGGDJPLM) && (iVar7 = DFIBGGDJPLM - iVar7, 0 < iVar7)) {
    do {
      pUVar5 = (__this->fields).IndicatorFightPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar5 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
          (__this_00 = (Nekki_SF2_GUI_Map_IndicatorFight_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar5,
                                  Method_UnityEngine_GameObject_GetComponent<IndicatorFight>__),
          __this_00 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0)) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033b64c8;
      __this_01 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_033b64c8;
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).FBAIPCAJMEN;
      __this_02 = (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *)0x0)
      goto LAB_033b64c8;
      ppNVar6 = &(__this_02->fields).IGEKJBGFJBL;
      *ppNVar6 = __this_00;
      thunk_FUN_01c20e04(ppNVar6,__this_00);
      (__this_02->fields).OFKNMBPGOGL = false;
      lVar2 = Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_Add__;
      if (pSVar3 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
      goto LAB_033b64c8;
      pNVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pNVar4 == (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_array *)0x0)
      goto LAB_033b64c8;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = __this_02;
        thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

