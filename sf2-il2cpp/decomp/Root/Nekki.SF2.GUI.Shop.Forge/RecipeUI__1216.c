// TypeDefIndex 1216
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class RecipeUI : TableViewCell, IComparable<RecipeUI>
// Fields:
//   private LabelAlias _RecipeNameLabel; // 0x40
//   private RecipePropertiesUI _RecipePropertiesUI; // 0x48
//   private LabelAlias _RecipeNotAvailableLabel; // 0x50
//   private LabelAlias _EnchantWarningLabel; // 0x58
//   private RecipePriceUI _RecipePriceUI; // 0x60
//   private GameObject _FreePriceUI; // 0x68
//   private CanvasGroup _CanvasGroup; // 0x70
//   private TutorialNode _TutorialNode; // 0x78
//   private GGLKHCAIGDI PHAGOJCOMPN; // 0x80
//   private IGFGDDANEPE AIGNPODKOAH; // 0x88
//   private Vector2 MKEPHECGCNP; // 0x90
//   private bool POEHCNMCHEG; // 0x98

// ===== public override float get_Opacity()  [RVA 0x312EFE0]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_Opacity @ RVA 0x312EFE0

float Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_Opacity
                (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields).super.FHIIIPEBDLE;
}


// ===== public void ShowPerkHintByIndex(int JJMCKHDALCF, bool DBKMEBGOHLP)  [RVA 0x312EFE8]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$ShowPerkHintByIndex @ RVA 0x312EFE8

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__ShowPerkHintByIndex
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,int32_t JJMCKHDALCF,bool DBKMEBGOHLP,
               MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_RecipePropertyUI__o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *OKOHDENADGD;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *pNVar4;
  
  if ((DAT_045666b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_get_Item__);
    DAT_045666b9 = 1;
  }
  pNVar4 = (__this->fields)._RecipePropertiesUI;
  if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) &&
     (__this_00 = (pNVar4->fields).DPJGAIPHHLG,
     __this_00 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 == 0) {
      return;
    }
    iVar2 = iVar1 + -1;
    if (JJMCKHDALCF <= iVar2) {
      iVar2 = JJMCKHDALCF;
    }
    index = 0;
    if (-1 < JJMCKHDALCF) {
      index = iVar2;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<RecipePropertyUI>_get_Item__);
    if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].monitor != (UnityEngine_Component_o *)0x0)) {
      OKOHDENADGD = UnityEngine_Component__get_gameObject(pIVar3[3].monitor,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK(__this,OKOHDENADGD,DBKMEBGOHLP,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CompareTo(RecipeUI JJMOKKDDOEM)  [RVA 0x312F1F4]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$CompareTo @ RVA 0x312F1F4

int32_t Nekki_SF2_GUI_Shop_Forge_RecipeUI__CompareTo
                  (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,
                  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *JJMOKKDDOEM,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this_00;
  GGLKHCAIGDI_o *pGVar2;
  GGLKHCAIGDI_o *pGVar3;
  
  pGVar2 = (__this->fields).PHAGOJCOMPN;
  if ((((pGVar2 != (GGLKHCAIGDI_o *)0x0) &&
       (JJMOKKDDOEM != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0)) &&
      (pGVar3 = (JJMOKKDDOEM->fields).PHAGOJCOMPN, pGVar3 != (GGLKHCAIGDI_o *)0x0)) &&
     (__this_00 = (pGVar2->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0
     )) {
    iVar1 = System_String__CompareTo
                      (__this_00,(pGVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OLHPMPLENEF()  [RVA 0x312F228]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$OLHPMPLENEF @ RVA 0x312F228

/* WARNING: Removing unreachable block (ram,0x0322f510) */

bool Nekki_SF2_GUI_Shop_Forge_RecipeUI__OLHPMPLENEF
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  HOOAAGABMBL_o *pHVar5;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  HEFOANCOHDC_o *pHVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  GGLKHCAIGDI_o *__this_03;
  uint uVar7;
  IGFGDDANEPE_o *pIVar8;
  byte bVar9;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045666ba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045666ba = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_03 = (__this->fields).PHAGOJCOMPN;
  if ((__this_03 == (GGLKHCAIGDI_o *)0x0) ||
     (pIVar8 = (__this->fields).AIGNPODKOAH, pIVar8 == (IGFGDDANEPE_o *)0x0)) {
    return false;
  }
  pHVar5 = IGFGDDANEPE__JPNNODJPOCL(pIVar8,false,(MethodInfo *)0x0);
  if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM
                          (__this_03,pIVar8,(pHVar5->fields)._JDEHPJEIOCI_k__BackingField,true,
                           (MethodInfo *)0x0);
    pIVar8 = (__this->fields).AIGNPODKOAH;
    if ((pIVar8 != (IGFGDDANEPE_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
      __this_02 = (pIVar8->fields).PAPANCDPPIF;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      bVar9 = 0;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          pIVar1 = local_80.fields._current;
          if (!bVar2) {
            uVar7 = 9;
            goto LAB_0322f4a8;
          }
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
          if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = FOKJBDHLIMG__JMMDGEOBMOC
                             (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
        } while (pHVar6 == (HEFOANCOHDC_o *)0x0);
        if (__this_02 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                            );
          if (!bVar2) {
            uVar7 = 4;
            goto LAB_0322f440;
          }
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              ((long)&local_a0.fields._current[7].monitor + 4),(MethodInfo *)0x0);
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pHVar6->fields)._MDAJFAPLLOH_k__BackingField.fields,(MethodInfo *)0x0)
          ;
        } while (iVar3 != iVar4);
        bVar9 = 1;
        uVar7 = 8;
LAB_0322f440:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      } while ((uVar7 | 4) == 4);
LAB_0322f4a8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      return (bool)(bVar9 & uVar7 == 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetHighlighted()  [RVA 0x312F5D4]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$SetHighlighted @ RVA 0x312F5D4

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__SetHighlighted
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void set_HintOffset(Vector2 CJNHFNHJHPE)  [RVA 0x312F5D8]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$set_HintOffset @ RVA 0x312F5D8

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__set_HintOffset
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).MKEPHECGCNP.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields).MKEPHECGCNP.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public void UpdateOpacity()  [RVA 0x312F5E0]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$UpdateOpacity @ RVA 0x312F5E0

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__UpdateOpacity
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha
              (__this_00,(__this->fields).super.FHIIIPEBDLE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGFGDDANEPE get_Item()  [RVA 0x312F604]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_Item @ RVA 0x312F604

IGFGDDANEPE_o *
Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_Item
          (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields).AIGNPODKOAH;
}


// ===== public override void SetSelected()  [RVA 0x312F60C]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$SetSelected @ RVA 0x312F60C

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__SetSelected
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return;
}


// ===== public GGLKHCAIGDI get_Recipe()  [RVA 0x312F610]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_Recipe @ RVA 0x312F610

GGLKHCAIGDI_o *
Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_Recipe
          (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields).PHAGOJCOMPN;
}


// ===== public Vector2 get_HintOffset()  [RVA 0x312F618]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_HintOffset @ RVA 0x312F618

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_HintOffset
          (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).MKEPHECGCNP.fields;
}


// ===== private void AMKNLFPFLPK(GameObject OKOHDENADGD)  [RVA 0x312F620]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$AMKNLFPFLPK @ RVA 0x312F620

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,UnityEngine_GameObject_o *OKOHDENADGD,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK(__this,OKOHDENADGD,false,in_x3);
  return;
}


// ===== public RecipePriceUI get_RecipePriceUI()  [RVA 0x312F628]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_RecipePriceUI @ RVA 0x312F628

Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *
Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_RecipePriceUI
          (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._RecipePriceUI;
}


// ===== public void RefreshPrice()  [RVA 0x312F630]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$RefreshPrice @ RVA 0x312F630

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__RefreshPrice
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this_00;
  
  __this_00 = (__this->fields)._RecipePriceUI;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__RefreshMaterials(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(GGLKHCAIGDI NDLOGJOGFCA, IGFGDDANEPE ANMFBABEMFD)  [RVA 0x312F64C]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$Refresh @ RVA 0x312F64C

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
               IGFGDDANEPE_o *ANMFBABEMFD,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  bool bVar1;
  int32_t HLKBCKLJHHI;
  HOOAAGABMBL_o *pHVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MDLDFLDGLND_o *LIMHKIDICNM;
  System_Action_GameObject__o *ACOFKBGCMHA;
  UnityEngine_GameObject_o *pUVar4;
  BFBONKPKBNL_o *CJNHFNHJHPE;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar5;
  System_String_o **ppSVar6;
  MethodInfo *method_00;
  GGLKHCAIGDI_o *pGVar7;
  System_String_o *value;
  IGFGDDANEPE_o **ppIVar8;
  GGLKHCAIGDI_o **ppGVar9;
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *pNVar10;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *pNVar11;
  
  if ((DAT_045666bb & 1) == 0) {
    FUN_01bab630(&System_Action<GameObject>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_RecipeUI_AMKNLFPFLPK__);
    DAT_045666bb = 1;
  }
  ppGVar9 = &(__this->fields).PHAGOJCOMPN;
  *ppGVar9 = NDLOGJOGFCA;
  thunk_FUN_01c20e04(ppGVar9,NDLOGJOGFCA);
  ppIVar8 = &(__this->fields).AIGNPODKOAH;
  *ppIVar8 = ANMFBABEMFD;
  thunk_FUN_01c20e04(ppIVar8,ANMFBABEMFD);
  if (((*ppIVar8 != (IGFGDDANEPE_o *)0x0) &&
      (pHVar2 = IGFGDDANEPE__JPNNODJPOCL(*ppIVar8,false,(MethodInfo *)0x0),
      pHVar2 != (HOOAAGABMBL_o *)0x0)) && (*ppGVar9 != (GGLKHCAIGDI_o *)0x0)) {
    DPCEFBCDHPA = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
    bVar1 = GGLKHCAIGDI__EMFCFMDNOBE
                      (*ppGVar9,(__this->fields).AIGNPODKOAH,DPCEFBCDHPA,(MethodInfo *)0x0);
    pGVar7 = (__this->fields).PHAGOJCOMPN;
    (__this->fields).POEHCNMCHEG = bVar1;
    if ((pGVar7 != (GGLKHCAIGDI_o *)0x0) &&
       (pNVar3 = (__this->fields)._RecipeNameLabel, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar3,(pGVar7->fields)._HONAAKEIHJI_k__BackingField,(MethodInfo *)0x0);
      pGVar7 = (__this->fields).PHAGOJCOMPN;
      if (pGVar7 != (GGLKHCAIGDI_o *)0x0) {
        pNVar11 = (__this->fields)._RecipePropertiesUI;
        HLKBCKLJHHI = GGLKHCAIGDI__ICMIMIOJPMK(pGVar7,*ppIVar8,(MethodInfo *)0x0);
        if (*ppGVar9 != (GGLKHCAIGDI_o *)0x0) {
          LIMHKIDICNM = GGLKHCAIGDI__IPJOEKMPEJA(*ppGVar9,*ppIVar8,(MethodInfo *)0x0);
          if (*ppGVar9 != (GGLKHCAIGDI_o *)0x0) {
            bVar1 = GGLKHCAIGDI__PCDGMIBPFEO
                              (*ppGVar9,(__this->fields).AIGNPODKOAH,DPCEFBCDHPA,(MethodInfo *)0x0);
            ACOFKBGCMHA = (System_Action_GameObject__o *)
                          thunk_FUN_01bda818(System_Action<GameObject>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar11 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) {
              Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__Refresh
                        (pNVar11,HLKBCKLJHHI,LIMHKIDICNM,bVar1,ACOFKBGCMHA,(MethodInfo *)0x0);
              pNVar11 = (__this->fields)._RecipePropertiesUI;
              if ((pNVar11 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar4,(__this->fields).POEHCNMCHEG,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._RecipeNotAvailableLabel;
                if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive
                            (pUVar4,(__this->fields).POEHCNMCHEG == false,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields)._EnchantWarningLabel;
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    if ((__this->fields).POEHCNMCHEG == false) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = Nekki_SF2_GUI_Shop_Forge_RecipeUI__OLHPMPLENEF(__this,method_00);
                    }
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
                      pGVar7 = (__this->fields).PHAGOJCOMPN;
                      if (pGVar7 != (GGLKHCAIGDI_o *)0x0) {
                        pNVar10 = (__this->fields)._RecipePriceUI;
                        CJNHFNHJHPE = GGLKHCAIGDI__GPGGNMAFOJD(pGVar7,*ppIVar8,(MethodInfo *)0x0);
                        if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                          Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_RecipePrice
                                    (pNVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                          pNVar10 = (__this->fields)._RecipePriceUI;
                          if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                            Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_IsPriceVisible
                                      (pNVar10,true,(MethodInfo *)0x0);
                            pNVar10 = (__this->fields)._RecipePriceUI;
                            if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                              bVar1 = Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_IsFreePrice
                                                (pNVar10,(MethodInfo *)0x0);
                              pNVar10 = (__this->fields)._RecipePriceUI;
                              if ((pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) &&
                                 (pUVar4 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pNVar10,
                                                      (MethodInfo *)0x0),
                                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive
                                          (pUVar4,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                                pUVar4 = (__this->fields)._FreePriceUI;
                                if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                                   (pUVar4 = UnityEngine_GameObject__get_gameObject
                                                       (pUVar4,(MethodInfo *)0x0),
                                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
                                  __this_00 = (UnityEngine_Object_o *)
                                              UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this,
                                                         (MethodInfo *)0x0);
                                  pGVar7 = (__this->fields).PHAGOJCOMPN;
                                  if ((pGVar7 != (GGLKHCAIGDI_o *)0x0) &&
                                     (pNVar5 = (__this->fields)._TutorialNode,
                                     pNVar5 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0)) {
                                    value = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
                                    ppSVar6 = &(pNVar5->fields)._ID;
                                    *ppSVar6 = value;
                                    thunk_FUN_01c20e04(ppSVar6,value);
                                    if (__this_00 != (UnityEngine_Object_o *)0x0) {
                                      UnityEngine_Object__set_name
                                                (__this_00,value,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


// ===== private void AMKNLFPFLPK(GameObject OKOHDENADGD, bool DBKMEBGOHLP)  [RVA 0x312F0AC]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$AMKNLFPFLPK @ RVA 0x312F0AC

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,UnityEngine_GameObject_o *OKOHDENADGD,
               bool DBKMEBGOHLP,MethodInfo *method)

{
  ushort uVar1;
  MMDPHPGAGAP_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CLMJPODNPKB_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CLMJPODNPKB_c *pCVar4;
  UnityEngine_Vector2_Fields UVar5;
  ulong uVar6;
  int32_t *piVar7;
  UnityEngine_GameObject_o **ppUVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_045666bc & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    DAT_045666bc = 1;
  }
  __this_00 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
  MMDPHPGAGAP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MMDPHPGAGAP_o *)0x0) {
    MMDPHPGAGAP__CJEEDJHKDBE
              (__this_00,(__this->fields).PHAGOJCOMPN,(__this->fields).AIGNPODKOAH,(MethodInfo *)0x0
              );
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      (__this_00->fields).NMFDFHKAIHG.fields.x = UVar9.fields.x;
      (__this_00->fields).NMFDFHKAIHG.fields.y = UVar9.fields.y;
      UVar5 = (__this->fields).MKEPHECGCNP.fields;
      ppUVar8 = &(__this_00->fields).LLMLOCGKBHH;
      *ppUVar8 = OKOHDENADGD;
      (__this_00->fields).BOICIIOEOKN.fields = UVar5;
      (__this_00->fields).KEBFGEPCBMC = 0x3c;
      (__this_00->fields).CPPABOCOPAD = 3;
      thunk_FUN_01c20e04(0x30000003c,UVar9.fields.y,UVar9.fields.z,ppUVar8,OKOHDENADGD);
      (__this_00->fields).HDNPGLLCNEF = DBKMEBGOHLP;
      pCVar2 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar2 != (CLMJPODNPKB_o *)0x0) {
        pCVar4 = pCVar2->klass;
        uVar1._0_1_ = (pCVar4->_2).rank;
        uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar4->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar3 = pCVar4->vtable + (*piVar7 + 3);
              goto LAB_0322f1d4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CLMJPODNPKB_TypeInfo,3);
LAB_0322f1d4:
                    /* WARNING: Could not recover jumptable at 0x0322f1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar3->methodPtr)(pCVar2,__this_00,pVVar3->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x312F948]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$.ctor @ RVA 0x312F948

void Nekki_SF2_GUI_Shop_Forge_RecipeUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCell___ctor((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void set_Opacity(float CJNHFNHJHPE)  [RVA 0x312F950]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$set_Opacity @ RVA 0x312F950

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__set_Opacity
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_TableViewCell__set_Opacity
            ((Nekki_SF2_GUI_TableViewCell_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_Forge_RecipeUI__UpdateOpacity(__this,method_00);
  return;
}


// ===== public RecipePropertiesUI get_RecipePropertiesUI()  [RVA 0x312F96C]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_RecipePropertiesUI @ RVA 0x312F96C

Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *
Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_RecipePropertiesUI
          (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._RecipePropertiesUI;
}


// ===== public bool get_IsRecipeAvailable()  [RVA 0x312F974]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$get_IsRecipeAvailable @ RVA 0x312F974

bool Nekki_SF2_GUI_Shop_Forge_RecipeUI__get_IsRecipeAvailable
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return (__this->fields).POEHCNMCHEG;
}


// ===== public override void Display()  [RVA 0x312F97C]
// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$Display @ RVA 0x312F97C

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__Display
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  return;
}

