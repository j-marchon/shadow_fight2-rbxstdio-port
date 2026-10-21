// Nekki.SF2.GUI.UIInitializable$$Free @ RVA 0x30C4AEC

void Nekki_SF2_GUI_UIInitializable__Free(Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIInitializable_c *pNVar1;
  
  if (((__this->fields)._BLOJFJIFDAE_k__BackingField != false) &&
     ((__this->fields)._BOGAKJOFOEK_k__BackingField == false)) {
    pNVar1 = __this->klass;
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x031c4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->vtable)._4_unknown.methodPtr)(__this,(pNVar1->vtable)._4_unknown.method);
    return;
  }
  return;
}

