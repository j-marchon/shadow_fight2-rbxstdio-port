// PJKHAJKEHEL$$BECKAFCMEJC @ RVA 0x303E590

float PJKHAJKEHEL__BECKAFCMEJC
                (PJKHAJKEHEL_o *__this,System_Collections_Generic_List_string__o *IAKEFJJCDFP,
                float NEHMOJOCOPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  int index;
  
  if ((DAT_04565d9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_6489);
    DAT_04565d9f = 1;
  }
  if ((IAKEFJJCDFP != (System_Collections_Generic_List_string__o *)0x0) &&
     (0 < (IAKEFJJCDFP->fields)._size)) {
    index = 0;
    do {
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)IAKEFJJCDFP,index,
                     Method_System_Collections_Generic_List<string>_get_Item__);
      bVar1 = System_String__op_Equality(a,StringLiteral_6489,(MethodInfo *)0x0);
      if (bVar1) {
        return (__this->fields).GPKDIKPKBPH * NEHMOJOCOPE;
      }
      index = index + 1;
    } while (index < (IAKEFJJCDFP->fields)._size);
  }
  return NEHMOJOCOPE;
}

