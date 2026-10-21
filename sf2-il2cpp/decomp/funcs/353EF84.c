// Nekki.SF2.GUI.Profile.PerkCell$$Init @ RVA 0x353EF84

void Nekki_SF2_GUI_Profile_PerkCell__Init
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,EANNACPOJFA_o *PLKOKDEAMBE,
               JEIEEMKCNOJ_o *JJHEGPBBMLG,float DLPDIIMKMKE,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
                    /* try { // try from 0363ef88 to 0373ef8b has its CatchHandler @ 0363f000 */
                    /* try { // try from 0363ef8c to 0373ef8f has its CatchHandler @ 0363effc */
                    /* try { // try from 0363ef90 to 0373ef93 has its CatchHandler @ 0363eff8 */
                    /* try { // try from 0363ef94 to 0373ef97 has its CatchHandler @ 0363efd8 */
                    /* try { // try from 0363ef98 to 0373ef9b has its CatchHandler @ 0363efd0 */
                    /* try { // try from 0363ef9c to 0373ef9f has its CatchHandler @ 0363f020 */
                    /* try { // try from 0363efa0 to 0373efa3 has its CatchHandler @ 0363efc0 */
                    /* try { // try from 0363efa4 to 0373efa7 has its CatchHandler @ 0363f020 */
  method_00 = (MethodInfo *)JJHEGPBBMLG;
                    /* try { // try from 0363efa8 to 0373efab has its CatchHandler @ 0363eac0 */
                    /* try { // try from 0363efac to 0373efaf has its CatchHandler @ 0363efb8 */
                    /* try { // try from 0363efb0 to 0373f047 has its CatchHandler @ 0363eac0 */
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
                    /* catch() { ... } // from try @ 0363efac with catch @ 0363efb8 */
                    /* catch() { ... } // from try @ 0363ee00 with catch @ 0363efbc */
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._LeftSubItem,method_00);
                    /* catch() { ... } // from try @ 0363efa0 with catch @ 0363efc0 */
                    /* catch() { ... } // from try @ 0363ee58 with catch @ 0363efc4 */
                    /* catch() { ... } // from try @ 0363ee08 with catch @ 0363efc8 */
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._RightSubItem,method_00);
                    /* catch() { ... } // from try @ 0363ee74 with catch @ 0363efcc */
  if (PLKOKDEAMBE != (EANNACPOJFA_o *)0x0) {
                    /* catch() { ... } // from try @ 0363ef98 with catch @ 0363efd0 */
                    /* catch() { ... } // from try @ 0363ee3c with catch @ 0363efd4 */
                    /* catch() { ... } // from try @ 0363ef94 with catch @ 0363efd8 */
    Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK(__this,(PLKOKDEAMBE->fields).GJBLBEALOBO,method_00);
    ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
                    /* catch() { ... } // from try @ 0363ee68 with catch @ 0363efdc */
                    /* catch() { ... } // from try @ 0363eec0 with catch @ 0363efe0 */
    *ppJVar1 = JJHEGPBBMLG;
                    /* catch() { ... } // from try @ 0363ee34 with catch @ 0363efe4 */
                    /* catch() { ... } // from try @ 0363edf0 with catch @ 0363efe8 */
                    /* catch() { ... } // from try @ 0363ee24 with catch @ 0363efec */
    thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
                    /* catch() { ... } // from try @ 0363ed98 with catch @ 0363eff0 */
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._LayoutGroup;
                    /* catch() { ... } // from try @ 0363ed50 with catch @ 0363eff4 */
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 0363ef90 with catch @ 0363eff8 */
                    /* catch() { ... } // from try @ 0363ef8c with catch @ 0363effc */
                    /* catch() { ... } // from try @ 0363ef88 with catch @ 0363f000 */
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,DLPDIIMKMKE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0363ed64 with catch @ 0363f004 */
      __this_01 = (__this->fields)._PerkLines;
                    /* catch() { ... } // from try @ 0363edc0 with catch @ 0363f008 */
                    /* catch() { ... } // from try @ 0363edb0 with catch @ 0363f00c */
                    /* catch() { ... } // from try @ 0363ed88 with catch @ 0363f010 */
                    /* catch() { ... } // from try @ 0363ef80 with catch @ 0363f014 */
      if ((__this_01 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 0363ecb0 with catch @ 0363f018 */
                    /* catch() { ... } // from try @ 0363ec54 with catch @ 0363f01c */
                    /* catch() { ... } // from try @ 0363ef9c with catch @ 0363f020
                       catch() { ... } // from try @ 0363efa4 with catch @ 0363f020 */
                    /* catch() { ... } // from try @ 0363edc8 with catch @ 0363f024 */
                    /* catch() { ... } // from try @ 0363ed24 with catch @ 0363f028 */
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

