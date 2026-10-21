// Nekki.SF2.GUI.HintBox$$ResetFlip @ RVA 0x339F18C

void Nekki_SF2_GUI_HintBox__ResetFlip(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c9d = 1;
  }
  if ((__this->fields).IJPNBHMPHHB == false) {
                    /* try { // try from 0349f2e4 to 0359f2ef has its CatchHandler @ 0349f3e4 */
    return;
  }
  (__this->fields).IJPNBHMPHHB = false;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Rotate
              (pUVar2,(UnityEngine_Vector3_o)(ZEXT412(0xc3340000) << 0x40),(MethodInfo *)0x0);
                    /* try { // try from 0349f1ec to 0359f1f3 has its CatchHandler @ 0349f418 */
    __this_00 = (__this->fields)._Arrow;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0349f204 to 0359f20f has its CatchHandler @ 0349f410 */
      UnityEngine_Transform__SetSiblingIndex(pUVar2,0,(MethodInfo *)0x0);
                    /* try { // try from 0349f218 to 0359f227 has its CatchHandler @ 0349f420 */
      pNVar3 = (__this->fields)._Title;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0349f22c to 0359f253 has its CatchHandler @ 0349f41c */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f2e8;
                    /* try { // try from 0349f258 to 0359f273 has its CatchHandler @ 0349f3f8 */
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0xc3340000c3340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f2e8;
        UnityEngine_Transform__SetSiblingIndex(pUVar2,1,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._Description;
                    /* try { // try from 0349f290 to 0359f2a7 has its CatchHandler @ 0349f3e8 */
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0xc3340000c3340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Description;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0349f2d0 to 0359f2df has its CatchHandler @ 0349f3e0 */
          UnityEngine_Transform__SetSiblingIndex(pUVar2,2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0349f2e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

