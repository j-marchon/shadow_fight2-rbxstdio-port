// TypeDefIndex 3350
// Namespace: Nekki.SF2.GUI.Fight
// public class CurrencyReward : MonoBehaviour
// Fields:
//   private ResolutionImage icon; // 0x20
//   private LabelAlias countLbl; // 0x28

// ===== private void Start()  [RVA 0x3535F58]
// Nekki.SF2.GUI.Fight.CurrencyReward$$Start @ RVA 0x3535F58

void Nekki_SF2_GUI_Fight_CurrencyReward__Start
               (Nekki_SF2_GUI_Fight_CurrencyReward_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void Update()  [RVA 0x3535F5C]
// Nekki.SF2.GUI.Fight.CurrencyReward$$Update @ RVA 0x3535F5C

void Nekki_SF2_GUI_Fight_CurrencyReward__Update
               (Nekki_SF2_GUI_Fight_CurrencyReward_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void setIcon(BNKBGIIJNLF KBLNPGCLGOF)  [RVA 0x3535F60]
// Nekki.SF2.GUI.Fight.CurrencyReward$$setIcon @ RVA 0x3535F60

void Nekki_SF2_GUI_Fight_CurrencyReward__setIcon
               (Nekki_SF2_GUI_Fight_CurrencyReward_o *__this,BNKBGIIJNLF_o *KBLNPGCLGOF,
               MethodInfo *method)

{
  HBNENINHPGF_o *pHVar1;
  bool bVar2;
  System_String_o *pSVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  int32_t local_24;
  
  if ((DAT_04568a90 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a90 = 1;
  }
  pNVar6 = (__this->fields).icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (KBLNPGCLGOF != (BNKBGIIJNLF_o *)0x0) {
    pHVar1 = (KBLNPGCLGOF->fields)._GDNLFJIBAAI_k__BackingField;
    local_24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (KBLNPGCLGOF->fields)._PKGCKALOMOF_k__BackingField.fields,
                          (MethodInfo *)0x0);
    pNVar6 = (__this->fields).icon;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      *(System_String_o **)&(pNVar6->fields).super.m_PixelsPerUnitMultiplier = pSVar3;
      thunk_FUN_01c20e04(&(pNVar6->fields).super.m_PixelsPerUnitMultiplier);
      if ((pHVar1 != (HBNENINHPGF_o *)0x0) &&
         (pNVar6 = (__this->fields).icon, pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar6,(pHVar1->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
        pNVar5 = (__this->fields).countLbl;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar4->JOKLBLMIKPK).fields.r,(pBVar4->JOKLBLMIKPK).fields.g,
                     (pBVar4->JOKLBLMIKPK).fields.b,(pBVar4->JOKLBLMIKPK).fields.a,pNVar5,
                     (pNVar5->klass->vtable)._23_set_color.method);
          pNVar5 = (__this->fields).countLbl;
          pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                      (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35360CC]
// Nekki.SF2.GUI.Fight.CurrencyReward$$.ctor @ RVA 0x35360CC

void Nekki_SF2_GUI_Fight_CurrencyReward___ctor
               (Nekki_SF2_GUI_Fight_CurrencyReward_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

