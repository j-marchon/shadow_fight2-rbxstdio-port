// TypeDefIndex 718
// Namespace: Nekki.SF2.GUI.DebugModules
// public class ModelDebugUI : DebugUIModule
// Fields:
//   private Text _PlayerAnimName; // 0x28
//   private Text _EnemyAnimName; // 0x30
//   private StringBuilder JCPNIJOKOED; // 0x38
//   private StringBuilder MIFJGHINNIN; // 0x40

// ===== private void Update()  [RVA 0x303CD04]
// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$Update @ RVA 0x303CD04

void Nekki_SF2_GUI_DebugModules_ModelDebugUI__Update
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o **ppSVar1;
  int32_t ACCIHBHMFPN;
  int iVar2;
  bool bVar3;
  long lVar4;
  Model_o *pOVar5;
  System_String_o *pSVar6;
  System_String_o *b;
  System_String_o *a;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Fight_o *pFVar7;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar8;
  UnityEngine_UI_Text_o *pUVar9;
  ModelParameters_o *pPVar10;
  Tactic_o *pCVar11;
  ModelAi_o *pNVar12;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  int iVar13;
  System_Text_StringBuilder_o *pSVar14;
  System_Text_StringBuilder_o **ppSVar15;
  System_Text_StringBuilder_o **ppSVar16;
  
                    /* try { // try from 0313cd14 to 0323cd17 has its CatchHandler @ 0313cf20 */
                    /* try { // try from 0313cd28 to 0323cd33 has its CatchHandler @ 0313ce38 */
  if ((DAT_04565d98 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
    FUN_01bab630(&AiData_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0313cd6c to 0323cd93 has its CatchHandler @ 0313ce48 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    DAT_04565d98 = 1;
    method = extraout_x1;
  }
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&SceneManagerSF_TypeInfo,method);
                    /* try { // try from 0313cda0 to 0323cdab has its CatchHandler @ 0313cf28 */
    DAT_04565e5a = '\x01';
    method = extraout_x1_00;
  }
  switch(SceneManagerSF_TypeInfo->static_fields->DLOIHNBNGDB) {
  case 3:
  case 6:
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313cdf4 to 0323ce1b has its CatchHandler @ 0313cf38 */
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo,method);
      DAT_04565b7f = '\x01';
    }
                    /* try { // try from 0313ce20 to 0323ce27 has its CatchHandler @ 0313cf30 */
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0313ce30 to 0323ce33 has its CatchHandler @ 0313ce48 */
    pFVar7 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
                    /* try { // try from 0313ce34 to 0323ce67 has its CatchHandler @ 0313cc2c */
    if (pFVar7 == (Fight_o *)0x0) {
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
              pOVar5 = (Model_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,iVar13,
                                  Method_System_Collections_Generic_List<Model>_get_Item__);
                    /* catch() { ... } // from try @ 0313cdf4 with catch @ 0313cf38 */
              if (pOVar5 == (Model_o *)0x0) goto LAB_0313d124;
                    /* catch() { ... } // from try @ 0313ccdc with catch @ 0313cf3c */
              bVar3 = Model__HODPOCMNNIN(pOVar5,(MethodInfo *)0x0);
              pPVar10 = (pOVar5->fields).FAPMJJBOFEF;
              ppSVar1 = ppSVar16;
              if (!bVar3) {
                ppSVar1 = ppSVar15;
              }
              if (pPVar10 == (ModelParameters_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cf58 to 0323cf6f has its CatchHandler @ 0313d028 */
              pCVar11 = (pPVar10->fields).DNAFFNAIDLB;
              if ((pCVar11 != (Tactic_o *)0x0) && ((pCVar11->fields).JDNKKGPNHPB == 2)) {
                pNVar12 = (pOVar5->fields).ADGFKAPOIFN;
                if (pNVar12 == (ModelAi_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cf78 to 0323cf7b has its CatchHandler @ 0313d018 */
                pSVar14 = *ppSVar1;
                ACCIHBHMFPN = (pNVar12->fields).PKHHAOAPGGM;
                    /* try { // try from 0313cf84 to 0323cfef has its CatchHandler @ 0313d01c */
                if ((AiData_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = AiData__HIJHOOOGLAN(ACCIHBHMFPN,(MethodInfo *)0x0);
                if (pSVar14 == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d124;
                System_Text_StringBuilder__Append(pSVar14,pSVar6,(MethodInfo *)0x0);
                System_Text_StringBuilder__Append(pSVar14,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
              }
              iVar2 = (__this_00->fields)._size;
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar2);
            if (0 < iVar2) {
              iVar13 = 0;
              do {
                pOVar5 = (Model_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_00,iVar13,
                                    Method_System_Collections_Generic_List<Model>_get_Item__);
                if (pOVar5 == (Model_o *)0x0) goto LAB_0313d124;
                    /* try { // try from 0313cff0 to 0323d007 has its CatchHandler @ 0313cc2c */
                bVar3 = Model__HODPOCMNNIN(pOVar5,(MethodInfo *)0x0);
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


// ===== protected override void GIENGNEGHPJ()  [RVA 0x303D31C]
// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$GIENGNEGHPJ @ RVA 0x303D31C

void Nekki_SF2_GUI_DebugModules_ModelDebugUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
                    /* try { // try from 0313d324 to 0323d36f has its CatchHandler @ 0313d134 */
                    /* catch() { ... } // from try @ 0313d268 with catch @ 0313d328 */
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313d308 with catch @ 0313d32c */
  pUVar1 = (__this->fields)._EnemyAnimName;
                    /* catch() { ... } // from try @ 0313d2a8 with catch @ 0313d330 */
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* catch() { ... } // from try @ 0313d224 with catch @ 0313d334 */
                    /* catch() { ... } // from try @ 0313d29c with catch @ 0313d338 */
                    /* catch() { ... } // from try @ 0313d21c with catch @ 0313d33c */
                    /* catch() { ... } // from try @ 0313d284 with catch @ 0313d340
                       catch() { ... } // from try @ 0313d318 with catch @ 0313d340 */
                    /* catch() { ... } // from try @ 0313d20c with catch @ 0313d344 */
    (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar1,0,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
                    /* catch() { ... } // from try @ 0313d1fc with catch @ 0313d348 */
    pUVar1 = (__this->fields)._PlayerAnimName;
                    /* catch() { ... } // from try @ 0313d1f4 with catch @ 0313d34c */
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                    /* catch() { ... } // from try @ 0313d1f0 with catch @ 0313d350 */
                    /* catch() { ... } // from try @ 0313d1d0 with catch @ 0313d354 */
                    /* catch() { ... } // from try @ 0313d248 with catch @ 0313d358
                       catch() { ... } // from try @ 0313d310 with catch @ 0313d358 */
                    /* WARNING: Could not recover jumptable at 0x0313d364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar1,0,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string AGDJPBMLGHD(Model INNMCFJNEAE)  [RVA 0x303D128]
// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$AGDJPBMLGHD @ RVA 0x303D128

System_String_o *
Nekki_SF2_GUI_DebugModules_ModelDebugUI__AGDJPBMLGHD(Model_o *INNMCFJNEAE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  System_Text_StringBuilder_o *__this;
  InfoAnimation_o *pEVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  ModelAnimation_o *__this_01;
  MethodInfo *extraout_x1;
  ModelPhysics_o *pMVar5;
  int index;
  
                    /* try { // try from 0313d134 to 0323d1cf has its CatchHandler @ 0313d134
                       catch() { ... } // from try @ 0313d134 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d2b4 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d324 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d374 with catch @ 0313d134
                       catch() { ... } // from try @ 0313d3f8 with catch @ 0313d134 */
  if ((DAT_04565d99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_173/*"    "*/);
    FUN_01bab630(&StringLiteral_584/*" | "*/);
    FUN_01bab630(&StringLiteral_1246/*"----"*/);
    DAT_04565d99 = 1;
    method = extraout_x1;
  }
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (INNMCFJNEAE == (Model_o *)0x0) goto LAB_0313d318;
  pEVar3 = Model__FMEOPPFIHCB(INNMCFJNEAE,(MethodInfo *)0x0);
                    /* try { // try from 0313d1d0 to 0323d1e3 has its CatchHandler @ 0313d354 */
  bVar2 = Model__NDBKBPEHEON(INNMCFJNEAE,(MethodInfo *)0x0);
  if (bVar2) {
    pMVar5 = (INNMCFJNEAE->fields).GJLEPEPAOKD;
    if (pMVar5 == (ModelPhysics_o *)0x0) goto LAB_0313d318;
    value = (pMVar5->fields).AGHCNFGKHCH;
                    /* try { // try from 0313d1f0 to 0323d1f3 has its CatchHandler @ 0313d350 */
    __this_00 = Model__OBKEHOHFBAA(INNMCFJNEAE,(MethodInfo *)0x0);
                    /* try { // try from 0313d1f4 to 0323d1f7 has its CatchHandler @ 0313d34c */
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0313d318;
    iVar1 = (__this_00->fields)._size;
                    /* try { // try from 0313d1fc to 0323d207 has its CatchHandler @ 0313d348 */
    if (0 < iVar1) {
                    /* try { // try from 0313d20c to 0323d20f has its CatchHandler @ 0313d344 */
      index = 0;
      do {
                    /* try { // try from 0313d21c to 0323d21f has its CatchHandler @ 0313d33c */
                    /* try { // try from 0313d224 to 0323d227 has its CatchHandler @ 0313d334 */
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
        System_Text_StringBuilder__Append(__this,pSVar4,(MethodInfo *)0x0);
        if (index < iVar1 + -1) {
                    /* try { // try from 0313d248 to 0323d25b has its CatchHandler @ 0313d358 */
          System_Text_StringBuilder__Append(__this,StringLiteral_584/*" | "*/,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (iVar1 != index);
      goto LAB_0313d2c8;
    }
  }
  else {
                    /* try { // try from 0313d268 to 0323d26b has its CatchHandler @ 0313d328 */
    if (pEVar3 == (InfoAnimation_o *)0x0) {
                    /* try { // try from 0313d2a8 to 0323d2b3 has its CatchHandler @ 0313d330 */
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
                    /* try { // try from 0313d2b4 to 0323d307 has its CatchHandler @ 0313d134 */
      System_Text_StringBuilder__Append(__this,StringLiteral_1246/*"----"*/,(MethodInfo *)0x0);
      value = -1;
    }
    else {
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0313d318;
                    /* try { // try from 0313d284 to 0323d28b has its CatchHandler @ 0313d340 */
      System_Text_StringBuilder__Append(__this,(pEVar3->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      __this_01 = (INNMCFJNEAE->fields).OAKOFJJIOFF;
      if (__this_01 == (ModelAnimation_o *)0x0) goto LAB_0313d318;
      value = ModelAnimation__MKIHMHHJLHE(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0313d29c to 0323d29f has its CatchHandler @ 0313d338 */
    }
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
LAB_0313d2c8:
    System_Text_StringBuilder__Append(__this,StringLiteral_173/*"    "*/,(MethodInfo *)0x0);
    if (-1 < value) {
      System_Text_StringBuilder__Append(__this,value,(MethodInfo *)0x0);
    }
                    /* try { // try from 0313d308 to 0323d30b has its CatchHandler @ 0313d32c */
                    /* try { // try from 0313d310 to 0323d313 has its CatchHandler @ 0313d358 */
                    /* WARNING: Could not recover jumptable at 0x0313d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar4;
  }
LAB_0313d318:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0313d318 to 0323d323 has its CatchHandler @ 0313d340 */
  FUN_01bab8c8();
}


// ===== protected override bool ACBLFBAIHPN()  [RVA 0x303D36C]
// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$ACBLFBAIHPN @ RVA 0x303D36C

bool Nekki_SF2_GUI_DebugModules_ModelDebugUI__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  
                    /* try { // try from 0313d370 to 0323d373 has its CatchHandler @ 0313d3d0 */
                    /* try { // try from 0313d374 to 0323d3e7 has its CatchHandler @ 0313d134 */
  bVar2 = Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
                    ((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&SceneManagerSF_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    uVar1 = SceneManagerSF_TypeInfo->static_fields->DLOIHNBNGDB - 3;
    if (uVar1 < 5) {
      return (bool)((byte)(0x1b >> (ulong)(uVar1 & 0x1f)) & 1);
    }
  }
                    /* catch() { ... } // from try @ 0313d370 with catch @ 0313d3d0 */
  return false;
}


// ===== public void .ctor()  [RVA 0x303D3D8]
// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$.ctor @ RVA 0x303D3D8

void Nekki_SF2_GUI_DebugModules_ModelDebugUI___ctor
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0313d3e8 to 0323d3f7 has its CatchHandler @ 0313d40c */
  if ((DAT_04565d9a & 1) == 0) {
                    /* try { // try from 0313d3f8 to 0323d403 has its CatchHandler @ 0313d134 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 0313d404 to 0323d40b has its CatchHandler @ 0313d40c */
    DAT_04565d9a = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0313d3e8 with catch @ 0313d40c
                       catch() { ... } // from try @ 0313d404 with catch @ 0313d40c */
  pSVar1 = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).JCPNIJOKOED;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).MIFJGHINNIN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

