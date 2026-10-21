// Nekki.SF2.GUI.Dialogs.LotteryDialog$$ODLKDPJMNKD @ RVA 0x328B474

void Nekki_SF2_GUI_Dialogs_LotteryDialog__ODLKDPJMNKD
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_00;
  Il2CppObject *pIVar7;
  EEGDOGKBLNG_o *__this_01;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *__this_03;
  NBLEEDEAPHB_o *__this_04;
  System_Action_object__o **ppSVar10;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar11;
  ACHLOMELAJE_o *__this_05;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar12;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar13;
  System_Object_array *pSVar14;
  System_Action_object__o *pSVar15;
  LabelButton_o *__this_06;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Color_o UVar20;
  ADDCOJMHMHE_o AStack_150;
  System_String_o *local_c0;
  undefined8 local_b8;
  System_Collections_Generic_List_object__o *local_b0 [2];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined1 local_57;
  undefined4 local_48;
  System_Action_object__o *local_38;
  
  if ((DAT_045672da & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_FILHPJCAFHA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9622);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_16042);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_4401);
    FUN_01bab630(&StringLiteral_18942);
    FUN_01bab630(&StringLiteral_1);
    DAT_045672da = 1;
  }
  memset(&local_c0,0,0x90);
  (__this->fields).FBODAFDBNLH = (BECIPDJBAOG_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,0);
  (__this->fields).IIMLAADGBEE = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).IIMLAADGBEE,0);
  pLVar12 = (__this->fields).DKMMBMBMJBO;
  if ((((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
       (pJVar13 = (pLVar12->fields).FIJPJBGCODO, pJVar13 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
      (__this_00 = (pJVar13->fields).LIJCIBIOOOH,
      __this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)) &&
     (pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                         ), pIVar7 != (Il2CppObject *)0x0)) {
    iVar1 = *(int *)&pIVar7[1].monitor;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      iVar6 = EEGDOGKBLNG__APFFEAJBAEK
                        (__this_01,(System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
      if (iVar6 < iVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((__this_02 != (JMDPBFOCHHP_o *)0x0) &&
           (pJVar8 = JMDPBFOCHHP__BHJOLIJDBLO
                               (__this_02,(System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0),
           pJVar8 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0)) {
          pSVar9 = System_String__Concat
                             (StringLiteral_18942,(pJVar8->fields).super.KPDPJONADPJ,
                              (MethodInfo *)0x0);
          memset(&local_b8,0,0x88);
          local_c0 = pSVar9;
          thunk_FUN_01c20e04(&local_c0,pSVar9);
          local_b8 = StringLiteral_17850;
          thunk_FUN_01c20e04(&local_b8);
          __this_03 = (System_Collections_Generic_List_object__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (__this_03,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
          pSVar9 = System_String__Concat
                             (StringLiteral_9622,(System_String_o *)pIVar7[1].klass,
                              (MethodInfo *)0x0);
          __this_04 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
          NBLEEDEAPHB___ctor(__this_04,pSVar9,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                             (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                             (MethodInfo *)0x0);
          lVar4 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar14 = (__this_03->fields)._items;
            (__this_03->fields)._version = (__this_03->fields)._version + 1;
            if (pSVar14 != (System_Object_array *)0x0) {
              uVar3 = (__this_03->fields)._size;
              if (uVar3 < (uint)pSVar14->max_length) {
                (__this_03->fields)._size = uVar3 + 1;
                pSVar14->m_Items[(int)uVar3] = (Il2CppObject *)__this_04;
                thunk_FUN_01c20e04(pSVar14->m_Items + (int)uVar3,__this_04);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_03,(Il2CppObject *)__this_04,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              local_b0[0] = __this_03;
              thunk_FUN_01c20e04(local_b0,__this_03);
              local_a0 = 0xbf800000;
              if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar15 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__82_0;
              if (pSVar15 == (System_Action_object__o *)0x0) {
                if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar15 = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar10 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->
                            __9__82_0;
                *ppSVar10 = pSVar15;
                thunk_FUN_01c20e04(ppSVar10,pSVar15);
              }
              local_38 = pSVar15;
              thunk_FUN_01c20e04(&local_38,pSVar15);
              local_90[0] = StringLiteral_9679;
              thunk_FUN_01c20e04(local_90);
              local_98 = StringLiteral_4401;
              thunk_FUN_01c20e04(&local_98);
              local_57 = 1;
              local_80 = 0x500000002;
              local_48 = 0x42b40000;
              memcpy(&AStack_150,&local_c0,0x90);
              pNVar11 = JJPNLEPEAFM__NMHCCGPELBE(&AStack_150,(MethodInfo *)0x0);
              if (pNVar11 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                (*(pNVar11->klass->vtable)._16_SetImageScale.methodPtr)
                          (0x3f333333,pNVar11,(pNVar11->klass->vtable)._16_SetImageScale.method);
                bVar2 = (Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo->_2).naturalAligment;
                if (((pNVar11->klass->_2).naturalAligment < bVar2) ||
                   ((pNVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                    (Il2CppClass *)Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pNVar11);
                }
                __this_06 = (LabelButton_o *)pNVar11[2].fields.EHGPDKENGAP;
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
                pLVar12 = (__this->fields).DKMMBMBMJBO;
                if (((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
                    (pJVar13 = (pLVar12->fields).FIJPJBGCODO,
                    pJVar13 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
                   (__this_05 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
                   __this_05 != (ACHLOMELAJE_o *)0x0)) {
                  bVar5 = ACHLOMELAJE__MIFEPGNGDON
                                    (__this_05,(long)(pJVar13->fields).NGMFKGGBHND,(MethodInfo *)0x0
                                    );
                  if (bVar5) {
                    fVar19 = 1.0;
                    fVar16 = 0.0;
                    fVar17 = 0.0;
                    fVar18 = 0.0;
                  }
                  else {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar20 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar19 = UVar20.fields.a;
                    fVar18 = UVar20.fields.b;
                    fVar17 = UVar20.fields.g;
                    fVar16 = UVar20.fields.r;
                  }
                  if (__this_06 != (LabelButton_o *)0x0) {
                    UVar20.fields.g = fVar17;
                    UVar20.fields.r = fVar16;
                    UVar20.fields.a = fVar19;
                    UVar20.fields.b = fVar18;
                    LabelButton__set_Color(__this_06,UVar20,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pLVar12 = (__this->fields).DKMMBMBMJBO;
        if ((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
           (pJVar13 = (pLVar12->fields).FIJPJBGCODO, pJVar13 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
          pSVar9 = System_String__Concat
                             ((pJVar13->fields).JIJLBFGKNJK,StringLiteral_16042,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,false,pSVar9,in_x3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

