// NLPJLHOEAOE$$BIEJGEEBBDI @ RVA 0x3203080

bool NLPJLHOEAOE__BIEJGEEBBDI(NLPJLHOEAOE_o *__this,System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  
  if ((DAT_04566e09 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_04566e09 = 1;
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).AIMEGOPKLLB;
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar2,(Il2CppObject *)LFGKEPCBPKF,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (!bVar1) {
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).AIMEGOPKLLB;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03303110;
      System_Collections_Generic_HashSet<object>__Add
                (pSVar2,(Il2CppObject *)LFGKEPCBPKF,
                 Method_System_Collections_Generic_HashSet<string>_Add__);
    }
    return (bool)(~bVar1 & 1);
  }
LAB_03303110:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

