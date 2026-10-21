// OPNFCOGALLI$$ICJLPHPDDEO @ RVA 0x3106A60

bool OPNFCOGALLI__ICJLPHPDDEO(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *__this_00;
  Il2CppObject *pIVar3;
  
  if ((DAT_04566510 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
    DAT_04566510 = 1;
  }
  __this_00 = (__this->fields).IFHALHIGBNM;
  if (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      bVar2 = false;
    }
    else {
      iVar1 = (__this->fields).GICJKGDDOLE;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03206af4;
      bVar2 = iVar1 < *(int *)&pIVar3[1].monitor;
    }
    return bVar2;
  }
LAB_03206af4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

