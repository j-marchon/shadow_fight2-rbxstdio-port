// ACHLOMELAJE$$JNFJHGPHLGC @ RVA 0x305F754

int32_t ACHLOMELAJE__JNFJHGPHLGC(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  int iVar2;
  int index;
  
  if ((DAT_04565eb3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565eb3 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_00 = MGNPHCAAEIO__DCOFAPICGBA(10,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
LAB_0315f828:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._size < 1) {
    iVar2 = 0;
  }
  else {
    index = 0;
    iVar2 = 0;
    do {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_0315f828;
      index = index + 1;
      iVar2 = iVar2 + (uint)*(byte *)((long)&pIVar1[3].klass + 4);
    } while (index < (__this_00->fields)._size);
  }
  return iVar2;
}

