// Nekki.SF2.GUI.Dialogs.BaseDialog$$NPHBIMAFLMO @ RVA 0x33AF784

void Nekki_SF2_GUI_Dialogs_BaseDialog__NPHBIMAFLMO
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar7;
  
  if ((DAT_04567d3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_3404);
    DAT_04567d3b = 1;
    method = extraout_x1;
  }
  pUVar7 = (__this->fields).MCMBIPEKNLK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 034af7f8 to 035af843 has its CatchHandler @ 034afa20 */
    pUVar7 = (__this->fields).MCMBIPEKNLK;
    if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034af940;
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar7 = (__this->fields).MCMBIPEKNLK;
      if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_034af940;
      iVar2 = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034af848 to 035af84f has its CatchHandler @ 034af954 */
      if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
         ((pUVar4 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_Transform_o *)0x0 ||
          (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_Transform_o *)0x0)))) goto LAB_034af940;
                    /* try { // try from 034af860 to 035af87f has its CatchHandler @ 034afa20 */
      iVar3 = UnityEngine_Transform__get_childCount(pUVar4,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
        pUVar7 = (__this->fields).MCMBIPEKNLK;
        if ((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
           pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_034af940;
                    /* try { // try from 034af880 to 035af883 has its CatchHandler @ 034af934 */
                    /* try { // try from 034af884 to 035af887 has its CatchHandler @ 034ae7c8 */
        UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
      }
    }
  }
                    /* try { // try from 034af888 to 035af88b has its CatchHandler @ 034af904 */
                    /* try { // try from 034af88c to 035af88f has its CatchHandler @ 034af900 */
  pUVar7 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034af890 to 035af893 has its CatchHandler @ 034af8fc */
                    /* try { // try from 034af894 to 035af897 has its CatchHandler @ 034af8f8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034af898 to 035af89b has its CatchHandler @ 034af8f4 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034af89c to 035af89f has its CatchHandler @ 034af8f0 */
                    /* try { // try from 034af8a0 to 035af8a7 has its CatchHandler @ 034af8dc */
                    /* try { // try from 034af8a8 to 035af8ab has its CatchHandler @ 034af8d8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034af8ac to 035af8af has its CatchHandler @ 034af8d0 */
  if (bVar1) {
                    /* try { // try from 034af8b0 to 035af8b7 has its CatchHandler @ 034ae7c8 */
    pUVar7 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034af8b8 to 035af8bf has its CatchHandler @ 034afa20 */
                    /* catch() { ... } // from try @ 034af574 with catch @ 034af8c0
                       catch() { ... } // from try @ 034af62c with catch @ 034af8c0
                       try { // try from 034af8c0 to 035af983 has its CatchHandler @ 034ae7c8 */
    if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                    /* catch() { ... } // from try @ 034af730 with catch @ 034af8c4 */
                    /* catch() { ... } // from try @ 034af8ac with catch @ 034af8d0 */
      UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 034af53c with catch @ 034af8d4 */
                    /* catch() { ... } // from try @ 034af8a8 with catch @ 034af8d8 */
                    /* catch() { ... } // from try @ 034af8a0 with catch @ 034af8dc */
    pSVar5 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034aec84 with catch @ 034af8e0 */
    if (pSVar5 != (System_Type_o *)0x0) {
                    /* catch() { ... } // from try @ 034aec74 with catch @ 034af8e4 */
                    /* catch() { ... } // from try @ 034aed1c with catch @ 034af8e8 */
                    /* catch() { ... } // from try @ 034aec54 with catch @ 034af8ec */
      pSVar6 = (System_String_o *)
               (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 034af89c with catch @ 034af8f0 */
                    /* catch() { ... } // from try @ 034af898 with catch @ 034af8f4 */
                    /* catch() { ... } // from try @ 034af894 with catch @ 034af8f8 */
                    /* catch() { ... } // from try @ 034af890 with catch @ 034af8fc */
                    /* catch() { ... } // from try @ 034af88c with catch @ 034af900 */
                    /* catch() { ... } // from try @ 034af888 with catch @ 034af904 */
                    /* catch() { ... } // from try @ 034aed04 with catch @ 034af908 */
      pSVar6 = System_String__Concat(StringLiteral_3404,pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034aec4c with catch @ 034af90c */
                    /* catch() { ... } // from try @ 034aec34 with catch @ 034af910 */
                    /* catch() { ... } // from try @ 034aeda0 with catch @ 034af914 */
                    /* catch() { ... } // from try @ 034aed8c with catch @ 034af918 */
                    /* catch() { ... } // from try @ 034aecd4 with catch @ 034af91c */
                    /* catch() { ... } // from try @ 034aed74 with catch @ 034af920 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034aeccc with catch @ 034af924 */
                    /* catch() { ... } // from try @ 034aecb4 with catch @ 034af928 */
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* catch() { ... } // from try @ 034aec18 with catch @ 034af92c */
                    /* catch() { ... } // from try @ 034aed24 with catch @ 034af930 */
                    /* catch() { ... } // from try @ 034af880 with catch @ 034af934 */
                    /* catch() { ... } // from try @ 034aec00 with catch @ 034af938 */
                    /* catch() { ... } // from try @ 034aec8c with catch @ 034af93c */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034af940:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034aebf4 with catch @ 034af940 */
  FUN_01bab8c8();
}

