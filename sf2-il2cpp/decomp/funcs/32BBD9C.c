// JANICNLKKBO$$.ctor @ RVA 0x32BBD9C

void JANICNLKKBO___ctor(JANICNLKKBO_o *__this,
                       System_Collections_Generic_Dictionary_string__object__o *OCMMDIHLKMH,
                       System_String_o *DHAGFGIGPFI,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567499 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&StringLiteral_17996);
    FUN_01bab630(&StringLiteral_18911);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567499 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (OCMMDIHLKMH != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                       StringLiteral_18911,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    pSVar3 = StringLiteral_1;
    if (bVar1) {
      pIVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                          StringLiteral_18911,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033bbf04;
      pSVar3 = (System_String_o *)
               (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
    }
    if (__this != (JANICNLKKBO_o *)0x0) {
      (__this->fields).FKDNIDNFEIC = pSVar3;
      thunk_FUN_01c20e04();
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                         StringLiteral_17996,
                         Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__)
      ;
      pSVar3 = StringLiteral_1;
      if (bVar1) {
        pIVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                            StringLiteral_17996,
                            Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033bbf04;
        pSVar3 = (System_String_o *)
                 (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      }
      (__this->fields).EMCMGHAFGHL = pSVar3;
      thunk_FUN_01c20e04();
      ppSVar4 = &(__this->fields).DCFGAAAPAII;
      *ppSVar4 = DHAGFGIGPFI;
      thunk_FUN_01c20e04(ppSVar4,DHAGFGIGPFI);
      return;
    }
  }
LAB_033bbf04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

