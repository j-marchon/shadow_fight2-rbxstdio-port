// OAFGMIGFHAD.OOCCJAADPDK$$.ctor @ RVA 0x31547A4

void OAFGMIGFHAD_OOCCJAADPDK___ctor(OAFGMIGFHAD_OOCCJAADPDK_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  LCKCDEKNLOA_o **ppLVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456682b & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_0456682b = 1;
    method = extraout_x1;
  }
  __this_00 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(__this_00,(MethodInfo *)0x0);
  ppLVar1 = &(__this->fields).NEIJJHEFLHP;
  *ppLVar1 = __this_00;
  thunk_FUN_01c20e04(ppLVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

