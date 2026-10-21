// MEMHEPBAJJA.HIAEDCDJJDJ$$.ctor @ RVA 0x33C7248

void MEMHEPBAJJA_HIAEDCDJJDJ___ctor
               (MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,System_String_o *KGLJICLJHEL,
               System_String_o *CJNHFNHJHPE,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567df9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567df9 = 1;
  }
  pMVar1 = &__this->fields;
  pMVar1->JAICMIMBIOA = StringLiteral_1;
  thunk_FUN_01c20e04(pMVar1);
  ppSVar2 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar2 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  pMVar1->JAICMIMBIOA = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pMVar1,CJNHFNHJHPE);
  (__this->fields).OGKFDMIMMAD = ACCIHBHMFPN;
  return;
}

