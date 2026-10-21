// Nekki.SF2.GUI.Profile.PerksController$$get_IsRightSubItemSelected @ RVA 0x32D1790

bool Nekki_SF2_GUI_Profile_PerksController__get_IsRightSubItemSelected
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567556 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567556 = 1;
    method = extraout_x1;
  }
  iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method);
  if ((iVar2 == 3) ||
     (iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00), iVar2 == 1)
     ) {
    bVar1 = true;
  }
  else {
                    /* try { // try from 033d180c to 034d1813 has its CatchHandler @ 033d18a4 */
    x = (UnityEngine_Object_o *)
        Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                  ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                   Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 033d1814 to 034d1817 has its CatchHandler @ 033d1890 */
                    /* try { // try from 033d1818 to 034d181b has its CatchHandler @ 033d188c */
                    /* try { // try from 033d181c to 034d181f has its CatchHandler @ 033d1878 */
                    /* try { // try from 033d1820 to 034d1823 has its CatchHandler @ 033d186c */
                    /* try { // try from 033d1824 to 034d1827 has its CatchHandler @ 033d1850 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d1828 to 034d182b has its CatchHandler @ 033d184c */
                    /* try { // try from 033d182c to 034d182f has its CatchHandler @ 033d1474 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 033d1830 to 034d1833 has its CatchHandler @ 033d183c */
                    /* try { // try from 033d1834 to 034d18bb has its CatchHandler @ 033d1474 */
                    /* catch() { ... } // from try @ 033d1830 with catch @ 033d183c */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d16bc with catch @ 033d1840 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 033d16fc with catch @ 033d1844 */
                    /* catch() { ... } // from try @ 033d16cc with catch @ 033d1848 */
                    /* catch() { ... } // from try @ 033d1828 with catch @ 033d184c */
                    /* catch() { ... } // from try @ 033d1824 with catch @ 033d1850 */
                    /* catch() { ... } // from try @ 033d170c with catch @ 033d1854 */
                    /* catch() { ... } // from try @ 033d1750 with catch @ 033d1858 */
      if (((x == (UnityEngine_Object_o *)0x0) || (x[3].monitor == (UnityEngine_Component_o *)0x0))
         || (__this_00 = UnityEngine_Component__get_gameObject(x[3].monitor,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033d175c with catch @ 033d1874 */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033d16d4 with catch @ 033d185c */
                    /* catch() { ... } // from try @ 033d16e0 with catch @ 033d1860 */
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d1714 with catch @ 033d1864 */
      bVar1 = !bVar1;
                    /* catch() { ... } // from try @ 033d1738 with catch @ 033d1868 */
    }
    else {
                    /* catch() { ... } // from try @ 033d1820 with catch @ 033d186c */
      bVar1 = false;
                    /* catch() { ... } // from try @ 033d16a0 with catch @ 033d1870 */
    }
  }
  return bVar1;
}

