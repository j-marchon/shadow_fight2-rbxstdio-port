// Nekki.SF2.GUI.TextDebugger$$PushAlignedTextBounds @ RVA 0x35A787C

void Nekki_SF2_GUI_TextDebugger__PushAlignedTextBounds
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  Il2CppArrayBounds *pIVar3;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Bounds_o local_50;
  
  if ((DAT_04568e26 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e26 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f52 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f52 = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->AJOAHCMGKNH != false) {
    *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
    local_50.fields.m_Extents.fields.y = (ENGIOBJKJPM->fields).m_Extents.fields.y;
    local_50.fields.m_Extents.fields.z = (ENGIOBJKJPM->fields).m_Extents.fields.z;
    local_50.fields._8_8_ = *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
    local_50.fields.m_Center.fields.x = (ENGIOBJKJPM->fields).m_Center.fields.x;
    local_50.fields.m_Center.fields.y = (ENGIOBJKJPM->fields).m_Center.fields.y;
    __this_01 = (__this->fields).super.m_Corners;
    __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    EFJKPCADGJH.fields.b = 0.0;
    EFJKPCADGJH.fields.a = 1.0;
    EFJKPCADGJH.fields.r = 1.0;
    EFJKPCADGJH.fields.g = 0.0;
    Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor(__this_00,&local_50,2.0,EFJKPCADGJH,9.0,method);
    lVar2 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar3 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar3 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar3[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar3[2].length + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

