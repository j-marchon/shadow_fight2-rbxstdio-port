// TypeDefIndex 669
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class MaterialPriceUI : MonoBehaviour
// Fields:
//   private ResolutionImage _Icon; // 0x20
//   private Text _Price; // 0x28
//   private bool IJJGMLBCFFA; // 0x30
//   private BNKBGIIJNLF FICNNKFIABO; // 0x38

// ===== public bool get_IsPriceUndefined()  [RVA 0x3026748]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$get_IsPriceUndefined @ RVA 0x3026748

bool Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__get_IsPriceUndefined
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  return (__this->fields).IJJGMLBCFFA;
}


// ===== public void set_IsPriceUndefined(bool CJNHFNHJHPE)  [RVA 0x3026750]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$set_IsPriceUndefined @ RVA 0x3026750

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_IsPriceUndefined
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).IJJGMLBCFFA = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__Refresh(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public bool get_IsPriceVisible()  [RVA 0x3026A48]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$get_IsPriceVisible @ RVA 0x3026A48

bool Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__get_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Text_o *__this_00;
  
  __this_00 = (__this->fields)._Price;
  if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
    bVar1 = UnityEngine_Behaviour__get_enabled
                      ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsPriceVisible(bool CJNHFNHJHPE)  [RVA 0x3026A64]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$set_IsPriceVisible @ RVA 0x3026A64

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  
  __this_00 = (__this->fields)._Price;
  if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BNKBGIIJNLF get_Material()  [RVA 0x3026A84]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$get_Material @ RVA 0x3026A84

BNKBGIIJNLF_o *
Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__get_Material
          (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  return (__this->fields).FICNNKFIABO;
}


// ===== public void set_Material(BNKBGIIJNLF CJNHFNHJHPE)  [RVA 0x3026A8C]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$set_Material @ RVA 0x3026A8C

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_Material
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,BNKBGIIJNLF_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).FICNNKFIABO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__Refresh(__this,method_00);
  return;
}


// ===== public void Refresh()  [RVA 0x302675C]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$Refresh @ RVA 0x302675C

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  GameUtils_HLAKGGFFNAO_o *__this_00;
  Roster_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  BNKBGIIJNLF_o *pBVar7;
  HBNENINHPGF_o *pHVar8;
  UnityEngine_UI_Text_o *pUVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Color_o UVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 extraout_var;
  
  if ((DAT_04565c93 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2484/*"?"*/);
    DAT_04565c93 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  pBVar7 = (__this->fields).FICNNKFIABO;
  if (pBVar7 == (BNKBGIIJNLF_o *)0x0) {
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_03126a44;
    bVar1 = false;
  }
  else {
    pNVar5 = (__this->fields)._Icon;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pHVar8 = (pBVar7->fields)._GDNLFJIBAAI_k__BackingField, pHVar8 == (HBNENINHPGF_o *)0x0))
    goto LAB_03126a44;
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Inequality
                      ((pNVar5->fields)._TexturePath,(pHVar8->fields)._PGCEKJLODEJ_k__BackingField,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar7 = (__this->fields).FICNNKFIABO;
      if (((pBVar7 == (BNKBGIIJNLF_o *)0x0) ||
          (pHVar8 = (pBVar7->fields)._GDNLFJIBAAI_k__BackingField, pHVar8 == (HBNENINHPGF_o *)0x0))
         || (pNVar5 = (__this->fields)._Icon, pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
      goto LAB_03126a44;
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar5,(pHVar8->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
    }
    pUVar9 = (__this->fields)._Price;
    if ((__this->fields).IJJGMLBCFFA == false) {
      pBVar7 = (__this->fields).FICNNKFIABO;
      if (pBVar7 == (BNKBGIIJNLF_o *)0x0) goto LAB_03126a44;
      uStack_38._0_4_ = (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue;
      uStack_38._4_1_ = (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive;
      uStack_38._5_1_ = (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.inited;
      uStack_38._6_2_ =
           *(undefined2 *)&(pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe;
      local_40._0_4_ = (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey;
      local_40._4_4_ = (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue;
      __this_03.fields.fakeValue = 0;
      __this_03.fields.fakeValueActive = false;
      __this_03.fields.inited = false;
      __this_03.fields._14_2_ = 0;
      __this_03.fields._0_8_ = &local_40;
      pSVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_03,method_00);
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_03126a44;
      (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                (pUVar9,pSVar4,(pUVar9->klass->vtable)._75_set_text.method);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar7 = (__this->fields).FICNNKFIABO;
      if (((pBVar7 == (BNKBGIIJNLF_o *)0x0) ||
          (pHVar8 = (pBVar7->fields)._GDNLFJIBAAI_k__BackingField, pHVar8 == (HBNENINHPGF_o *)0x0))
         || (__this_00 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC,
            __this_00 == (GameUtils_HLAKGGFFNAO_o *)0x0)) goto LAB_03126a44;
      pHVar8 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                         (__this_00,(pHVar8->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0)
      ;
      pUVar9 = (__this->fields)._Price;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_01 == (Roster_o *)0x0) goto LAB_03126a44;
      iVar2 = Roster__FCPIAEEKGEL(__this_01,pHVar8,(MethodInfo *)0x0);
      pBVar7 = (__this->fields).FICNNKFIABO;
      if (pBVar7 == (BNKBGIIJNLF_o *)0x0) goto LAB_03126a44;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pBVar7->fields)._PKGCKALOMOF_k__BackingField.fields,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
                    /* try { // try from 031269b8 to 03226b2f has its CatchHandler @ 031269b8
                       catch() { ... } // from try @ 031269b8 with catch @ 031269b8
                       catch() { ... } // from try @ 03126bc8 with catch @ 031269b8
                       catch() { ... } // from try @ 03126d80 with catch @ 031269b8
                       catch() { ... } // from try @ 03126db4 with catch @ 031269b8
                       catch() { ... } // from try @ 03126de4 with catch @ 031269b8 */
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar14 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
        fVar13 = UVar14.fields.a;
        fVar12 = UVar14.fields.b;
        fVar11 = UVar14.fields.g;
        uVar10 = CONCAT44(extraout_var,UVar14.fields.r);
      }
      else {
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
        uVar10 = (ulong)(uint)(pBVar6->FHIAKPJBBCB).fields.r;
        fVar11 = (pBVar6->FHIAKPJBBCB).fields.g;
        fVar12 = (pBVar6->FHIAKPJBBCB).fields.b;
        fVar13 = (pBVar6->FHIAKPJBBCB).fields.a;
      }
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_03126a44;
      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                (uVar10,fVar11,fVar12,fVar13,pUVar9,(pUVar9->klass->vtable)._23_set_color.method);
    }
    else {
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_03126a44;
      (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                (pUVar9,StringLiteral_2484/*"?"*/,(pUVar9->klass->vtable)._75_set_text.method);
      pUVar9 = (__this->fields)._Price;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_03126a44;
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(pBVar6->FHIAKPJBBCB).fields.r,(pBVar6->FHIAKPJBBCB).fields.g,
                 (pBVar6->FHIAKPJBBCB).fields.b,(pBVar6->FHIAKPJBBCB).fields.a,pUVar9,
                 (pUVar9->klass->vtable)._23_set_color.method);
    }
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
LAB_03126a44:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = true;
  }
  UnityEngine_GameObject__SetActive(__this_02,bVar1,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3026AA8]
// Nekki.SF2.GUI.Shop.Forge.MaterialPriceUI$$.ctor @ RVA 0x3026AA8

void Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

