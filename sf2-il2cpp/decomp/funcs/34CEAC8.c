// Nekki.SF2.GUI.Fight.RaitingString$$Awake @ RVA 0x34CEAC8

void Nekki_SF2_GUI_Fight_RaitingString__Awake
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  pNVar1 = (__this->fields)._iconRating;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ceae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._91_RefreshSprite.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._91_RefreshSprite.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

