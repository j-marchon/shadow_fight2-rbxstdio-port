// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_LastPosition @ RVA 0x34A7EA4

int32_t Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition
                  (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  
                    /* catch() { ... } // from try @ 035a7a60 with catch @ 035a7eac */
                    /* catch() { ... } // from try @ 035a780c with catch @ 035a7eb0 */
                    /* catch() { ... } // from try @ 035a7a04 with catch @ 035a7eb4 */
                    /* catch() { ... } // from try @ 035a77b0 with catch @ 035a7eb8 */
  if ((DAT_04568505 & 1) == 0) {
                    /* catch() { ... } // from try @ 035a7d24 with catch @ 035a7ebc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a7ecc to 036a7ecf has its CatchHandler @ 035a7ee0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04568505 = 1;
  }
  iVar3 = (__this->fields).IGLNJPCAJOD;
                    /* catch() { ... } // from try @ 035a7ecc with catch @ 035a7ee0 */
  if (iVar3 != 0) {
    return iVar3;
  }
                    /* try { // try from 035a7ef0 to 036a7f6b has its CatchHandler @ 035a80f0 */
  x = (UnityEngine_Object_o *)
      (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
  if (x != (UnityEngine_Object_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (UnityEngine_Object_o *)0x0;
      }
      goto LAB_035a7f38;
    }
  }
  x = (UnityEngine_Object_o *)0x0;
LAB_035a7f38:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = 2;
  }
  else {
                    /* catch() { ... } // from try @ 035a7e48 with catch @ 035a7f6c
                       try { // try from 035a7f6c to 036a7f8b has its CatchHandler @ 035a7464 */
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 035a7e40 with catch @ 035a7f78 */
    iVar3 = 2;
                    /* catch() { ... } // from try @ 035a7ac8 with catch @ 035a7f7c */
    if (*(int *)&x[0x15].monitor != 1) {
      iVar3 = *(int *)&x[0x15].monitor;
    }
  }
  (__this->fields).IGLNJPCAJOD = iVar3;
                    /* try { // try from 035a7f8c to 036a7f8f has its CatchHandler @ 035a7fa4 */
  return iVar3;
}

