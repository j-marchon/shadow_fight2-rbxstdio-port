// HPEENDCCJND$$CCGJEGLFHJB @ RVA 0x315849C

void HPEENDCCJND__CCGJEGLFHJB
               (HPEENDCCJND_o *__this,int32_t JKLPCJFPOBL,System_Text_StringBuilder_o *KHHGPLOMHBB,
               int32_t *PDMLJLGJJEL,int32_t *KGEBDJNAFIL,MethodInfo *method)

{
  HPEENDCCJND_Fields *pHVar1;
  int32_t length;
  bool bVar2;
  long *plVar3;
  LEGDPJHPEOB_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  HPEENDCCJND_o *__this_02;
  System_String_array *values;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *pSVar8;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  undefined1 auVar9 [16];
  int local_68;
  
  if ((DAT_04566854 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Clear__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_75);
    FUN_01bab630(&StringLiteral_116);
    FUN_01bab630(&StringLiteral_81);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_312);
    DAT_04566854 = 1;
  }
  local_68 = 0;
  if (0 < JKLPCJFPOBL) {
    pHVar1 = &__this->fields;
    do {
      (__this->fields).NHGEHIFDNPB = StringLiteral_1;
      thunk_FUN_01c20e04(pHVar1);
      pSVar8 = (__this->fields).EIHCMKCJPJO;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03258b94:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      length = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      (*(__this->klass->vtable)._7_unknown.methodPtr)
                (__this,(__this->klass->vtable)._7_unknown.method);
      plVar3 = (long *)(*(__this->klass->vtable)._5_unknown.methodPtr)
                                 (__this,(__this->klass->vtable)._5_unknown.method);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      auVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      pSVar7 = auVar9._0_8_;
      HPEENDCCJND__MBOAEJBLAPD(__this,auVar9._8_8_);
      __this_00 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
      LEGDPJHPEOB___ctor(__this_00,(MethodInfo *)0x0);
      __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
      EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_00 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).AAJBIMFNMBB = (pNVar4->fields).QuestParameters;
      thunk_FUN_01c20e04();
      method_00 = (MethodInfo *)0x1;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_00,pHVar1->NHGEHIFDNPB,__this_01,true,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_01 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar5 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      uVar5 = (*(__this->klass->vtable)._8_CENGCEHFGFN.methodPtr)
                        (__this,uVar5,(__this->klass->vtable)._8_CENGCEHFGFN.method);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_LIOJDJDKNOA.methodPtr)
                         (__this,uVar5,(__this->klass->vtable)._4_LIOJDJDKNOA.method);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AAJBIMFNMBB = (pNVar4->fields).QuestParameters;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
      }
      __this_02 = (HPEENDCCJND_o *)MFBNFJGBPBB__LPLONLCAIGL(pSVar6,AAJBIMFNMBB,(MethodInfo *)0x0);
      bVar2 = HPEENDCCJND__BCEJCCGFMOP(__this_02,(System_String_o *)__this_02,pSVar7,method_00);
      if (bVar2) {
        *KGEBDJNAFIL = *KGEBDJNAFIL + 1;
      }
      else {
        *PDMLJLGJJEL = *PDMLJLGJJEL + 1;
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
        if (values == (System_String_array *)0x0) goto LAB_03258b94;
        if ((int)values->max_length == 0) {
LAB_03258b50:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[0] = StringLiteral_81;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar6 = (System_String_o *)
                 (*(__this->klass->vtable)._6_unknown.methodPtr)
                           (__this,(__this->klass->vtable)._6_unknown.method);
        if ((uint)values->max_length < 2) goto LAB_03258b50;
        values->m_Items[1] = pSVar6;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
        if ((uint)values->max_length < 3) goto LAB_03258b50;
        values->m_Items[2] = StringLiteral_116;
        thunk_FUN_01c20e04(values->m_Items + 2);
        if ((uint)values->max_length < 4) goto LAB_03258b50;
        values->m_Items[3] = pHVar1->NHGEHIFDNPB;
        thunk_FUN_01c20e04(values->m_Items + 3);
        if ((uint)values->max_length < 5) goto LAB_03258b50;
        values->m_Items[4] = StringLiteral_75;
        thunk_FUN_01c20e04(values->m_Items + 4);
        if ((uint)values->max_length < 6) goto LAB_03258b50;
        values->m_Items[5] = pSVar7;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar7);
        if ((uint)values->max_length < 7) goto LAB_03258b50;
        values->m_Items[6] = StringLiteral_312;
        thunk_FUN_01c20e04(values->m_Items + 6);
        if ((uint)values->max_length < 8) goto LAB_03258b50;
        values->m_Items[7] = (System_String_o *)__this_02;
        thunk_FUN_01c20e04(values->m_Items + 7,__this_02);
        pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
        if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) goto LAB_03258b94;
        System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar7,(MethodInfo *)0x0);
      }
      local_68 = local_68 + 1;
    } while (local_68 < JKLPCJFPOBL);
  }
  return;
}

