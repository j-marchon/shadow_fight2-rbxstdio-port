// Nekki.SF2.GUI.SimpleScroll$$IsMoving @ RVA 0x302D234

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_SimpleScroll__IsMoving(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  UnityEngine_Vector2_o *pUVar3;
  
  if (*(long *)&(__this->fields).JCKMKFCCNAA == 0) {
    sVar1 = (short)(__this->fields).POPINJOHFLF;
    if (sVar1 == 0) {
      pUVar3 = &(__this->fields).super.m_Velocity;
    }
    else {
      if (sVar1 != 1) goto LAB_0312d2ac;
      pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).super.m_Velocity.fields.y;
    }
    if (ABS((pUVar3->fields).x) <= 0.01) {
      if (sVar1 == 1) {
        pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).KFDLOCBGNEA.fields.y;
      }
      else {
        if (sVar1 != 0) {
LAB_0312d2ac:
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar2);
        }
        pUVar3 = &(__this->fields).KFDLOCBGNEA;
      }
      return 0.01 < ABS((pUVar3->fields).x);
    }
  }
  return true;
}

