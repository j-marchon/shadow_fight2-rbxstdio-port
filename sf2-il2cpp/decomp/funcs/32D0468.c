// Nekki.SF2.GUI.Profile.PerksController$$set_CurrentSubItem @ RVA 0x32D0468

void Nekki_SF2_GUI_Profile_PerksController__set_CurrentSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar4;
  
  if ((DAT_04567549 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567549 = 1;
  }
  ppNVar4 = &(__this->fields).super.PFKHDCBBDOG;
  *ppNVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar4,CJNHFNHJHPE);
  x = *ppNVar4;
  if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d04e4 to 034d04eb has its CatchHandler @ 033d0654 */
    if (bVar2 <= (x->klass->_2).naturalAligment) {
                    /* try { // try from 033d04f8 to 034d0507 has its CatchHandler @ 033d0660 */
      if ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
      }
      goto LAB_033d0508;
    }
  }
  x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
LAB_033d0508:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d0514 to 034d0533 has its CatchHandler @ 033d065c */
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = *(int *)&x[1].fields.super.super.super.m_EnableCalled;
    if (iVar1 != 1) {
      (__this->fields).IGLNJPCAJOD = iVar1;
    }
  }
                    /* try { // try from 033d0540 to 034d0543 has its CatchHandler @ 033d0650 */
                    /* try { // try from 033d054c to 034d0553 has its CatchHandler @ 033d064c */
  return;
}

