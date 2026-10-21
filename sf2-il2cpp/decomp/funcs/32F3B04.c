// NCNJEIBHGBH$$BGGKNPJBECD @ RVA 0x32F3B04

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__BGGKNPJBECD
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,HOOAAGABMBL_o *IHGFKLOLPOK,
          System_String_o *JHDEDPMNOOJ,int64_t DHOANICNIBD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar3;
  FKNCNNOOOIO_o *__this_02;
  System_String_o **ppSVar4;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Map_MapButton_o *__this_04;
  LIDDCJFOOOI_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_array *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_06;
  
  if ((DAT_0456768c & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_KNIFJALFKHG_JMGLHOGGKJL__);
    FUN_01bab630(&NCNJEIBHGBH_KNIFJALFKHG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
    FUN_01bab630(&StringLiteral_16224);
    DAT_0456768c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NCNJEIBHGBH_KNIFJALFKHG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (__this->fields).PAFEHLCLKEC;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      uVar1 = (__this_01->fields)._size;
      *(uint *)&__this_00[1].monitor = uVar1;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar5 != (System_String_array *)0x0) {
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = JHDEDPMNOOJ;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,JHDEDPMNOOJ);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)JHDEDPMNOOJ,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
          pSVar3 = System_String__Concat
                             (StringLiteral_12931,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField
                              ,StringLiteral_16224,(MethodInfo *)0x0);
          __this_02 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
          FKNCNNOOOIO___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 != (FKNCNNOOOIO_o *)0x0) {
            (__this_02->fields).AIDMEFDEOLJ = 1;
            (__this_02->fields).ALLCFABAGOB = DHOANICNIBD;
            (__this_02->fields).JIJLBFGKNJK = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            ppSVar4 = &(__this_02->fields).KPDPJONADPJ;
            *ppSVar4 = pSVar3;
            thunk_FUN_01c20e04(ppSVar4,pSVar3);
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
            if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_04 = (Nekki_SF2_GUI_Map_MapButton_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      (__this_03,
                                       Method_UnityEngine_GameObject_GetComponent<MapButton>__),
               __this_04 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

