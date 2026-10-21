// AHOEIGAOKEL$$JCLPLBEJHGM @ RVA 0x30D0388

void AHOEIGAOKEL__JCLPLBEJHGM(AHOEIGAOKEL_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar2;
  Il2CppObject *pIVar3;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar4;
  ACHLOMELAJE_o *__this_03;
  undefined8 uVar5;
  CFEFALDOEMD_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o *pNVar6;
  System_Action_object__o *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662fb = 1;
    JNIBOOMFCEG = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HANEOGJOELA;
  if (__this_01 == (System_Collections_Generic_List_LabelButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,JNIBOOMFCEG);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._current = local_98.fields._current;
LAB_031d0494:
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar1) {
LAB_031d0650:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
        return;
      }
      if ((LabelButton_o *)local_80.fields._current == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar2 = (__this->fields).PGCBEJGMIMA;
      if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          (((LabelButton_Fields *)((long)local_80.fields._current + 0x10))->super).
                          super.ButtonId,
                          Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)((long)&pIVar3[3].klass + 4) == '\0');
    pSVar2 = (__this->fields).PGCBEJGMIMA;
    if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId,
                        Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (*(int *)&pIVar3[3].klass == 8) {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pSVar2 = (__this->fields).PGCBEJGMIMA;
      if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId,
                          Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_02 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar4 = JMDPBFOCHHP__DIFLKMKBENA(__this_02,pIVar3[2].monitor,false,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pJVar4 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_03 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = ACHLOMELAJE__MIFEPGNGDON
                        (__this_03,(long)(pJVar4->fields).NGMFKGGBHND,(MethodInfo *)0x0);
      if (bVar1) {
        fVar11 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
      }
      else {
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar12 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
        fVar11 = UVar12.fields.a;
        fVar10 = UVar12.fields.b;
        fVar9 = UVar12.fields.g;
        fVar8 = UVar12.fields.r;
      }
      UVar12.fields.g = fVar9;
      UVar12.fields.r = fVar8;
      UVar12.fields.a = fVar11;
      UVar12.fields.b = fVar10;
      LabelButton__set_Color((LabelButton_o *)__this_00,UVar12,(MethodInfo *)0x0);
      goto LAB_031d0494;
    }
    pNVar6 = (__this->fields).ILCGLGPADOK;
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar6->fields).CloseOnBuy != false) {
      (pNVar6->fields).BuyItemOnClose = (System_String_o *)0x0;
      thunk_FUN_01c20e04(&(pNVar6->fields).BuyItemOnClose,0);
      pSVar7 = (__this->fields).DNPHBCPFMPB;
      local_98.fields._list._0_4_ =
           (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId;
      uVar5 = thunk_FUN_01bda448(int_TypeInfo,&local_98);
      if (pSVar7 == (System_Action_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(uVar5,uVar5);
      }
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,uVar5,(pSVar7->fields).super.super.method)
      ;
      goto LAB_031d0650;
    }
    SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
  } while( true );
}

