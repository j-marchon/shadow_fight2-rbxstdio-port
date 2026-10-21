// Nekki.SF2.GUI.ResolutionImageSkew$$set_SkewAngle @ RVA 0x3450E24

void Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageSkew_c *pNVar1;
  
  pNVar1 = __this->klass;
  *(float *)((long)&(__this->fields).super._SpriteName + 4) = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x03550e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(pNVar1->vtable)._28_SetVerticesDirty.method);
  return;
}

