// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333AB38

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_PerkSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  Nekki_SF2_GUI_Profile_PerkContent_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_00;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_01;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  JLGNBOILFLN_o *pJVar6;
  System_String_o *pSVar7;
  MethodInfo *in_x4;
  
                    /* try { // try from 0343ab3c to 0353ab43 has its CatchHandler @ 0343aca0 */
                    /* try { // try from 0343ab54 to 0353ab5f has its CatchHandler @ 0343ac90 */
  if ((DAT_0456796a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0343ab74 to 0353ab7b has its CatchHandler @ 0343ac00 */
    FUN_01bab630(&StringLiteral_7508);
    FUN_01bab630(&StringLiteral_465);
                    /* try { // try from 0343ab90 to 0353ab93 has its CatchHandler @ 0343abf8 */
    FUN_01bab630(&StringLiteral_10214);
                    /* try { // try from 0343ab94 to 0353ab9f has its CatchHandler @ 0343abfc */
    DAT_0456796a = 1;
  }
  pNVar4 = (__this->fields)._PerkContent;
                    /* try { // try from 0343aba8 to 0353abb7 has its CatchHandler @ 0343abf4 */
  if ((pNVar4 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._TrickContent;
    if ((__this_00 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343abd0 to 0353abd7 has its CatchHandler @ 0343ac98 */
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._AchievementContent;
                    /* try { // try from 0343abec to 0353abef has its CatchHandler @ 0343abf4 */
      if ((__this_01 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343abf0 to 0353ac0f has its CatchHandler @ 0343a9ec */
                    /* catch() { ... } // from try @ 0343aba8 with catch @ 0343abf4
                       catch() { ... } // from try @ 0343abec with catch @ 0343abf4 */
                    /* catch() { ... } // from try @ 0343ab90 with catch @ 0343abf8 */
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0343ab94 with catch @ 0343abfc */
        __this_02 = (__this->fields)._SealsContent;
                    /* catch() { ... } // from try @ 0343ab74 with catch @ 0343ac00 */
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343ac10 to 0353ac13 has its CatchHandler @ 0343ac84 */
                    /* try { // try from 0343ac14 to 0353ac57 has its CatchHandler @ 0343a9ec */
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0343ac58 to 0353ac73 has its CatchHandler @ 0343acfc */
            bVar2 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
LAB_0343ac9c:
                    /* catch() { ... } // from try @ 0343ac74 with catch @ 0343ac9c */
                    /* catch() { ... } // from try @ 0343ab3c with catch @ 0343aca0 */
                    /* try { // try from 0343acb0 to 0353acb3 has its CatchHandler @ 0343acd8 */
                    /* try { // try from 0343acb4 to 0353acdf has its CatchHandler @ 0343a9ec */
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* catch() { ... } // from try @ 0343acb0 with catch @ 0343acd8 */
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              puVar1 = &StringLiteral_465;
                    /* try { // try from 0343ace0 to 0353ace7 has its CatchHandler @ 0343acfc */
              if (!bVar2) {
                puVar1 = &StringLiteral_10214;
              }
                    /* try { // try from 0343ace8 to 0353acf3 has its CatchHandler @ 0343a9ec */
                    /* try { // try from 0343acf4 to 0353acfb has its CatchHandler @ 0343acfc */
              pSVar7 = System_String__Concat
                                 (StringLiteral_7508,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0343ac58 with catch @ 0343acfc
                       catch() { ... } // from try @ 0343ace0 with catch @ 0343acfc
                       catch() { ... } // from try @ 0343acf4 with catch @ 0343acfc */
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              return;
            }
            if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
              pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
              if (pJVar6 == (JLGNBOILFLN_o *)0x0) goto LAB_0343ac9c;
                    /* try { // try from 0343ac74 to 0353ac7b has its CatchHandler @ 0343ac9c */
              pSVar7 = JLGNBOILFLN__GKMAFGODLLG(pJVar6,(MethodInfo *)0x0);
                    /* try { // try from 0343ac7c to 0353ac7f has its CatchHandler @ 0343ac94 */
              pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
                    /* try { // try from 0343ac80 to 0353acaf has its CatchHandler @ 0343a9ec */
              if (pJVar6 != (JLGNBOILFLN_o *)0x0) {
                    /* catch() { ... } // from try @ 0343ac10 with catch @ 0343ac84 */
                    /* catch() { ... } // from try @ 0343ab54 with catch @ 0343ac90 */
                if ((pJVar6->fields).OIKLOAGFFGO == 3) {
                    /* catch() { ... } // from try @ 0343ac7c with catch @ 0343ac94 */
                  bVar3 = 0;
                    /* catch() { ... } // from try @ 0343abd0 with catch @ 0343ac98 */
                }
                else {
                  bVar3 = (*(OLNJMPMPLOB->klass->vtable)._65_GetLock.methodPtr)
                                    (OLNJMPMPLOB,(OLNJMPMPLOB->klass->vtable)._65_GetLock.method);
                  bVar3 = bVar3 ^ 1;
                }
                Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                          (__this,pSVar7,(bool)(bVar3 & 1),0x58,in_x4);
                pNVar4 = (__this->fields)._PerkContent;
                pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
                bVar3 = (*(OLNJMPMPLOB->klass->vtable)._65_GetLock.methodPtr)
                                  (OLNJMPMPLOB,(OLNJMPMPLOB->klass->vtable)._65_GetLock.method);
                if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) {
                  Nekki_SF2_GUI_Profile_PerkContent__Refresh
                            (pNVar4,pJVar6,(bool)(bVar3 & 1),(MethodInfo *)0x0);
                  return;
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

