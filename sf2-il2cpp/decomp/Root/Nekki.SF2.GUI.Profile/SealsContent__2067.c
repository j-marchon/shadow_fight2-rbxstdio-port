// TypeDefIndex 2067
// Namespace: Nekki.SF2.GUI.Profile
// public class SealsContent : MonoBehaviour
// Fields:
//   private LabelAlias _DescriptionLabel; // 0x20
//   private HOOAAGABMBL PCBECBEFJOI; // 0x28

// ===== public void Refresh(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x32B97B4]
// Nekki.SF2.GUI.Profile.SealsContent$$Refresh @ RVA 0x32B97B4

void Nekki_SF2_GUI_Profile_SealsContent__Refresh
               (Nekki_SF2_GUI_Profile_SealsContent_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  HOOAAGABMBL_o **ppHVar1;
  
  ppHVar1 = &(__this->fields).PCBECBEFJOI;
  *ppHVar1 = CNDPGGAFHEA;
                    /* try { // try from 033b97c4 to 034b980f has its CatchHandler @ 033b9934 */
  thunk_FUN_01c20e04(ppHVar1);
  if ((*ppHVar1 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (__this->fields)._DescriptionLabel, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0
     )) {
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (__this_00,((*ppHVar1)->fields)._OICGFKLBNPE_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32B97EC]
// Nekki.SF2.GUI.Profile.SealsContent$$.ctor @ RVA 0x32B97EC

void Nekki_SF2_GUI_Profile_SealsContent___ctor
               (Nekki_SF2_GUI_Profile_SealsContent_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

