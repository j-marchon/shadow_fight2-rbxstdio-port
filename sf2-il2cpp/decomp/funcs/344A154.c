// NDPMLPGANCI$$.ctor @ RVA 0x344A154

void NDPMLPGANCI___ctor(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  GLINEGMOOBM_o *__this_00;
  GLINEGMOOBM_o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456825e & 1) == 0) {
    FUN_01bab630(&GLINEGMOOBM_TypeInfo);
    DAT_0456825e = 1;
    method = extraout_x1;
  }
  __this_00 = (GLINEGMOOBM_o *)thunk_FUN_01bda818(GLINEGMOOBM_TypeInfo,method);
  GLINEGMOOBM___ctor(__this_00,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).KLPOKEJLDHG;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

