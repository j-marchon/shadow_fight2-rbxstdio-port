// IOACNDPCIFK$$.ctor @ RVA 0x33A90B8

void IOACNDPCIFK___ctor(IOACNDPCIFK_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  System_Byte_array **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).LGFOJEKKBEN;
  *ppSVar1 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppSVar1,IMMNELPBGIF);
  if (*ppSVar1 != (System_Byte_array *)0x0) {
    (__this->fields).ONGLGHIKBJF = (int32_t)(*ppSVar1)->max_length;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

