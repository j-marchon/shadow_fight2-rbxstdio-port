// Nekki.SF2.GUI.Fight.DisplayModel$$SetAvatar @ RVA 0x32B909C

void Nekki_SF2_GUI_Fight_DisplayModel__SetAvatar
               (Nekki_SF2_GUI_Fight_DisplayModel_o *__this,System_String_o *KDKEMGKBNBB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar2;
  
  if ((DAT_04567474 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567474 = 1;
  }
  pNVar2 = (__this->fields).avatar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).avatar;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* try { // try from 033b9108 to 034b912f has its CatchHandler @ 033b9334 */
      Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).avatar;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        *(System_String_o **)&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier =
             (__this->fields).OOKEKJMFKPE;
        thunk_FUN_01c20e04(&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier);
        pNVar2 = (__this->fields).avatar;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar2,KDKEMGKBNBB,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).avatar;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033b915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033b9164 to 034b918f has its CatchHandler @ 033b9330 */
  return;
}

