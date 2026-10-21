// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectBottomSubItem @ RVA 0x34A87E4

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectBottomSubItem
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
  
  if ((DAT_0456850a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a8810 to 036a8817 has its CatchHandler @ 035a8ad0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
                    /* try { // try from 035a8820 to 036a8827 has its CatchHandler @ 035a8ac0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
    DAT_0456850a = 1;
  }
                    /* try { // try from 035a8834 to 036a883b has its CatchHandler @ 035a8acc */
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
                    /* try { // try from 035a8840 to 036a8847 has its CatchHandler @ 035a8abc */
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
                    /* try { // try from 035a8858 to 036a885f has its CatchHandler @ 035a8ab0 */
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_035a887c:
                    /* try { // try from 035a887c to 036a8883 has its CatchHandler @ 035a8aac */
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
                    /* try { // try from 035a8868 to 036a886f has its CatchHandler @ 035a8aa0 */
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_035a887c;
                    /* try { // try from 035a8888 to 036a888f has its CatchHandler @ 035a8a9c */
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
                    /* try { // try from 035a8898 to 036a889f has its CatchHandler @ 035a8a90 */
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                        (__this,Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__)
  ;
                    /* try { // try from 035a88b8 to 036a88c3 has its CatchHandler @ 035a8a98 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a88c8 to 036a88d3 has its CatchHandler @ 035a8aa4 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a89a0;
    GNFENDJPCFD = (__this_00->fields)._LeftSubItem;
                    /* try { // try from 035a88e8 to 036a88ef has its CatchHandler @ 035a8ab4 */
  }
  while( true ) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035a8958 to 036a8973 has its CatchHandler @ 035a8a8c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a89a0;
                    /* try { // try from 035a8900 to 036a891b has its CatchHandler @ 035a8ab8 */
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a8920 to 036a892b has its CatchHandler @ 035a8a84 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
                    /* try { // try from 035a8940 to 036a8947 has its CatchHandler @ 035a8a88 */
    __this_00 = Nekki_SF2_GUI_Profile_UserPerksPanel__KFDAGNGDHNL(__this,__this_00,method_01);
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
    return true;
  }
LAB_035a89a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

