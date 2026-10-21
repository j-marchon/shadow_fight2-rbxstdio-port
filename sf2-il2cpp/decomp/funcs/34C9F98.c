// Nekki.SF2.GUI.Fight.StyleBar$$AddStrip @ RVA 0x34C9F98

void Nekki_SF2_GUI_Fight_StyleBar__AddStrip
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,System_String_o *IEPECMCLKJB,
               System_String_o *AAIHDEKMIJG,float JLNCOIIGIDA,System_String_o *IFBMAFACNAA,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB;
  MethodInfo *method_00;
  
  if ((DAT_0456865a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<StyleBarStrip>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456865a = 1;
  }
  if (IEPECMCLKJB == (System_String_o *)0x0) {
    return;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (IFBMAFACNAA != (System_String_o *)0x0) {
    bVar1 = System_String__Equals
                      (IFBMAFACNAA,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_035ca0e8;
    }
    else {
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_035ca0e8;
      UnityEngine_Object__set_name(__this_00,IFBMAFACNAA,(MethodInfo *)0x0);
    }
    AGNGOOMCNMB = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<StyleBarStrip>__);
    if (AGNGOOMCNMB != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
      *(System_String_o **)&(AGNGOOMCNMB->fields).super.super.super.m_PixelsPerUnitMultiplier =
           AAIHDEKMIJG;
      thunk_FUN_01c20e04(&(AGNGOOMCNMB->fields).super.super.super.m_PixelsPerUnitMultiplier,
                         AAIHDEKMIJG);
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                ((Nekki_SF2_GUI_ResolutionImage_o *)AGNGOOMCNMB,IEPECMCLKJB,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                ((Nekki_SF2_GUI_ResolutionImageSkew_o *)AGNGOOMCNMB,JLNCOIIGIDA,(MethodInfo *)0x0);
      (*(AGNGOOMCNMB->klass->vtable)._45_SetNativeSize.methodPtr)
                (AGNGOOMCNMB,(AGNGOOMCNMB->klass->vtable)._45_SetNativeSize.method);
      Nekki_SF2_GUI_Fight_StyleBar__AddStrip(__this,AGNGOOMCNMB,method_00);
      return;
    }
  }
LAB_035ca0e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

