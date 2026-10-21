// TypeDefIndex 2316
// Namespace: 
// public class AMLGCIBIOLF : BOFEMGGNODC
// Fields:
//   private string DPDEAEJBFKA; // 0x68
//   private string MHDJAEILAJL; // 0x70
//   private bool IFJHFNKOFDE; // 0x78
//   private HPPDIEDAKEC LKGMCFDHLPK; // 0x7C
//   private string MLPKGJACOFA; // 0x80
//   private HOOAAGABMBL IHKJJFAEEHM; // 0x88
//   private string PLHGHGMGFKK; // 0x90

// ===== private void GBPHJBEGCEH()  [RVA 0x331BA34]
// AMLGCIBIOLF$$GBPHJBEGCEH @ RVA 0x331BA34

void AMLGCIBIOLF__GBPHJBEGCEH(AMLGCIBIOLF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  NDPMLPGANCI_o *pNVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  FFHKCJAOPLI_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  undefined1 auVar5 [16];
  
  if ((DAT_04567818 & 1) == 0) {
    FUN_01bab630(&Method_AMLGCIBIOLF_IGHPJAOOKAF__);
    FUN_01bab630(&Method_AMLGCIBIOLF_LGEMJFBPAGO__);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04567818 = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).LKGMCFDHLPK != 0)) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).LKGMCFDHLPK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
         (__this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                                 (MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) {
        Nekki_SF2_GUI_Shop_InfoPanelContent__SetFlashingButtons
                  (__this_00,(__this->fields).PLHGHGMGFKK,(MethodInfo *)0x0);
LAB_0341bccc:
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                    thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      if (iVar2 == 4) {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar2 = (__this->fields).LKGMCFDHLPK;
          IKKAMAMLIKA = (__this->fields).IHKJJFAEEHM;
          __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
          FFHKCJAOPLI___ctor(__this_01,iVar2,IKKAMAMLIKA,(System_String_o *)0x0,
                             (System_String_o *)0x0,(MethodInfo *)0x0);
          if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
            bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                              (pNVar4,4,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,
                               (__this->fields).IFJHFNKOFDE,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            goto LAB_0341bccc;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x331BCE8]
// AMLGCIBIOLF$$OFPHPMGMCAL @ RVA 0x331BCE8

System_String_o * AMLGCIBIOLF__OFPHPMGMCAL(AMLGCIBIOLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04567819 & 1) == 0) {
    FUN_01bab630(&HPPDIEDAKEC_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04567819 = 1;
  }
  local_48.klass = (System_Enum_c *)HPPDIEDAKEC_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = (__this->fields).LKGMCFDHLPK;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_167/*" "*/,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void IGHPJAOOKAF(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x331BD7C]
// AMLGCIBIOLF$$IGHPJAOOKAF @ RVA 0x331BD7C

void AMLGCIBIOLF__IGHPJAOOKAF(AMLGCIBIOLF_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456781a & 1) == 0) {
    FUN_01bab630(&Method_AMLGCIBIOLF_IGHPJAOOKAF__,KDLGNPCKLIJ);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456781a = 1;
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
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_0341bf28;
    Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
               (__this->fields).LKGMCFDHLPK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
         (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
       (__this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                               (MethodInfo *)0x0),
       __this_00 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_0341bf28;
    Nekki_SF2_GUI_Shop_InfoPanelContent__SetFlashingButtons
              (__this_00,(__this->fields).PLHGHGMGFKK,(MethodInfo *)0x0);
  }
  __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_01 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0341bf28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x331BF2C]
// AMLGCIBIOLF$$.ctor @ RVA 0x331BF2C

void AMLGCIBIOLF___ctor(AMLGCIBIOLF_o *__this,MethodInfo *method)

{
  if ((DAT_0456781b & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456781b = 1;
  }
  (__this->fields).DPDEAEJBFKA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).MHDJAEILAJL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).IFJHFNKOFDE = true;
  (__this->fields).MLPKGJACOFA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x331BFAC]
// AMLGCIBIOLF$$LGEMJFBPAGO @ RVA 0x331BFAC

void AMLGCIBIOLF__LGEMJFBPAGO(AMLGCIBIOLF_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_0456781c & 1) == 0) {
    FUN_01bab630(&Method_AMLGCIBIOLF_LGEMJFBPAGO__,KDLGNPCKLIJ);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_0456781c = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x331C054]
// AMLGCIBIOLF$$MAHFCKJGBPP @ RVA 0x331C054

void AMLGCIBIOLF__MAHFCKJGBPP(AMLGCIBIOLF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  DOPEEDABNEK_o *pDVar4;
  HOOAAGABMBL_o *pHVar5;
  KKLJIDJBFEI_o *pKVar6;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  HOOAAGABMBL_o **ppHVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456781d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456781d = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).DPDEAEJBFKA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar7,(MethodInfo *)0x0);
  iVar3 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar7,(MethodInfo *)0x0);
  (__this->fields).LKGMCFDHLPK = iVar3;
  pSVar7 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).MHDJAEILAJL,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).MLPKGJACOFA;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 != (DOPEEDABNEK_o *)0x0) {
    pHVar5 = DOPEEDABNEK__CKKIPBAIEMN(pDVar4,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    ppHVar9 = &(__this->fields).IHKJJFAEEHM;
    *ppHVar9 = pHVar5;
    thunk_FUN_01c20e04(ppHVar9,pHVar5);
    BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (*ppHVar9 == (HOOAAGABMBL_o *)0x0) {
      pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar6 == (KKLJIDJBFEI_o *)0x0) goto LAB_0341c2b8;
      method_00 = extraout_x1_00;
      if ((pKVar6->fields).super._MGGBEPKMPCF_k__BackingField != false) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if ((pDVar4 == (DOPEEDABNEK_o *)0x0) ||
           (__this_00 = (pDVar4->fields)._BDIDINACBBH_k__BackingField,
           __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) goto LAB_0341c2b8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_58,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            );
          pIVar1 = local_58.fields._current;
          if (!bVar2) goto LAB_0341c280;
          if ((HOOAAGABMBL_o *)local_58.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            (((HOOAAGABMBL_Fields *)((long)local_58.fields._current + 0x10))->
                             _COIPKAKHDFP_k__BackingField,*ppSVar8,(MethodInfo *)0x0);
        } while (!bVar2);
        *ppHVar9 = (HOOAAGABMBL_o *)pIVar1;
        thunk_FUN_01c20e04(ppHVar9,pIVar1);
LAB_0341c280:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        method_00 = extraout_x1_01;
      }
    }
    AMLGCIBIOLF__GBPHJBEGCEH(__this,method_00);
    return;
  }
LAB_0341c2b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x331C33C]
// AMLGCIBIOLF$$HNIHOIAMDPC @ RVA 0x331C33C

void AMLGCIBIOLF__HNIHOIAMDPC
               (AMLGCIBIOLF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_0456781e & 1) == 0) {
    FUN_01bab630(&StringLiteral_3760/*"CallEvents"*/);
    FUN_01bab630(&StringLiteral_6495/*"FlashingButtons"*/);
    FUN_01bab630(&StringLiteral_12788/*"Tab"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456781e = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_12788/*"Tab"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).DPDEAEJBFKA = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).MHDJAEILAJL = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3760/*"CallEvents"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
          (__this->fields).IFJHFNKOFDE = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_6495/*"FlashingButtons"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            ppSVar5 = &(__this->fields).PLHGHGMGFKK;
            *ppSVar5 = pSVar4;
            thunk_FUN_01c20e04(ppSVar5,pSVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

