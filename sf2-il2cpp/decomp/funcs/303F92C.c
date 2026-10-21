// PJKHAJKEHEL$$NDBIFNGNKJF @ RVA 0x303F92C

void PJKHAJKEHEL__NDBIFNGNKJF(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HEFOANCOHDC__o *collection;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  
  if ((DAT_04565da6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    DAT_04565da6 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).INGEFFGPJPB;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (length < 1) {
      collection = PJKHAJKEHEL__BMDDFABHHCA(__this,method);
    }
    else {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
      __this_00 = (__this->fields).INGEFFGPJPB;
      collection = PJKHAJKEHEL__BMDDFABHHCA(__this,method_00);
      if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_0313f9a0;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_AddRange__);
    PJKHAJKEHEL__PBNHNHLEPEJ(__this,(__this->fields).INGEFFGPJPB,(__this->fields).NJDOELJOLLB,in_x3)
    ;
    return;
  }
LAB_0313f9a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

