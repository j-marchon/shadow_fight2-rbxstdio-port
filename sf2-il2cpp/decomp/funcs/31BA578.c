// ADJEBFOPFFF$$AEADCLCKCEL @ RVA 0x31BA578

void ADJEBFOPFFF__AEADCLCKCEL
               (ADJEBFOPFFF_o *__this,BECIPDJBAOG_o *KJADEEFANAL,bool MKKBHANAEEK,MethodInfo *method
               )

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  ADJEBFOPFFF_o *__this_00;
  System_Action_PIADCKMDDAK__o **ppSVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  PKHMIGFEJCL_o *pPVar6;
  BECIPDJBAOG_o **ppBVar7;
  void *pvVar8;
  ulong uVar9;
  int *piVar10;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *NMMKGIMBHFF;
  UnityEngine_Object_o *x;
  BKKPAKHJDKB_c *pBVar11;
  System_Action_PIADCKMDDAK__o *CPECAEHDDDB;
  
  if ((DAT_04566c1d & 1) == 0) {
    FUN_01bab630(&System_Action<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<PIADCKMDDAK>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_ADJEBFOPFFF_<>c_IJAKLCJCJAP__);
    __this = (ADJEBFOPFFF_o *)FUN_01bab630(&ADJEBFOPFFF_<>c_TypeInfo);
    DAT_04566c1d = 1;
  }
  if (KJADEEFANAL != (BECIPDJBAOG_o *)0x0) {
    bVar1 = BECIPDJBAOG__BODMFFONFKC(KJADEEFANAL,(MethodInfo *)0x0);
    __this_00 = (ADJEBFOPFFF_o *)(ulong)bVar1;
    if (bVar1) {
      lVar2 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      __this = *(ADJEBFOPFFF_o **)(*(long *)(lVar2 + 0xc0) + 0x10);
      if (((ulong)__this[0xc].fields.KPIJKNDCENG & 0x10000000000) == 0) {
        __this = (ADJEBFOPFFF_o *)FUN_01b81620();
      }
      pBVar11 = (__this[7].fields.KPIJKNDCENG)->klass;
      if (pBVar11 == (BKKPAKHJDKB_c *)0x0) goto LAB_032ba894;
      pvVar8 = (pBVar11->_1).image;
      uVar9 = (ulong)*(ushort *)((long)pvVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)((long)pvVar8 + 0xb0) + 8);
        do {
          if (*(ODEIOKOJGDM_c **)(piVar10 + -2) == ODEIOKOJGDM_TypeInfo) {
            puVar3 = (undefined8 *)((long)pvVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_032ba6b4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(pBVar11,ODEIOKOJGDM_TypeInfo,0);
LAB_032ba6b4:
      __this_00 = (ADJEBFOPFFF_o *)(*(code *)*puVar3)(pBVar11,0,puVar3[1]);
    }
    ADJEBFOPFFF__AGFBBELPLMB
              (__this_00,
               (System_Collections_Generic_IList_PIADCKMDDAK__o *)(KJADEEFANAL->fields).AKFPFIHIHOC,
               MKKBHANAEEK,method);
    if (MKKBHANAEEK) {
      NMMKGIMBHFF = (KJADEEFANAL->fields).LEJBLHJFJHP;
      if ((ADJEBFOPFFF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CPECAEHDDDB = ADJEBFOPFFF_<>c_TypeInfo->static_fields->__9__8_0;
      if (CPECAEHDDDB == (System_Action_PIADCKMDDAK__o *)0x0) {
        if ((ADJEBFOPFFF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CPECAEHDDDB = (System_Action_PIADCKMDDAK__o *)
                      thunk_FUN_01bda818(System_Action<PIADCKMDDAK>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar4 = &ADJEBFOPFFF_<>c_TypeInfo->static_fields->__9__8_0;
        *ppSVar4 = CPECAEHDDDB;
        thunk_FUN_01c20e04(ppSVar4,CPECAEHDDDB);
      }
      DFPABHGJPJJ__NHDPECDJBGO<object>
                ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,
                 (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<PIADCKMDDAK>__);
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_IList_T__o *)
                           (KJADEEFANAL->fields).AKFPFIHIHOC,
                           Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__), !bVar1)) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      __this = (ADJEBFOPFFF_o *)0x0;
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_032ba894;
      Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0
                );
    }
    pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    __this = (ADJEBFOPFFF_o *)0x0;
    if ((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar6 = (pNVar5->fields).QuestParameters, __this = (ADJEBFOPFFF_o *)0x0,
       pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
      ppBVar7 = &(pPVar6->fields).DIJKNIEKOFL;
      *ppBVar7 = KJADEEFANAL;
      thunk_FUN_01c20e04(ppBVar7,KJADEEFANAL);
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      __this = (ADJEBFOPFFF_o *)0x0;
      if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar5,0x4c,(MethodInfo *)0x0);
        pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        __this = (ADJEBFOPFFF_o *)0x0;
        if ((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
           (pPVar6 = (pNVar5->fields).QuestParameters, __this = (ADJEBFOPFFF_o *)0x0,
           pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
          ppBVar7 = &(pPVar6->fields).DIJKNIEKOFL;
          *ppBVar7 = (BECIPDJBAOG_o *)0x0;
          thunk_FUN_01c20e04(ppBVar7,0);
          return;
        }
      }
    }
  }
LAB_032ba894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

