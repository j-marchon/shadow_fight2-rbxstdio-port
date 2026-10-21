// ECENNHNBAME$$NHELADLJDNP @ RVA 0x301509C

bool ECENNHNBAME__NHELADLJDNP(ECENNHNBAME_o *__this,System_String_o *NFHDILMBKLK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *a;
  int index;
  
  if ((DAT_04565bd3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04565bd3 = 1;
  }
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_03115128:
        return index < iVar1;
      }
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 03115110 to 032154eb has its CatchHandler @ 03115110
                       catch() { ... } // from try @ 03115110 with catch @ 03115110
                       catch() { ... } // from try @ 031155a4 with catch @ 03115110
                       catch() { ... } // from try @ 031157c0 with catch @ 03115110
                       catch() { ... } // from try @ 0311583c with catch @ 03115110
                       catch() { ... } // from try @ 031158e0 with catch @ 03115110
                       catch() { ... } // from try @ 03115960 with catch @ 03115110
                       catch() { ... } // from try @ 031159b0 with catch @ 03115110
                       catch() { ... } // from try @ 031159cc with catch @ 03115110
                       catch() { ... } // from try @ 03115a0c with catch @ 03115110 */
      bVar2 = System_String__op_Equality(a,NFHDILMBKLK,(MethodInfo *)0x0);
      if (bVar2) goto LAB_03115128;
      __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

