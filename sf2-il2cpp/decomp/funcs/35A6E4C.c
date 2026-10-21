// Nekki.SF2.GUI.TextDebugger$$Clear @ RVA 0x35A6E4C

void Nekki_SF2_GUI_TextDebugger__Clear(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  UnityEngine_Vector3_array *pUVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568e19 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_Clear__)
    ;
    DAT_04568e19 = 1;
  }
  pUVar2 = (__this->fields).super.m_Corners;
  *(undefined1 *)&(__this->fields).NOLPECJJJPE = 1;
  if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
    length = (int32_t)pUVar2->max_length;
    iVar1 = *(int *)((long)&pUVar2->max_length + 4);
    *(undefined4 *)&pUVar2->max_length = 0;
    *(int *)((long)&pUVar2->max_length + 4) = iVar1 + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)pUVar2->bounds,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

