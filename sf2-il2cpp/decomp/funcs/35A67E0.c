// Nekki.SF2.GUI.TextDebugger$$PushGlyphs @ RVA 0x35A67E0

void Nekki_SF2_GUI_TextDebugger__PushGlyphs
               (Nekki_SF2_GUI_TextDebugger_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *KIOJIHNIIDE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this_00;
  MethodInfo *in_x3;
  Il2CppArrayBounds *pIVar5;
  uint index;
  UnityEngine_Vector3_array *__this_01;
  float CJJFPABAAFB;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  uint uVar11;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568e14 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e14 = 1;
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f50 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04566f50 = '\x01';
  }
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((((KIOJIHNIIDE != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->NIGDAINCGMM != false)) &&
      (iVar1 = (KIOJIHNIIDE->fields)._size, iVar1 != 0)) &&
     (*(undefined1 *)&(__this->fields).NOLPECJJJPE = 1, 0 < iVar1)) {
    index = 0;
    do {
      CJJFPABAAFB = 10.0;
      uVar11 = 0x3f800000;
      if ((index & 4) != 0) {
        CJJFPABAAFB = 15.0;
        uVar11 = 0;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,index,
                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) {
LAB_036a6a70:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar9 = *(float *)&pIVar4[1].klass;
      uVar10 = *(undefined8 *)((long)&pIVar4[1].klass + 4);
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,index + 2,
                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_036a6a70;
      uVar7 = *(undefined8 *)((long)&pIVar4[1].klass + 4);
      __this_01 = (__this->fields).super.m_Corners;
      fVar9 = fVar9 - *(float *)&pIVar4[1].klass;
      fVar6 = (float)uVar10 - (float)uVar7;
      fVar8 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
      fVar6 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar9 = 2.0;
      if (fVar6 <= 0.1) {
        fVar9 = 3.0;
      }
      uVar2 = 0x3f800000;
      if (fVar6 <= 0.1) {
        CJJFPABAAFB = -5.0;
        uVar11 = 0;
        uVar2 = 0;
      }
      __this_00 = (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_TypeInfo);
      EFJKPCADGJH.fields.g = 0.0;
      EFJKPCADGJH.fields.r = (float)uVar2;
      EFJKPCADGJH.fields.a = 1.0;
      EFJKPCADGJH.fields.b = (float)uVar11;
      Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor
                (__this_00,KIOJIHNIIDE,index,fVar9,EFJKPCADGJH,CJJFPABAAFB,in_x3);
      lVar3 = Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Add__;
      if (__this_01 == (UnityEngine_Vector3_array *)0x0) goto LAB_036a6a70;
      pIVar5 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar5 == (Il2CppArrayBounds *)0x0) goto LAB_036a6a70;
      uVar11 = (uint)__this_01->max_length;
      if (uVar11 < (uint)pIVar5[1].lower_bound) {
        *(uint *)&__this_01->max_length = uVar11 + 1;
        (&pIVar5[2].length)[(int)uVar11] = (il2cpp_array_size_t)__this_00;
        thunk_FUN_01c20e04(&pIVar5[2].length + (int)uVar11,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      index = index + 4;
    } while ((int)index < (KIOJIHNIIDE->fields)._size);
  }
  return;
}

