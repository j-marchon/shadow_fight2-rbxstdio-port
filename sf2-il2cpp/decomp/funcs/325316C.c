// LPGLKMNHELJ$$.ctor @ RVA 0x325316C

void LPGLKMNHELJ___ctor(LPGLKMNHELJ_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04567140 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567140 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PJBADHPBBAF = 0;
  (__this->fields).MGFFBBLHKCJ = false;
  ppSVar1 = &(__this->fields).JOPIEJMBFHK;
  *ppSVar1 = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).BGHFADDGPAD = 0;
  (__this->fields).IHJFCJKCGEK = false;
  return;
}

