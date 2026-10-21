// Nekki.SF2.GUI.Shop.Scroll$$StopMovement @ RVA 0x34AA724

void Nekki_SF2_GUI_Shop_Scroll__StopMovement(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  
                    /* catch() { ... } // from try @ 035aa708 with catch @ 035aa734 */
  if ((DAT_04568523 & 1) == 0) {
                    /* try { // try from 035aa744 to 036aa74b has its CatchHandler @ 035aa760 */
                    /* try { // try from 035aa74c to 036aa757 has its CatchHandler @ 035aa228 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568523 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035aa758 to 036aa75f has its CatchHandler @ 035aa760 */
  pNVar2 = (__this->fields)._itemsScroll;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035aa744 with catch @ 035aa760
                       catch(type#2 @ 00000000) { ... } // from try @ 035aa758 with catch @ 035aa760
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._itemsScroll;
    if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035aa79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._44_StopMovement.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._44_StopMovement.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

