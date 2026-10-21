// FLBBKMOHIOG$$.ctor @ RVA 0x34937A4

void FLBBKMOHIOG___ctor(FLBBKMOHIOG_o *__this,MethodInfo *method)

{
  int32_t Seed;
  System_Random_o *__this_00;
  System_DateTime_Fields local_28;
  
  if ((DAT_0456843f & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456843f = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  Seed = System_DateTime__get_Millisecond((System_DateTime_o)&local_28,(MethodInfo *)0x0);
  __this_00 = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo);
  System_Random___ctor(__this_00,Seed,(MethodInfo *)0x0);
  (__this->fields).HFDKBNJOJOB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

