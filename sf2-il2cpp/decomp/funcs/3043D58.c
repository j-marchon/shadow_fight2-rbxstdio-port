// PJKHAJKEHEL$$BJFLFMOBCCC @ RVA 0x3043D58

int32_t PJKHAJKEHEL__BJFLFMOBCCC
                  (PJKHAJKEHEL_o *__this,System_String_o *KGLJICLJHEL,bool *CBKCBBGLNKE,
                  MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  Il2CppObject *pIVar2;
  int iVar3;
  int index;
  int32_t local_44;
  
  if ((DAT_04565dbf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    DAT_04565dbf = 1;
  }
  local_44 = 0;
  __this_00 = (__this->fields).INGEFFGPJPB;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar3 = 0;
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return iVar3;
      }
      local_44 = 0;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[0xe].klass == (Il2CppClass *)0x0)) break;
      bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                        ((FPLCEOJCPOD_o *)pIVar2[0xe].klass,KGLJICLJHEL,&local_44,true,false,
                         (MethodInfo *)0x0);
      if (bVar1) {
        *CBKCBBGLNKE = true;
        iVar3 = local_44 + iVar3;
      }
      __this_00 = (__this->fields).INGEFFGPJPB;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

