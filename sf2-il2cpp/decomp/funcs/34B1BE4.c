// MBDJMJLHFOO$$FAOMJIPNHPL @ RVA 0x34B1BE4

void MBDJMJLHFOO__FAOMJIPNHPL(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  int index_00;
  
  if ((DAT_04568565 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568565 = 1;
  }
  index = (uint)(__this->fields).ODOKIDEGENN * 2;
  if (index < (__this->fields).MONBPDGKCOM) {
    do {
      pSVar1 = (__this->fields).DGPKPHAHOJP;
      if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
LAB_035b1cd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      index_00 = 0;
      while( true ) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035b1cd8;
        if (*(int *)&pIVar2[1].monitor <= index_00) break;
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        if ((((pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                  Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                                 ), pIVar2 == (Il2CppObject *)0x0)) ||
            (pIVar2[1].klass == (Il2CppClass *)0x0)) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pIVar2[1].klass,
                                index_00,
                                Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_035b1cd8;
        index_00 = index_00 + 1;
        *(float *)&pIVar2[1].klass = -*(float *)&pIVar2[1].klass;
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
        goto LAB_035b1cd8;
      }
      index = index + 1;
    } while (index < (__this->fields).MONBPDGKCOM);
  }
  return;
}

