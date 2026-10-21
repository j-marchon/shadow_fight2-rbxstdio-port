// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectTopSubItem @ RVA 0x34A7CE4

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectTopSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568502 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a7d24 to 036a7d97 has its CatchHandler @ 035a7ebc */
    DAT_04568502 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_035a7d7c:
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_035a7d7c;
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
                    /* try { // try from 035a7d98 to 036a7e2f has its CatchHandler @ 035a7464 */
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                        (__this,Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__)
  ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a7ea0;
    GNFENDJPCFD = (__this_00->fields)._RightSubItem;
  }
  while( true ) {
                    /* try { // try from 035a7e48 to 036a7e4f has its CatchHandler @ 035a7f6c */
                    /* try { // try from 035a7e50 to 036a7e57 has its CatchHandler @ 035a7e8c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035a7e58 to 036a7e5f has its CatchHandler @ 035a7ea0 */
                    /* try { // try from 035a7e60 to 036a7e6b has its CatchHandler @ 035a7464 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a7ea0;
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
                    /* try { // try from 035a7e30 to 036a7e37 has its CatchHandler @ 035a7e9c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
                    /* try { // try from 035a7e38 to 036a7e3f has its CatchHandler @ 035a7e98 */
                    /* try { // try from 035a7e40 to 036a7e47 has its CatchHandler @ 035a7f78 */
    __this_00 = Nekki_SF2_GUI_Profile_UserPerksPanel__HDIADKGHLNC(__this,__this_00,method_01);
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* try { // try from 035a7e78 to 036a7e7b has its CatchHandler @ 035a7e84 */
                    /* try { // try from 035a7e7c to 036a7e7f has its CatchHandler @ 035a7e80 */
                    /* catch() { ... } // from try @ 035a7e7c with catch @ 035a7e80
                       try { // try from 035a7e80 to 036a7ecb has its CatchHandler @ 035a7464 */
                    /* catch() { ... } // from try @ 035a7e78 with catch @ 035a7e84 */
                    /* catch() { ... } // from try @ 035a7e6c with catch @ 035a7e88 */
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
                    /* catch() { ... } // from try @ 035a7e50 with catch @ 035a7e8c */
                    /* catch() { ... } // from try @ 035a7cbc with catch @ 035a7e90 */
                    /* catch() { ... } // from try @ 035a7c60 with catch @ 035a7e94 */
                    /* catch() { ... } // from try @ 035a7e38 with catch @ 035a7e98 */
                    /* catch() { ... } // from try @ 035a7e30 with catch @ 035a7e9c */
    return true;
  }
LAB_035a7ea0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a7e58 with catch @ 035a7ea0 */
  FUN_01bab8c8();
}

