// Nekki.SF2.GUI.UIModule$$MoveToSceneCanvas @ RVA 0x34910DC

void Nekki_SF2_GUI_UIModule__MoveToSceneCanvas(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ModuleHolder_o *__this_01;
  UnityEngine_RectTransform_o *parent;
  MethodInfo *method_00;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_04567f86 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_04567f86 = '\x01';
  }
  __this_01 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
                    /* try { // try from 0359112c to 0369126b has its CatchHandler @ 0359112c
                       catch() { ... } // from try @ 0359112c with catch @ 0359112c
                       catch() { ... } // from try @ 035912e8 with catch @ 0359112c
                       catch() { ... } // from try @ 03591310 with catch @ 0359112c
                       catch() { ... } // from try @ 03591348 with catch @ 0359112c
                       catch() { ... } // from try @ 03591378 with catch @ 0359112c
                       catch() { ... } // from try @ 035913b8 with catch @ 0359112c
                       catch() { ... } // from try @ 035913e8 with catch @ 0359112c */
  if ((__this_01 != (Nekki_SF2_GUI_ModuleHolder_o *)0x0) &&
     (parent = Nekki_SF2_GUI_ModuleHolder__get_RectTransform(__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_UIModule__Activate(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

