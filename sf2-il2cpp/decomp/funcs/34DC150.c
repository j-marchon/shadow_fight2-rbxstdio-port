// Nekki.SF2.GUI.ResolutionImage$$set_SpriteName @ RVA 0x34DC150

void Nekki_SF2_GUI_ResolutionImage__set_SpriteName
               (Nekki_SF2_GUI_ResolutionImage_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._TexturePath = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._TexturePath);
                    /* WARNING: Could not recover jumptable at 0x035dc178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
            (__this,(__this->klass->vtable)._91_RefreshSprite.method);
  return;
}

