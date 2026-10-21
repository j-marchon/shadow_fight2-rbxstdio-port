// MEJIKMPNBNL$$NCENBOMEPBN @ RVA 0x32E7854

void MEJIKMPNBNL__NCENBOMEPBN(MEJIKMPNBNL_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_0456761c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_0456761c = 1;
  }
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      (*pIVar2->klass->vtable[0x12].methodPtr)
                (pIVar2,LFJGFLNMBMC,pIVar2->klass->vtable[0x12].method);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).BDCBJJGNPMC;
    } while (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

