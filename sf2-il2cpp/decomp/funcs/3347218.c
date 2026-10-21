// Nekki.SF2.GUI.Map.ZoneScrollItem$$HEHGKGEGBBD @ RVA 0x3347218

void Nekki_SF2_GUI_Map_ZoneScrollItem__HEHGKGEGBBD
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MEJIKMPNBNL_o *pMVar2;
  
  if ((DAT_045679cb & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&StringLiteral_14115);
    DAT_045679cb = 1;
  }
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14115._4_4_;
    (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14115;
    (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
    pMVar2 = (__this->fields).IAJBEJGMIMM;
    if (pMVar2 != (MEJIKMPNBNL_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(pMVar2->fields).DINIOKEPIIP,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034472c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                ((__this->fields).ILHMFFCAIFD.fields.r,(__this->fields).ILHMFFCAIFD.fields.g,
                 (__this->fields).ILHMFFCAIFD.fields.b,(__this->fields).ILHMFFCAIFD.fields.a,
                 __this_00,(__this_00->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

