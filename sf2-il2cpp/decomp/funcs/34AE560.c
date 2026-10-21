// KDPDBGNOFEN$$DNHGHLJMHHH @ RVA 0x34AE560

bool KDPDBGNOFEN__DNHGHLJMHHH(KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *array;
  
  if ((DAT_04568549 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_IndexOf<string>__);
    DAT_04568549 = 1;
  }
  array = (__this->fields).DHBJBCIMDBB;
  bVar1 = false;
  if (array != (System_String_array *)0x0) {
    iVar2 = System_Array__IndexOf<object>
                      ((System_Object_array *)array,(Il2CppObject *)CELOLGNMKCG,
                       Method_System_Array_IndexOf<string>__);
    bVar1 = (bool)((byte)~(byte)((uint)iVar2 >> 0x18) >> 7);
  }
  return bVar1;
}

