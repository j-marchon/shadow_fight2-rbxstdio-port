// TypeDefIndex 888
// Namespace: Nekki.SF2.GUI.Fight
// public class ItemRewardHardmode : MonoBehaviour
// Fields:
//   private ResolutionImage icon; // 0x20

// ===== public void SetScale(float JKOJPEKLBCI)  [RVA 0x3093010]
// Nekki.SF2.GUI.Fight.ItemRewardHardmode$$SetScale @ RVA 0x3093010

void Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetScale
               (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this,float JKOJPEKLBCI,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).icon;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    value.fields.x = UVar1.fields.x * JKOJPEKLBCI;
    value.fields.y = UVar1.fields.y * JKOJPEKLBCI;
    value.fields.z = UVar1.fields.z * JKOJPEKLBCI;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetIcon(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3093060]
// Nekki.SF2.GUI.Fight.ItemRewardHardmode$$SetIcon @ RVA 0x3093060

void Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetIcon
               (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045660b7 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660b7 = 1;
  }
  pNVar3 = (__this->fields).icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar3 = (__this->fields).icon;
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(System_String_o **)&(pNVar3->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.m_PixelsPerUnitMultiplier);
    if ((IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) &&
       (pNVar3 = (__this->fields).icon, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar3,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3093140]
// Nekki.SF2.GUI.Fight.ItemRewardHardmode$$.ctor @ RVA 0x3093140

void Nekki_SF2_GUI_Fight_ItemRewardHardmode___ctor
               (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

