// Nekki.SF2.GUI.Profile.PerksController$$SelectBottomSubItem @ RVA 0x32D19C0

bool Nekki_SF2_GUI_Profile_PerksController__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  
  if ((DAT_04567559 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567559 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_033d1a70:
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_033d1a70;
                    /* try { // try from 033d1a84 to 034d1a8b has its CatchHandler @ 033d1bfc */
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                        ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                         Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 033d1aa8 to 034d1aaf has its CatchHandler @ 033d1bf8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 033d1ac0 to 034d1ac7 has its CatchHandler @ 033d1bf0 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 033d1ad4 to 034d1adf has its CatchHandler @ 033d1be0 */
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d1bd0;
    GNFENDJPCFD = (__this_00->fields)._LeftSubItem;
  }
  while( true ) {
                    /* try { // try from 033d1ae8 to 034d1af3 has its CatchHandler @ 033d1bdc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
                    /* try { // try from 033d1b0c to 034d1b17 has its CatchHandler @ 033d1bd8 */
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d1bd0;
                    /* try { // try from 033d1b18 to 034d1b3f has its CatchHandler @ 033d1bec */
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 033d1b40 to 034d1b67 has its CatchHandler @ 033d1be8 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__GetNextCell
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
                    /* try { // try from 033d1b6c to 034d1b8f has its CatchHandler @ 033d1be4 */
      bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d1b90 to 034d1bc7 has its CatchHandler @ 033d1954 */
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_00);
      }
    }
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
                    /* try { // try from 033d1bc8 to 034d1bcb has its CatchHandler @ 033d1bf4 */
                    /* try { // try from 033d1bcc to 034d1bcf has its CatchHandler @ 033d1bd4 */
    return true;
  }
LAB_033d1bd0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d1bd0 to 034d1c13 has its CatchHandler @ 033d1954 */
  FUN_01bab8c8();
}

