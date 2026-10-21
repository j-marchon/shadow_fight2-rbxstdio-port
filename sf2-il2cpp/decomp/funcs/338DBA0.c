// NJPBBPOABKP$$AFFNOKFNKON @ RVA 0x338DBA0

bool NJPBBPOABKP__AFFNOKFNKON
               (NJPBBPOABKP_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567bfa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Item__);
    DAT_04567bfa = 1;
  }
  __this_00 = (__this->fields)._NAGALBFLGCA_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0348dc4c:
        return index < iVar1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = (*pIVar3->klass->vtable[6].methodPtr)
                        (pIVar3,PHCGJGCHKCM,pIVar3->klass->vtable[6].method);
      if (((bVar2 ^ *(char *)&pIVar3[1].klass != '\0') & 1) != 0) goto LAB_0348dc4c;
      __this_00 = (__this->fields)._NAGALBFLGCA_k__BackingField;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

