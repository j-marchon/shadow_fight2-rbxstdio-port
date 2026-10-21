// Nekki.SF2.GUI.Shop.ParametersPanel$$JJPEDCEMMID @ RVA 0x3487450

void Nekki_SF2_GUI_Shop_ParametersPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *KGLJICLJHEL;
  bool bVar3;
  int32_t CJNHFNHJHPE;
  int32_t NBHHBBOJJME;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Collections_Generic_List_ParameterScrollItem__o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_array *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *NEJHIEOHMCF;
  System_String_o *MHHLKEOKCOB;
  float AIOABLFEKGN;
  
  if ((DAT_045683ba & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5704);
    FUN_01bab630(&StringLiteral_1);
    DAT_045683ba = 1;
  }
  pUVar5 = (__this->fields)._ItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._LayoutGroup;
    if ((__this_03 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar5,
                             Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
      if (__this_01 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) {
        (__this_01->fields).ONONPELCDGE = StringLiteral_5704;
        thunk_FUN_01c20e04(&(__this_01->fields).ONONPELCDGE);
        if (CDEABOAKDEJ != (HEFOANCOHDC_o *)0x0) {
          NEJHIEOHMCF = (CDEABOAKDEJ->fields).KPDPJONADPJ;
          CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (CDEABOAKDEJ->fields).EMLGCOFGNKH.fields,(MethodInfo *)0x0);
          NBHHBBOJJME = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (CDEABOAKDEJ->fields).EMLGCOFGNKH.fields,(MethodInfo *)0x0);
          KGLJICLJHEL = StringLiteral_1;
          MHHLKEOKCOB = (CDEABOAKDEJ->fields).FFDAPDCFBDO;
          AIOABLFEKGN = 1.0;
          if ((CDEABOAKDEJ->fields).OCABLLPNEGL == 0) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = MGNPHCAAEIO__DODJBGHCIHD(CDEABOAKDEJ,(MethodInfo *)0x0);
            AIOABLFEKGN = 1.0;
            if (!bVar3) {
              AIOABLFEKGN = 0.5;
            }
          }
          Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                    (__this_01,KGLJICLJHEL,NEJHIEOHMCF,CJNHFNHJHPE,NBHHBBOJJME,false,MHHLKEOKCOB,
                     AIOABLFEKGN,(MethodInfo *)0x0);
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<ParameterScrollItem>_Add__;
          __this_02 = (__this->fields).HEHMAPDMHIG;
          if (__this_02 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
            pNVar4 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pNVar4 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_array *)0x0) {
              uVar1 = (__this_02->fields)._size;
              if (uVar1 < (uint)pNVar4->max_length) {
                (__this_02->fields)._size = uVar1 + 1;
                pNVar4->m_Items[(int)uVar1] = __this_01;
                thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_01);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
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

