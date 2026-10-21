// Nekki.SF2.GUI.SimpleScroll$$GetDamperSize @ RVA 0x302E648

float Nekki_SF2_GUI_SimpleScroll__GetDamperSize
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  
  UVar3 = (__this->fields).GNMNFMOHDMG.fields;
  if (UVar3 == (UnityEngine_Vector2_Fields)0x0) {
    fVar4 = 0.0;
  }
  else {
    if (*(int *)((long)UVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20) == (UnityEngine_RectTransform_o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar5 = UnityEngine_RectTransform__get_sizeDelta
                      (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20),(MethodInfo *)0x0);
    fVar4 = UVar5.fields.x;
    sVar1 = (short)(__this->fields).POPINJOHFLF;
    if (sVar1 != 0) {
      if (sVar1 != 1) {
        thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
        __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
        message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
        System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
        uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_00,uVar2);
      }
      fVar4 = UVar5.fields.y;
    }
  }
  return fVar4;
}

