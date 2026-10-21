// CPNHNIKFGFB$$JAFNPFDOHAP @ RVA 0x3078B88

void CPNHNIKFGFB__JAFNPFDOHAP(CPNHNIKFGFB_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  Il2CppObject *local_28;
  
  if ((DAT_04565fc3 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OLAGEPMKJFC<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_TryGetValue__);
    DAT_04565fc3 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<int>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).FNOGEEODGCE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
    __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_19625);
    System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_CPNHNIKFGFB_JAFNPFDOHAP__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar2);
  }
  key = DJNBJHPDKDP__OLAGEPMKJFC<int>
                  ((System_Collections_Generic_List_T__o *)(__this->fields).FNOGEEODGCE,
                   Method_DJNBJHPDKDP_OLAGEPMKJFC<int>__);
  local_28 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                      (pSVar3,key,&local_28,
                       Method_System_Collections_Generic_Dictionary<int,_Action<object>>_TryGetValue__
                      );
    if (bVar1) {
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
      if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03178c84;
      System_Collections_Generic_Dictionary<int,_object>__Remove
                (pSVar3,key,
                 Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Remove__);
    }
    if (local_28 != (Il2CppObject *)0x0) {
      (*local_28[1].monitor)(local_28[4].klass,IMMNELPBGIF,local_28[2].monitor);
    }
    return;
  }
LAB_03178c84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

