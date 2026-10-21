// KAFCPHCBLPL$$PCPBHJGAOOH @ RVA 0x339C478

bool KAFCPHCBLPL__PCPBHJGAOOH(KAFCPHCBLPL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  Il2CppObject *pIVar2;
  ulong uVar3;
  int index;
  
  if ((DAT_04567c83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
    DAT_04567c83 = 1;
  }
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0349c50c:
        return iVar1 <= index;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      uVar3 = (*pIVar2->klass->vtable[4].methodPtr)
                        (pIVar2,AHEFOIOKDOK,pIVar2->klass->vtable[4].method);
      if ((uVar3 & 1) == 0) goto LAB_0349c50c;
      __this_00 = (__this->fields).KDIMDBHMBEM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

