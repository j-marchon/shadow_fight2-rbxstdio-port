// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$Update @ RVA 0x303CD04

void Nekki_SF2_GUI_DebugModules_ModelDebugUI__Update
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o **ppSVar1;
  int32_t ACCIHBHMFPN;
  int iVar2;
  bool bVar3;
  long lVar4;
  OLKKAIFGGAK_o *pOVar5;
  System_String_o *pSVar6;
  System_String_o *b;
  System_String_o *a;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar7;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar8;
  UnityEngine_UI_Text_o *pUVar9;
  PJKHAJKEHEL_o *pPVar10;
  CAAJMGKIPIE_o *pCVar11;
  NGKBNOEJLPH_o *pNVar12;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  int iVar13;
  System_Text_StringBuilder_o *pSVar14;
  System_Text_StringBuilder_o **ppSVar15;
  System_Text_StringBuilder_o **ppSVar16;
  
                    /* try { // try from 0313cd14 to 0323cd17 has its CatchHandler @ 0313cf20 */
                    /* try { // try from 0313cd28 to 0323cd33 has its CatchHandler @ 0313ce38 */
  if ((DAT_04565d98 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0313cd6c to 0323cd93 has its CatchHandler @ 0313ce48 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&StringLiteral_47);
    DAT_04565d98 = 1;
    method = extraout_x1;
  }
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo,method);
                    /* try { // try from 0313cda0 to 0323cdab has its CatchHandler @ 0313cf28 */
    DAT_04565e5a = '\x01';
    method = extraout_x1_00;
  }
  switch(KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
  case 3:
  case 6:
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313cdf4 to 0323ce1b has its CatchHandler @ 0313cf38 */
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo,method);
      DAT_04565b7f = '\x01';
    }
                    /* try { // try from 0313ce20 to 0323ce27 has its CatchHandler @ 0313cf30 */
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0313ce30 to 0323ce33 has its CatchHandler @ 0313ce48 */
    pFVar7 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
                    /* try { // try from 0313ce34 to 0323ce67 has its CatchHandler @ 0313cc2c */
    if (pFVar7 == (FCJBEKHDLAF_o *)0x0) {
      return;
    }
                    /* catch() { ... } // from try @ 0313cd28 with catch @ 0313ce38 */
    ppSVar8 = &(pFVar7->fields).IILLHHPGGKA;
    goto LAB_0313ced0;
  case 4:
                    /* catch() { ... } // from try @ 0313cd6c with catch @ 0313ce48
                       catch() { ... } // from try @ 0313ce30 with catch @ 0313ce48 */
    lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 0313ce68 to 0323ce6b has its CatchHandler @ 0313cf0c */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 0313ce6c to 0323cedb has its CatchHandler @ 0313cc2c */
      lVar4 = FUN_01b81620();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
      return;
    }
    lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x148);
    break;
  default:
    goto switchD_0313cddc_caseD_5;
  case 7:
    lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
      return;
    }
    lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x90);
  }
  if (lVar4 != 0) {
    ppSVar8 = (System_Collections_Generic_List_OLKKAIFGGAK__o **)(lVar4 + 0x80);
LAB_0313ced0:
    __this_00 = *ppSVar8;
    if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      ppSVar16 = &(__this->fields).JCPNIJOKOED;
                    /* try { // try from 0313cedc to 0323cedf has its CatchHandler @ 0313cf2c */
                    /* try { // try from 0313cee0 to 0323cee7 has its CatchHandler @ 0313cf24 */
      if (*ppSVar16 != (System_Text_StringBuilder_o *)0x0) {
                    /* try { // try from 0313cee8 to 0323cef3 has its CatchHandler @ 0313cc2c */
        System_Text_StringBuilder__Clear(*ppSVar16,(MethodInfo *)0x0);
        ppSVar15 = &(__this->fields).MIFJGHINNIN;
                    /* try { // try from 0313cef4 to 0323cf0b has its CatchHandler @ 0313d094 */
        if (*ppSVar15 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Clear(*ppSVar15,(MethodInfo *)0x0);
          if (0 < (__this_00->fields)._size) {
                    /* catch() { ... } // from try @ 0313ce68 with catch @ 0313cf0c
                       try { // try from 0313cf0c to 0323cf57 has its CatchHandler @ 0313cc2c */
                    /* catch() { ... } // from try @ 0313ccb0 with catch @ 0313cf1c */
                    /* catch() { ... } // from try @ 0313cd14 with catch @ 0313cf20 */
                    /* catch() { ... } // from try @ 0313cee0 with catch @ 0313cf24 */
            iVar13 = 0;
            do {
                    /* catch() { ... } // from try @ 0313cda0 with catch @ 0313cf28 */
                    /* catch() { ... } // from try @ 0313cedc with catch @ 0313cf2c */
                    /* catch() { ... } // from try @ 0313ce20 with catch @ 0313cf30 */
                    /* catch() { ... } // from try @ 0313ccc4 with catch @ 0313cf34 */
              pOVar5 = (OLKKAIFGGAK_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,iVar13,
                                  Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
                    /* catch() { ... } // from try @ 0313cdf4 with catch @ 0313cf38 */
              if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_0313d124;
                    /* catch() { ... } // from try @ 0313ccdc with catch @ 0313cf3c */
              bVar3 = OLKKAIFGGAK__HODPOCMNNIN(pOVar5,(MethodInfo *)0x0);
              pPVar10 = (pOVar5->fields).FAPMJJBOFEF;
              ppSVar1 = ppSVar16;
              if (!bVar3) {
                ppSVar1 = ppSVar15;
              }
              if (pPVar10 == (PJKHAJKEHEL_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cf58 to 0323cf6f has its CatchHandler @ 0313d028 */
              pCVar11 = (pPVar10->fields).DNAFFNAIDLB;
              if ((pCVar11 != (CAAJMGKIPIE_o *)0x0) && ((pCVar11->fields).JDNKKGPNHPB == 2)) {
                pNVar12 = (pOVar5->fields).ADGFKAPOIFN;
                if (pNVar12 == (NGKBNOEJLPH_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cf78 to 0323cf7b has its CatchHandler @ 0313d018 */
                pSVar14 = *ppSVar1;
                ACCIHBHMFPN = (pNVar12->fields).PKHHAOAPGGM;
                    /* try { // try from 0313cf84 to 0323cfef has its CatchHandler @ 0313d01c */
                if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = OCMLPCKBHPN__HIJHOOOGLAN(ACCIHBHMFPN,(MethodInfo *)0x0);
                if (pSVar14 == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d124;
                System_Text_StringBuilder__Append(pSVar14,pSVar6,(MethodInfo *)0x0);
                System_Text_StringBuilder__Append(pSVar14,StringLiteral_47,(MethodInfo *)0x0);
              }
              iVar2 = (__this_00->fields)._size;
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar2);
            if (0 < iVar2) {
              iVar13 = 0;
              do {
                pOVar5 = (OLKKAIFGGAK_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_00,iVar13,
                                    Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
                if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cff0 to 0323d007 has its CatchHandler @ 0313cc2c */
                bVar3 = OLKKAIFGGAK__HODPOCMNNIN(pOVar5,(MethodInfo *)0x0);
                ppSVar1 = ppSVar16;
                if (!bVar3) {
                  ppSVar1 = ppSVar15;
                }
                pSVar14 = *ppSVar1;
                    /* try { // try from 0313d008 to 0323d017 has its CatchHandler @ 0313d028 */
                pSVar6 = Nekki_SF2_GUI_DebugModules_ModelDebugUI__AGDJPBMLGHD(pOVar5,method_00);
                if (pSVar14 == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d124;
                    /* catch() { ... } // from try @ 0313cf78 with catch @ 0313d018 */
                    /* catch() { ... } // from try @ 0313cf84 with catch @ 0313d01c */
                System_Text_StringBuilder__Append(pSVar14,pSVar6,(MethodInfo *)0x0);
                iVar13 = iVar13 + 1;
                    /* catch() { ... } // from try @ 0313cf58 with catch @ 0313d028
                       catch() { ... } // from try @ 0313d008 with catch @ 0313d028 */
              } while (iVar13 < (__this_00->fields)._size);
            }
          }
                    /* try { // try from 0313d030 to 0323d033 has its CatchHandler @ 0313d094 */
          pSVar14 = *ppSVar16;
                    /* try { // try from 0313d034 to 0323d04b has its CatchHandler @ 0313cc2c */
          if (pSVar14 != (System_Text_StringBuilder_o *)0x0) {
            pSVar6 = (System_String_o *)
                     (*(pSVar14->klass->vtable)._3_ToString.methodPtr)
                               (pSVar14,(pSVar14->klass->vtable)._3_ToString.method);
            pSVar14 = *ppSVar15;
            if (pSVar14 != (System_Text_StringBuilder_o *)0x0) {
                    /* try { // try from 0313d04c to 0323d04f has its CatchHandler @ 0313d074 */
                    /* try { // try from 0313d050 to 0323d077 has its CatchHandler @ 0313cc2c */
              b = (System_String_o *)
                  (*(pSVar14->klass->vtable)._3_ToString.methodPtr)
                            (pSVar14,(pSVar14->klass->vtable)._3_ToString.method);
              pUVar9 = (__this->fields)._PlayerAnimName;
              if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                    /* catch() { ... } // from try @ 0313d04c with catch @ 0313d074 */
                    /* try { // try from 0313d078 to 0323d07f has its CatchHandler @ 0313d094 */
                a = (System_String_o *)
                    (*(pUVar9->klass->vtable)._74_get_text.methodPtr)
                              (pUVar9,(pUVar9->klass->vtable)._74_get_text.method);
                    /* try { // try from 0313d080 to 0323d08b has its CatchHandler @ 0313cc2c */
                bVar3 = System_String__op_Inequality(a,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 0313d08c to 0323d093 has its CatchHandler @ 0313d094 */
                if (bVar3) {
                  pUVar9 = (__this->fields)._PlayerAnimName;
                    /* catch() { ... } // from try @ 0313cef4 with catch @ 0313d094
                       catch() { ... } // from try @ 0313d030 with catch @ 0313d094
                       catch() { ... } // from try @ 0313d078 with catch @ 0313d094
                       catch() { ... } // from try @ 0313d08c with catch @ 0313d094 */
                  if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0313d124;
                  (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                            (pUVar9,pSVar6,(pUVar9->klass->vtable)._75_set_text.method);
                }
                pUVar9 = (__this->fields)._EnemyAnimName;
                if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                  pSVar6 = (System_String_o *)
                           (*(pUVar9->klass->vtable)._74_get_text.methodPtr)
                                     (pUVar9,(pUVar9->klass->vtable)._74_get_text.method);
                  bVar3 = System_String__op_Inequality(pSVar6,b,(MethodInfo *)0x0);
                  if (!bVar3) {
                    return;
                  }
                  pUVar9 = (__this->fields)._EnemyAnimName;
                  if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313d104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                              (pUVar9,b,(pUVar9->klass->vtable)._75_set_text.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_0313d124:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
switchD_0313cddc_caseD_5:
  return;
}

