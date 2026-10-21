// Nekki.SF2.GUI.ResolutionImage$$Awake @ RVA 0x34E4CAC

void Nekki_SF2_GUI_ResolutionImage__Awake
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035e4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
            (__this,(__this->klass->vtable)._91_RefreshSprite.method);
  return;
}

