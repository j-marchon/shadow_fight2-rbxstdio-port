// HEFOANCOHDC$$EGAHACPKIAG @ RVA 0x34222D8

bool HEFOANCOHDC__EGAHACPKIAG(HEFOANCOHDC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  int index;
  
  if ((DAT_045680e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045680e2 = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  __this_00 = (__this->fields).FMFKGEJLDGO;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
        return index < iVar1;
      }
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<string>_get_Item__);
      bVar2 = System_String__op_Equality(a,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar2) {
        return index < iVar1;
      }
      __this_00 = (__this->fields).FMFKGEJLDGO;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

