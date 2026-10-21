// Nekki.SF2.GUI.HintBox$$Flip @ RVA 0x339F028

void Nekki_SF2_GUI_HintBox__Flip(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c9c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c9c = 1;
  }
  if ((__this->fields).IJPNBHMPHHB != false) {
    return;
  }
  (__this->fields).IJPNBHMPHHB = true;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Rotate
              (pUVar2,(UnityEngine_Vector3_o)(ZEXT412(0x43340000) << 0x40),(MethodInfo *)0x0);
    __this_00 = (__this->fields)._Arrow;
                    /* try { // try from 0349f0a0 to 0359f1eb has its CatchHandler @ 0349f0a0
                       catch() { ... } // from try @ 0349f0a0 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f35c with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f3b0 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f3c8 with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f43c with catch @ 0349f0a0
                       catch() { ... } // from try @ 0349f46c with catch @ 0349f0a0 */
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetSiblingIndex(pUVar2,0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._Title;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f188;
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0x4334000043340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Title;
        if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0349f188;
        UnityEngine_Transform__SetSiblingIndex(pUVar2,2,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._Description;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__Rotate
                  (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0x4334000043340000),(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._Description;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetSiblingIndex(pUVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0349f188:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

