// LEGDPJHPEOB$$GABLJCLLGPG @ RVA 0x354F7D4

void LEGDPJHPEOB__GABLJCLLGPG
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  NLPJLHOEAOE_o *pNVar4;
  AFFHKININGD_o *__this_00;
  DNELIPCHKLK_o *pDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__this_01;
  MGNDHCBAPEN_string__float__o *item;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_02;
  System_Object_array *pSVar6;
  long lVar7;
  undefined8 uVar8;
  LEGDPJHPEOB_o *pLVar9;
  undefined8 *puVar10;
  PAMEPBLOLPB_o *pPVar11;
  float OEBANKNLEMN;
  Il2CppMethodPointer local_50;
  Il2CppMethodPointer local_48;
  int32_t local_34;
  
  if ((DAT_04568b38 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10384);
    FUN_01bab630(&StringLiteral_10806);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_14953);
    FUN_01bab630(&StringLiteral_13797);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_5372);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_9186);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10809);
    FUN_01bab630(&StringLiteral_15308);
    FUN_01bab630(&StringLiteral_5793);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_10680);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_4299);
    FUN_01bab630(&StringLiteral_8677);
    FUN_01bab630(&StringLiteral_13824);
    FUN_01bab630(&StringLiteral_3077);
    FUN_01bab630(&StringLiteral_7067);
    FUN_01bab630(&StringLiteral_8780);
    FUN_01bab630(&StringLiteral_5304);
    FUN_01bab630(&StringLiteral_3426);
    FUN_01bab630(&StringLiteral_14872);
    FUN_01bab630(&StringLiteral_5576);
    FUN_01bab630(&StringLiteral_1567);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_11019);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_7066);
    DAT_04568b38 = 1;
  }
  local_34 = 0;
  local_50 = (Il2CppMethodPointer)0x0;
  local_48 = (Il2CppMethodPointer)0x0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_036503d0;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  pNVar4 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (pNVar4 == (NLPJLHOEAOE_o *)0x0) goto LAB_036503d0;
  __this_00 = NLPJLHOEAOE__POGAPHAJGBC(pNVar4,pSVar3,(MethodInfo *)0x0);
  if (__this_00 == (AFFHKININGD_o *)0x0) {
    pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    __this = (LEGDPJHPEOB_o *)0x0;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_036503d0;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar3,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_036503d8;
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogFormat(StringLiteral_5576,pSVar6,(MethodInfo *)0x0);
      return;
    }
    goto LAB_036503d4;
  }
  pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar3,(MethodInfo *)0x0);
  if (uVar2 < 0x86379168) {
    if (uVar2 < 0x621c885d) {
      if (uVar2 < 0x3719202b) {
        if (uVar2 == 0xfe07306) {
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
          if (bVar1) {
            pDVar5 = (__this_00->fields).KOILJHHCIEE;
            __this = (LEGDPJHPEOB_o *)0x0;
            if (pDVar5 == (DNELIPCHKLK_o *)0x0) goto LAB_036503d0;
            __this = (LEGDPJHPEOB_o *)
                     (*(pDVar5->klass->vtable)._3_ToString.methodPtr)
                               (pDVar5,(pDVar5->klass->vtable)._3_ToString.method);
            pLVar9 = __this;
joined_r0x036500a4:
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_0365031c:
              (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pLVar9;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields);
              return;
            }
            goto LAB_036503d0;
          }
        }
        else if (uVar2 == 0x29ade1c3) {
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13824,(MethodInfo *)0x0);
          if (bVar1) {
            pPVar11 = (__this_00->fields).JPBIBBBMCCD;
            if (pPVar11 == (PAMEPBLOLPB_o *)0x0) goto LAB_036503c0;
            local_48 = (Il2CppMethodPointer)(pPVar11->fields).DKMPMFFECBK;
            __this = (LEGDPJHPEOB_o *)
                     System_Int64__ToString((int64_t)&stack0xffffffffffffffb8,(MethodInfo *)0x0);
            pLVar9 = __this;
            goto joined_r0x036500a4;
          }
        }
        else if ((uVar2 == 0x3719202a) &&
                (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3077,(MethodInfo *)0x0),
                bVar1)) {
          puVar10 = &StringLiteral_3076;
          goto LAB_036502f4;
        }
      }
      else if (uVar2 < 0x4155597e) {
        if (uVar2 == 0x4132b520) {
                    /* try { // try from 036500e8 to 037500eb has its CatchHandler @ 036500f0 */
                    /* try { // try from 036500ec to 0375010f has its CatchHandler @ 0364ff44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500e8 with catch @ 036500f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500bc with catch @ 036500f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500a8 with catch @ 036500f8
                        */
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_14953,(MethodInfo *)0x0);
          if (bVar1) {
            pPVar11 = (__this_00->fields).JPBIBBBMCCD;
            if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
              local_34 = (pPVar11->fields).AAECGBAMDEL;
              goto LAB_0365010c;
            }
            goto LAB_036503c0;
          }
        }
        else if ((uVar2 == 0x4155597d) &&
                (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8409,(MethodInfo *)0x0),
                bVar1)) {
          pPVar11 = (__this_00->fields).JPBIBBBMCCD;
          if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
            local_34 = (pPVar11->fields).GHPHFGBIPCI;
LAB_0365010c:
                    /* try { // try from 03650110 to 03750113 has its CatchHandler @ 0365013c */
                    /* try { // try from 03650114 to 0375014b has its CatchHandler @ 0364ff44 */
            __this = (LEGDPJHPEOB_o *)
                     System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
            pLVar9 = __this;
            goto joined_r0x036500a4;
          }
LAB_036503c0:
          __this = (LEGDPJHPEOB_o *)0x1;
          pLVar9 = StringLiteral_1567;
          goto joined_r0x036500a4;
        }
      }
      else if (uVar2 == 0x521c41c5) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_10809,(MethodInfo *)0x0);
        if (bVar1) {
          puVar10 = &StringLiteral_10806;
          goto LAB_036502f4;
        }
      }
      else {
                    /* try { // try from 0364fe24 to 0374fe27 has its CatchHandler @ 0364fe50 */
                    /* try { // try from 0364fe28 to 0374fe5f has its CatchHandler @ 0364fbfc */
        if ((uVar2 == 0x621c885c) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_4299,(MethodInfo *)0x0), bVar1))
        {
                    /* catch() { ... } // from try @ 0364fe24 with catch @ 0364fe50 */
          bVar1 = AFFHKININGD__PHEKFMPOHBK(__this_00,(MethodInfo *)0x0);
          goto LAB_03650008;
        }
      }
    }
    else if (uVar2 < 0x756008e5) {
      if (uVar2 == 0x66de7a09) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5304,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (LEGDPJHPEOB_o *)AFFHKININGD__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else {
        if (uVar2 == 0x725e221d) {
          puVar10 = &StringLiteral_10806;
          goto LAB_036501e0;
        }
                    /* try { // try from 0364fbfc to 0374fce3 has its CatchHandler @ 0364fbfc
                       catch() { ... } // from try @ 0364fbfc with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fd0c with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe00 with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe28 with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe68 with catch @ 0364fbfc */
        if ((uVar2 == 0x756008e4) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3535,(MethodInfo *)0x0), bVar1))
        {
          __this_01 = &(__this_00->fields).LGLKMANDGPD;
LAB_03650144:
          __this = (LEGDPJHPEOB_o *)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                             (__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0365014c to 03750153 has its CatchHandler @ 03650168 */
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
    }
    else {
                    /* try { // try from 0364fd0c to 0374fdfb has its CatchHandler @ 0364fbfc */
      if (uVar2 < 0x84b84175) {
        if (uVar2 == 0x816b51f2) {
                    /* try { // try from 03650154 to 0375015f has its CatchHandler @ 0364ff44 */
                    /* try { // try from 03650160 to 03750167 has its CatchHandler @ 03650168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0365014c with catch @ 03650168
                       catch(type#2 @ 00000000) { ... } // from try @ 03650160 with catch @ 03650168
                        */
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8780,(MethodInfo *)0x0);
          if (bVar1) {
            puVar10 = &StringLiteral_8772;
            goto LAB_036502f4;
          }
        }
        else if (uVar2 == 0x84b84174) {
          puVar10 = &StringLiteral_3076;
          goto LAB_036501e0;
        }
      }
      else if (uVar2 == 0x8520a210) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5372,(MethodInfo *)0x0);
        if (bVar1) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = MGNPHCAAEIO__PINMGKELLJI(__this_00,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          item = Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair
                           (OEBANKNLEMN,(MethodInfo *)0x0);
          if (DAT_045669da == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
            DAT_045669da = '\x01';
          }
          if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
          __this = (LEGDPJHPEOB_o *)0x0;
          if (__this_02 == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0)
          goto LAB_036503d0;
          local_34 = System_Collections_Generic_List<object>__IndexOf
                               ((System_Collections_Generic_List_object__o *)__this_02,
                                (Il2CppObject *)item,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__
                               );
LAB_03650308:
          __this = (LEGDPJHPEOB_o *)
                   System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else if ((uVar2 == 0x86379167) &&
              (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_15308,(MethodInfo *)0x0),
              bVar1)) {
        pDVar5 = (__this_00->fields).KOILJHHCIEE;
        __this = (LEGDPJHPEOB_o *)0x1;
        if ((pDVar5 != (DNELIPCHKLK_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
          pLVar9 = (LEGDPJHPEOB_o *)(pDVar5->fields).GDPFBDIJNHA;
          goto LAB_0365031c;
        }
        goto LAB_036503d0;
      }
    }
  }
  else if (uVar2 < 0xbd4b2046) {
    if (uVar2 < 0x9d9dc59a) {
      if (uVar2 == 0x87286d02) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5793,(MethodInfo *)0x0);
        if (bVar1) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = MGNPHCAAEIO__EPLDDILOPAJ(__this_00,(MethodInfo *)0x0);
LAB_03650008:
          if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Convert_TypeInfo);
          }
          local_50 = (Il2CppMethodPointer)System_Convert__ToDouble(bVar1,(MethodInfo *)0x0);
          __this = (LEGDPJHPEOB_o *)
                   System_Double__ToString((double)local_50,(MethodInfo *)&stack0xffffffffffffffb0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else if (uVar2 == 0x957fd957) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3426,(MethodInfo *)0x0);
        if (bVar1) {
          pDVar5 = (__this_00->fields).KOILJHHCIEE;
          __this = (LEGDPJHPEOB_o *)0x1;
          if ((pDVar5 == (DNELIPCHKLK_o *)0x0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0))
          goto LAB_036503d0;
          pLVar9 = (LEGDPJHPEOB_o *)(pDVar5->fields).GJFJPLHCBKJ;
          goto LAB_0365031c;
        }
      }
      else if (uVar2 == 0x9d9dc599) {
        puVar10 = &StringLiteral_7066;
        goto LAB_036501e0;
      }
    }
    else if (uVar2 < 0xb7c10362) {
                    /* try { // try from 0364fce4 to 0374fceb has its CatchHandler @ 0364fe0c */
      if (uVar2 == 0xb34b4bef) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_9186,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03650110 with catch @ 0365013c */
        if (bVar1) {
          __this_01 = &(__this_00->fields).JHCMAOFOCPH;
          goto LAB_03650144;
        }
      }
      else if (uVar2 == 0xb7c10361) {
                    /* try { // try from 0364fd00 to 0374fd0b has its CatchHandler @ 0364fe08 */
        puVar10 = &StringLiteral_14870;
        goto LAB_036501e0;
      }
    }
    else {
                    /* try { // try from 0364fe60 to 0374fe67 has its CatchHandler @ 0364fe7c */
                    /* try { // try from 0364fe68 to 0374fe73 has its CatchHandler @ 0364fbfc */
      if (uVar2 == 0xb960112c) {
        puVar10 = &StringLiteral_8772;
LAB_036501e0:
        bVar1 = System_String__op_Equality(pSVar3,(System_String_o *)*puVar10,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (LEGDPJHPEOB_o *)
                   AFFHKININGD__HBJFJLBICEI(__this_00,(System_String_o *)*puVar10,(MethodInfo *)0x0)
          ;
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else {
                    /* try { // try from 0364fe74 to 0374fe7b has its CatchHandler @ 0364fe7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0364fe60 with catch @ 0364fe7c
                       catch(type#2 @ 00000000) { ... } // from try @ 0364fe74 with catch @ 0364fe7c
                        */
        if ((uVar2 == 0xbd4b2045) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13797,(MethodInfo *)0x0), bVar1)
           ) {
          local_48 = (Il2CppMethodPointer)AFFHKININGD__JGJMOEOBKGG(__this_00,(MethodInfo *)0x0);
          __this = (LEGDPJHPEOB_o *)
                   System_Int64__ToString((int64_t)&stack0xffffffffffffffb8,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
    }
  }
  else if (uVar2 < 0xcd18416a) {
    if (uVar2 < 0xc749a5e7) {
      if (uVar2 == 0xc62776f1) {
                    /* try { // try from 036500bc to 037500c7 has its CatchHandler @ 036500f4 */
                    /* try { // try from 036500c8 to 037500e7 has its CatchHandler @ 0364ff44 */
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8677,(MethodInfo *)0x0);
        if (bVar1) {
          pPVar11 = (__this_00->fields).JPBIBBBMCCD;
          if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
            local_34 = (pPVar11->fields).KHIBOGMCNJA;
            goto LAB_0365010c;
          }
          goto LAB_036503c0;
        }
      }
      else if ((uVar2 == 0xc749a5e6) &&
              (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_10384,(MethodInfo *)0x0),
              bVar1)) {
        local_34 = (__this_00->fields).GKCEBBGMBGA;
        goto LAB_03650308;
      }
    }
    else {
      if (uVar2 == 0xcb2ec7a2) {
        puVar10 = &StringLiteral_11017;
        goto LAB_036501e0;
      }
      if ((uVar2 == 0xcd184169) &&
         (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_6310,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 0364fdfc to 0374fdff has its CatchHandler @ 0364fe04 */
        pDVar5 = (__this_00->fields).KOILJHHCIEE;
                    /* try { // try from 0364fe00 to 0374fe23 has its CatchHandler @ 0364fbfc */
        __this = (LEGDPJHPEOB_o *)0x1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fdfc with catch @ 0364fe04
                        */
        if ((pDVar5 != (DNELIPCHKLK_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fd00 with catch @ 0364fe08
                        */
          pLVar9 = (LEGDPJHPEOB_o *)(pDVar5->fields).ANOPJEEGOLJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fce4 with catch @ 0364fe0c
                        */
          goto LAB_0365031c;
        }
        goto LAB_036503d0;
      }
    }
  }
  else if (uVar2 < 0xd155d06e) {
    if (uVar2 == 0xd09d0029) {
      bVar1 = System_String__op_Equality(pSVar3,StringLiteral_14872,(MethodInfo *)0x0);
      if (bVar1) {
        puVar10 = &StringLiteral_14870;
        goto LAB_036502f4;
      }
    }
    else if ((uVar2 == 0xd155d06d) &&
            (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13991,(MethodInfo *)0x0), bVar1
            )) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar4 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (pNVar4 == (NLPJLHOEAOE_o *)0x0) goto LAB_036503d0;
      __this = (LEGDPJHPEOB_o *)
               NLPJLHOEAOE__PGDMIFLKLJE(pNVar4,(__this_00->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
      pLVar9 = __this;
      goto joined_r0x036500a4;
    }
  }
  else if (uVar2 == 0xd20440f0) {
    bVar1 = System_String__op_Equality(pSVar3,StringLiteral_11019,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_11017;
      goto LAB_036502f4;
    }
  }
  else {
                    /* try { // try from 0364ff44 to 037500a7 has its CatchHandler @ 0364ff44
                       catch() { ... } // from try @ 0364ff44 with catch @ 0364ff44
                       catch() { ... } // from try @ 036500c8 with catch @ 0364ff44
                       catch() { ... } // from try @ 036500ec with catch @ 0364ff44
                       catch() { ... } // from try @ 03650114 with catch @ 0364ff44
                       catch() { ... } // from try @ 03650154 with catch @ 0364ff44 */
    if ((uVar2 == 0xd7a49ad1) &&
       (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_7067,(MethodInfo *)0x0), bVar1)) {
      puVar10 = &StringLiteral_7066;
LAB_036502f4:
      local_34 = AFFHKININGD__DGDKAHOOFNK(__this_00,(System_String_o *)*puVar10,(MethodInfo *)0x0);
      goto LAB_03650308;
    }
  }
  pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (pSVar6 != (System_Object_array *)0x0) {
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar3,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0)) {
LAB_036503d8:
      uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar8,0);
    }
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10680,pSVar6,(MethodInfo *)0x0);
      return;
    }
LAB_036503d4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_036503d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

