// NOAPKJBLPND$$ECLKNKGJKMC @ RVA 0x3521FD0

DEFIPIDEFOO_o *
NOAPKJBLPND__ECLKNKGJKMC(NOAPKJBLPND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar2;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  System_ArgumentException_o *__this_01;
  int32_t local_2c;
  DEFIPIDEFOO_o *local_28;
  
  if ((DAT_045689d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TryGetValue__);
    DAT_045689d2 = 1;
  }
  local_28 = (DEFIPIDEFOO_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                      (__this_00,OGPGLGPMEPD,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TryGetValue__)
    ;
    if (bVar1) {
      return local_28;
    }
    local_2c = OGPGLGPMEPD;
    uVar2 = thunk_FUN_01bb9178(&int_TypeInfo);
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(uVar2,&local_2c);
    pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_3831);
    pSVar3 = System_String__Format(pSVar3,arg0,(MethodInfo *)0x0);
    thunk_FUN_01bb9178(&System_ArgumentException_TypeInfo);
    __this_01 = (System_ArgumentException_o *)thunk_FUN_01bda818();
    System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_NOAPKJBLPND_ECLKNKGJKMC__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_01,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

