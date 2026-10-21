// EIILGPAPGMJ$$PCLDIKNPONG @ RVA 0x3582310

int32_t EIILGPAPGMJ__PCLDIKNPONG(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar3;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_04568cda & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_var);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_Image_Type_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04568cda = 1;
    method = extraout_x1;
  }
  handle = UnityEngine_SpriteDrawMode_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).IAKCIALILLN;
  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
    local_48.klass = (System_Enum_c *)UnityEngine_UI_Image_Type_TypeInfo;
    local_38 = *(undefined4 *)&(pUVar3->fields).m_OverrideSprite;
    local_48.monitor = (void *)0xffffffffffffffff;
    value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
                    /* try { // try from 036823f8 to 0378241f has its CatchHandler @ 03682894 */
    pIVar1 = System_Enum__Parse(enumType,value,true,(MethodInfo *)0x0);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class ==
          (UnityEngine_SpriteDrawMode_TypeInfo->_1).element_class) {
        piVar2 = (int32_t *)thunk_FUN_01bda96c();
        return *piVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

