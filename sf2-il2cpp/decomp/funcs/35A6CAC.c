// Nekki.SF2.GUI.TextDebugger$$.ctor @ RVA 0x35A6CAC

void Nekki_SF2_GUI_TextDebugger___ctor(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *__this_00;
  UnityEngine_Vector3_array **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e15 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_TypeInfo);
    DAT_04568e15 = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Vector3_array *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>__ctor__);
  ppUVar1 = &(__this->fields).super.m_Corners;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
  UnityEngine_UI_MaskableGraphic___ctor
            ((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}

