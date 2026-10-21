// InControl.UnityGyroAxisSource$$GetValue @ RVA 0x31131F4

float InControl_UnityGyroAxisSource__GetValue
                (InControl_UnityGyroAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  int iVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  UVar4 = InControl_UnityGyroAxisSource__GetAxis((MethodInfo *)__this);
  iVar1 = (__this->fields).axis;
  fVar3 = UVar4.fields.x;
  if (((iVar1 != 0) && (fVar3 = UVar4.fields.z, iVar1 != 2)) && (fVar3 = UVar4.fields.y, iVar1 != 1)
     ) {
    thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
    __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707);
    System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector3_get_Item__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar2);
  }
  return fVar3;
}

